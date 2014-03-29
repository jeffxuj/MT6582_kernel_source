/*
 * Copyright 2011-2012, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "bcinfo/BitcodeTranslator.h"

#include "bcinfo/BitcodeWrapper.h"

#include "BitReader_2_7/BitReader_2_7.h"
#include "BitReader_3_0/BitReader_3_0.h"

#define LOG_TAG "bcinfo"
#include <cutils/log.h>

#include "llvm/ADT/OwningPtr.h"
#include "llvm/Bitcode/BitstreamWriter.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/LLVMContext.h"
#include "llvm/Module.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/raw_ostream.h"

#include <cstdlib>

namespace bcinfo {

/**
 * Define minimum and maximum target API versions. These correspond to the
 * same API levels used by the standard Android SDK.
 *
 * LLVM 2.7
 *  11 - Honeycomb
 *  12 - Honeycomb MR1
 *  13 - Honeycomb MR2
 *
 * LLVM 3.0
 *  14 - Ice Cream Sandwich
 *  15 - Ice Cream Sandwich MR1
 *
 * LLVM 3.1
 *  16 - Ice Cream Sandwich MR2
 */
static const unsigned int kMinimumAPIVersion = 11;
static const unsigned int kMaximumAPIVersion = BCINFO_API_VERSION;
static const unsigned int kCurrentAPIVersion = 10000;

/**
 * The minimum version which does not require translation (i.e. is already
 * compatible with LLVM's default bitcode reader).
 */
static const unsigned int kMinimumUntranslatedVersion = 16;
static const unsigned int kMinimumCompatibleVersion_LLVM_3_0 = 14;
static const unsigned int kMinimumCompatibleVersion_LLVM_2_7 = 11;


BitcodeTranslator::BitcodeTranslator(const char *bitcode, size_t bitcodeSize,
                                     unsigned int version)
    : mBitcode(bitcode), mBitcodeSize(bitcodeSize), mTranslatedBitcode(NULL),
      mTranslatedBitcodeSize(0), mVersion(version) {
  return;
}


BitcodeTranslator::~BitcodeTranslator() {
  if (mVersion < kMinimumUntranslatedVersion) {
    // We didn't actually do a translation in the alternate case, so deleting
    // the bitcode would be improper.
    delete [] mTranslatedBitcode;
  }
  mTranslatedBitcode = NULL;
  return;
}


bool BitcodeTranslator::translate() {
  if (!mBitcode || !mBitcodeSize) {
    ALOGE("Invalid/empty bitcode");
    return false;
  }

  BitcodeWrapper BCWrapper(mBitcode, mBitcodeSize);
  if (BCWrapper.getTargetAPI() != mVersion) {
    ALOGE("Bitcode wrapper (%u) and translator (%u) disagree about target API",
          BCWrapper.getTargetAPI(), mVersion);
  }

  if ((mVersion != kCurrentAPIVersion) &&
      ((mVersion < kMinimumAPIVersion) ||
       (mVersion > kMaximumAPIVersion))) {
    ALOGE("Invalid API version: %u is out of range ('%u' - '%u')", mVersion,
         kMinimumAPIVersion, kMaximumAPIVersion);
    return false;
  }

  // We currently don't need to transcode any API version higher than 14 or
  // the current API version (i.e. 10000)
  if (mVersion >= kMinimumUntranslatedVersion) {
    mTranslatedBitcode = mBitcode;
    mTranslatedBitcodeSize = mBitcodeSize;
    return true;
  }

  // Do the actual transcoding by invoking a 2.7-era bitcode reader that can
  // then write the bitcode back out in a more modern (acceptable) version.
  llvm::OwningPtr<llvm::LLVMContext> mContext(new llvm::LLVMContext());
  llvm::OwningPtr<llvm::MemoryBuffer> MEM(
    llvm::MemoryBuffer::getMemBuffer(
      llvm::StringRef(mBitcode, mBitcodeSize), "", false));
  std::string error;

  // Module ownership is handled by the context, so we don't need to free it.
  llvm::Module *module = NULL;

  if (mVersion >= kMinimumCompatibleVersion_LLVM_3_0) {
    module = llvm_3_0::ParseBitcodeFile(MEM.get(), *mContext, &error);
  } else if (mVersion >= kMinimumCompatibleVersion_LLVM_2_7) {
    module = llvm_2_7::ParseBitcodeFile(MEM.get(), *mContext, &error);
  } else {
    ALOGE("No compatible bitcode reader for API version %d", mVersion);
    return false;
  }

  if (!module) {
    ALOGE("Could not parse bitcode file");
    ALOGE("%s", error.c_str());
    return false;
  }

  std::string Buffer;

  llvm::raw_string_ostream OS(Buffer);
  llvm::WriteBitcodeToFile(module, OS);
  OS.flush();

  AndroidBitcodeWrapper wrapper;
  size_t actualWrapperLen = writeAndroidBitcodeWrapper(
      &wrapper, Buffer.size(), BCWrapper.getTargetAPI(),
      BCWrapper.getCompilerVersion(), BCWrapper.getOptimizationLevel());
  if (!actualWrapperLen) {
    ALOGE("Couldn't produce bitcode wrapper!");
    return false;
  }

  mTranslatedBitcodeSize = actualWrapperLen + Buffer.size();
  char *c = new char[mTranslatedBitcodeSize];
  memcpy(c, &wrapper, actualWrapperLen);
  memcpy(c + actualWrapperLen, Buffer.c_str(), Buffer.size());

  mTranslatedBitcode = c;

  return true;
}

}  // namespace bcinfo
