/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SOFTAP_CONTROLLER_H
#define _SOFTAP_CONTROLLER_H

#include <linux/in.h>
#include <net/if.h>

#define SOFTAP_MAX_BUFFER_SIZE	4096
#define AP_BSS_START_DELAY	0
#define AP_BSS_STOP_DELAY	0
#define AP_SET_CFG_DELAY	0
#define AP_DRIVER_START_DELAY	0
#define AP_CONNECT_TO_DAEMON_DELAY  100000

class SoftapController {
    char mBuf[SOFTAP_MAX_BUFFER_SIZE];
    char mIface[IFNAMSIZ];
    pid_t mPid;
    int mSock;
    int mDaemonState;

    int setConfig(const char *cmd, const char *arg);
    int setCommand(char *iface, const char *cmd, unsigned buflen=0);
public:
    SoftapController();
    virtual ~SoftapController();

    int startDriver(char *iface);
    int stopDriver(char *iface);
    int startSoftap();
    int stopSoftap();
    bool isSoftapStarted();
    int setSoftap(int argc, char *argv[]);
    void generatePsk(char *ssid, char *passphrase, char *psk);
    int fwReloadSoftap(int argc, char *argv[]);
    int clientsSoftap(char **retbuf);
    int getChannelList(int buf_len, char *buf_list);
    /** M: Whole chip reset */
    int clearPid();
};

#endif
