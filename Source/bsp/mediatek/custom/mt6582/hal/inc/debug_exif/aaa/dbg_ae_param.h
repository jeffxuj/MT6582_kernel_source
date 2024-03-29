#ifndef _DBG_AE_PARAM_H_
#define _DBG_AE_PARAM_H_

// AE debug info
#define AE_DEBUG_TAG_VERSION (1)
#define AE_DEBUG_TAG_SIZE 1024  

typedef struct
{
    AAA_DEBUG_TAG_T Tag[AE_DEBUG_TAG_SIZE];
} AE_DEBUG_INFO_T;

enum {
AE_TAG_DEBUG_VERSION = 0,	
AE_TAG_PRV_INDEX,
AE_TAG_PRV_SHUTTER_TIME,
AE_TAG_PRV_SENSOR_GAIN,
AE_TAG_PRV_ISP_GAIN,
AE_TAG_PRV_ISO_REAL,
AE_TAG_PRV_FRAME_RATE,
AE_TAG_PRV_FLARE,
AE_TAG_PRV_FLARE_GAIN,
AE_TAG_AF_PLINE_EN,
AE_TAG_AF_ZSD_PLINE_EN,
AE_TAG_AF_SHUTTER_TIME,
AE_TAG_AF_SENSOR_GAIN,
AE_TAG_AF_ISP_GAIN,
AE_TAG_AF_ISO_REAL,
AE_TAG_AF_FRAME_RATE,
AE_TAG_AF_FLARE,
AE_TAG_AF_FLARE_GAIN,
AE_TAG_CAP_INDEX,
AE_TAG_CAP_SHUTTER_TIME,
AE_TAG_CAP_SENSOR_GAIN,
AE_TAG_CAP_ISP_GAIN,
AE_TAG_CAP_ISO_REAL,
AE_TAG_CAP_FRAME_RATE,
AE_TAG_CAP_FLARE,
AE_TAG_CAP_FLARE_GAIN,
AE_TAG_STROBE_PLINE_EN,
AE_TAG_STROBE_ZSD_PLINE_EN,

AE_TAG_ZSD_EN,
AE_TAG_REALISO_EN,
AE_TAG_APERTURE,
AE_TAG_PRV_AETABLE_ID,
AE_TAG_CAP_AETABLE_ID,
AE_TAG_LV,
AE_TAG_EV,
AE_TAG_AEMODE,
AE_TAG_EV_COM,
AE_TAG_FLICKER,
AE_TAG_FLICKER_AUTO,
AE_TAG_AEMETER,
AE_TAG_ISO_SETTING,

AE_TAG_MINI_GAIN,    
AE_TAG_MAX_GAIN,    
AE_TAG_1XGAIN_ISO,    
AE_TAG_PRV_EXP_UINT,
AE_TAG_VIDEO_EXP_UINT,
AE_TAG_VIDEO_PRV_RATIO,
AE_TAG_CAP_EXP_UINT,
AE_TAG_CAP_PRV_RATIO,

AE_TAG_HIST_HIGHTHRES,
AE_TAG_HIST_LOWTHRES,
AE_TAG_MOST_BRIGHT_RATIO,
AE_TAG_MOST_DARK_RATIO,
AE_TAG_CEN_HIGH_BOUND,
AE_TAG_CEN_LOW_BOUND,
AE_TAG_OVEREXP_THRES,
AE_TAG_HISTSTRETCH_THRES,
AE_TAG_BACKLIGHT_THRES,

AE_TAG_EN_FALRE_CAPTURE_THRES,
AE_TAG_EN_FLARE_VIDEO_THRES,
AE_TAG_EN_FLARE_STROBE_THRES,

AE_TAG_INDOOR,
AE_TAG_BV_OFFSET,
AE_TAG_PRV_FLARE_OFFSET,
AE_TAG_CAP_FLARE_OFFSET,
AE_TAG_CAP_FLARE_THRES,
AE_TAG_VIDEO_FLARE_OFFSET,
AE_TAG_VIDEO_FLARE_THRES,
AE_TAG_STROBE_FLARE_OFFSET,
AE_TAG_STROBE_FLARE_THRES,
AE_TAG_CAP_MAX_FLARE_THRES,
AE_TAG_CAP_MIN_FLARE_THRES,
AE_TAG_VIDEO_MAX_FLARE_THRES,
AE_TAG_VIDEO_MIN_FLARE_THRES,

AE_TAG_BACKLIGH_HIT,
AE_TAG_BACKLIGH_EN,
AE_TAG_BACKLIGH_WEIGHTING,
AE_TAG_BACKLIGH_METERING,
AE_TAG_HISTSTRETCH_HIT,
AE_TAG_HISTSTRETCH_EN,
AE_TAG_HISTSTRETCH_WEIGHTING,
AE_TAG_HISTSTRETCH_METERING,
AE_TAG_ANTIOVER_HIT,
AE_TAG_ANTIOVER_EN,
AE_TAG_ANTIOVER_WEIGHTING,
AE_TAG_ANTIOVER_METERING,
AE_TAG_FLATNESS,
AE_TAG_FLATNESS_THRES,
AE_TAG_FLATNESS_STRENGTH,

AE_TAG_HIST_INFO_HIGHY,
AE_TAG_HIST_INFO_LOWY,
AE_TAG_HIST_INFO_MAXBIN,
AE_TAG_HIST_INFO_BRIGHTEST,
AE_TAG_HIST_INFO_DARKEST,
AE_TAG_HIST_INFO_BRIGHTHALF,
AE_TAG_HIST_INFO_DARKHALF,
AE_TAG_HIST_INFO_DOWN_BRIGHTEST,
AE_TAG_HIST_INFO_FULL_BRIGHTEST,

AE_TAG_EN_SATURATION_CHECK,
AE_TAG_EN_PRE_INDEX,
AE_TAG_EN_ROTATE_WEIGHT,
AE_TAG_EN_EV0_STROBE_TRIGGER,
AE_TAG_EN_LOCK_CAM_PRE_METERING_WIN,
AE_TAG_EN_LOCK_VDO_PRE_METERING_WIN,
AE_TAG_EN_LOCK_VDO_REC_METERING_WIN,
AE_TAG_EN_SKIP_AE_BEFORE_AF,
AE_TAG_EN_PREAF_LOCK_AE,
AE_TAG_EN_STROBE_FLARE_BY_CAPTURE,
AE_TAG_EN_FACE_AE,
AE_TAG_EN_METER_AE,
AE_TAG_EN_FLARE_MAX_STEP_GAP_LIMIT,

AE_TAG_METERING_STABLE_MAX,
AE_TAG_METERING_STABLE_MIN,
AE_TAG_X_BLOCK_NO,
AE_TAG_Y_BLOCK_NO,
AE_TAG_AF_LOW_SKIP_RATIO,
AE_TAG_AF_HIGH_SKIP_RATIO,
AE_TAG_FACE_HIGH_BOUND,
AE_TAG_FACE_LOW_BOUND,
AE_TAG_METERING_HIGH_BOUND,
AE_TAG_METERING_LOW_BOUND,

AE_TAG_PRV_FALRE_WEIGHT_0,
AE_TAG_PRV_FALRE_WEIGHT_1,
AE_TAG_PRV_FALRE_WEIGHT_2,
AE_TAG_PRV_FALRE_WEIGHT_3,
AE_TAG_PRV_FALRE_WEIGHT_4,
AE_TAG_PRV_FALRE_WEIGHT_5,
AE_TAG_PRV_FALRE_WEIGHT_6,
AE_TAG_PRV_FALRE_WEIGHT_7,
AE_TAG_PRV_FALRE_WEIGHT_8,
AE_TAG_PRV_FALRE_WEIGHT_9,
AE_TAG_PRV_FALRE_WEIGHT_10,
AE_TAG_PRV_FALRE_WEIGHT_11,
AE_TAG_PRV_FALRE_WEIGHT_12,
AE_TAG_PRV_FALRE_WEIGHT_13,
AE_TAG_PRV_FALRE_WEIGHT_14,
AE_TAG_PRV_FALRE_WEIGHT_15,
AE_TAG_VIDEO_FALRE_WEIGHT_0,
AE_TAG_VIDEO_FALRE_WEIGHT_1,
AE_TAG_VIDEO_FALRE_WEIGHT_2,
AE_TAG_VIDEO_FALRE_WEIGHT_3,
AE_TAG_VIDEO_FALRE_WEIGHT_4,
AE_TAG_VIDEO_FALRE_WEIGHT_5,
AE_TAG_VIDEO_FALRE_WEIGHT_6,
AE_TAG_VIDEO_FALRE_WEIGHT_7,
AE_TAG_VIDEO_FALRE_WEIGHT_8,
AE_TAG_VIDEO_FALRE_WEIGHT_9,
AE_TAG_VIDEO_FALRE_WEIGHT_10,
AE_TAG_VIDEO_FALRE_WEIGHT_11,
AE_TAG_VIDEO_FALRE_WEIGHT_12,
AE_TAG_VIDEO_FALRE_WEIGHT_13,
AE_TAG_VIDEO_FALRE_WEIGHT_14,
AE_TAG_VIDEO_FALRE_WEIGHT_15,
AE_TAG_FLARE_STD_THR_HIGH,
AE_TAG_FLARE_STD_THR_LOW,
AE_TAG_PRV_CAP_FLARE_DIFF,
AE_TAG_FLARE_MAX_STEP_GAP_FAST,
AE_TAG_FLARE_MAX_STEP_GAP_SLOW,
AE_TAG_FLARE_MAX_STEP_GAP_LIMIT_BV,
AE_TAG_FLARE_AE_STABLE_COUNT,

AE_TAG_CWV,
AE_TAG_AVG,
AE_TAG_CENTRAL_Y,
AE_TAG_CWV_FINAL_TARGET,
AE_TAG_AE_TARGET,
AE_TAG_STROBE_TARGET,
AE_TAG_INIT_INDEX,

AE_TAG_FACE_Y,
AE_TAG_FACE_CENTRAL_Y,
AE_TAG_FACE_FULL_Y,
AE_TAG_FACE_WEIGHTING,

AE_TAG_METERING_Y,
AE_TAG_METERING_Y0,
AE_TAG_METERING_Y1,
AE_TAG_METERING_Y2,
AE_TAG_METERING_Y3,
AE_TAG_METERING_Y4,
AE_TAG_METERING_Y5,
AE_TAG_METERING_Y6,
AE_TAG_METERING_Y7,
AE_TAG_METERING_Y8,

AE_TAG_PRV_MAX_BLOCK_WIDTH,
AE_TAG_PRV_MAX_BLOCK_HEIGHT,
AE_TAG_STAT_XLOW,
AE_TAG_STAT_XHI,
AE_TAG_STAT_YLOW,
AE_TAG_STAT_YHI,
AE_TAG_FACE_XLOW,
AE_TAG_FACE_XHI,
AE_TAG_FACE_YLOW,
AE_TAG_FACE_YHI,
AE_TAG_FACE_WEIGHT,
AE_TAG_METERING_CNT,
AE_TAG_METERING0_XLOW,
AE_TAG_METERING0_XHI,
AE_TAG_METERING0_YLOW,
AE_TAG_METERING0_YHI,
AE_TAG_METERING0_WEIGHT,
AE_TAG_METERING1_XLOW,
AE_TAG_METERING1_XHI,
AE_TAG_METERING1_YLOW,
AE_TAG_METERING1_YHI,
AE_TAG_METERING1_WEIGHT,
AE_TAG_METERING2_XLOW,
AE_TAG_METERING2_XHI,
AE_TAG_METERING2_YLOW,
AE_TAG_METERING2_YHI,
AE_TAG_METERING2_WEIGHT,
AE_TAG_METERING3_XLOW,
AE_TAG_METERING3_XHI,
AE_TAG_METERING3_YLOW,
AE_TAG_METERING3_YHI,
AE_TAG_METERING3_WEIGHT,
AE_TAG_METERING4_XLOW,
AE_TAG_METERING4_XHI,
AE_TAG_METERING4_YLOW,
AE_TAG_METERING4_YHI,
AE_TAG_METERING4_WEIGHT,
AE_TAG_METERING5_XLOW,
AE_TAG_METERING5_XHI,
AE_TAG_METERING5_YLOW,
AE_TAG_METERING5_YHI,
AE_TAG_METERING5_WEIGHT,
AE_TAG_METERING6_XLOW,
AE_TAG_METERING6_XHI,
AE_TAG_METERING6_YLOW,
AE_TAG_METERING6_YHI,
AE_TAG_METERING6_WEIGHT,
AE_TAG_METERING7_XLOW,
AE_TAG_METERING7_XHI,
AE_TAG_METERING7_YLOW,
AE_TAG_METERING7_YHI,
AE_TAG_METERING7_WEIGHT,
AE_TAG_METERING8_XLOW,
AE_TAG_METERING8_XHI,
AE_TAG_METERING8_YLOW,
AE_TAG_METERING8_YHI,
AE_TAG_METERING8_WEIGHT,
AE_TAG_HIST0_BIN,
AE_TAG_HIST0_MODE,
AE_TAG_HIST0_XLOW_RATIO,
AE_TAG_HIST0_XHI_RATIO,
AE_TAG_HIST0_YLOW_RATIO,
AE_TAG_HIST0_YHI_RATIO,
AE_TAG_HIST0_XLOW,
AE_TAG_HIST0_XHI,
AE_TAG_HIST0_YLOW,
AE_TAG_HIST0_YHI,
AE_TAG_HIST1_BIN,
AE_TAG_HIST1_MODE,
AE_TAG_HIST1_XLOW_RATIO,
AE_TAG_HIST1_XHI_RATIO,
AE_TAG_HIST1_YLOW_RATIO,
AE_TAG_HIST1_YHI_RATIO,
AE_TAG_HIST1_XLOW,
AE_TAG_HIST1_XHI,
AE_TAG_HIST1_YLOW,
AE_TAG_HIST1_YHI,
AE_TAG_HIST2_BIN,
AE_TAG_HIST2_MODE,
AE_TAG_HIST2_XLOW_RATIO,
AE_TAG_HIST2_XHI_RATIO,
AE_TAG_HIST2_YLOW_RATIO,
AE_TAG_HIST2_YHI_RATIO,
AE_TAG_HIST2_XLOW,
AE_TAG_HIST2_XHI,
AE_TAG_HIST2_YLOW,
AE_TAG_HIST2_YHI,
AE_TAG_HIST3_BIN,
AE_TAG_HIST3_MODE,
AE_TAG_HIST3_XLOW_RATIO,
AE_TAG_HIST3_XHI_RATIO,
AE_TAG_HIST3_YLOW_RATIO,
AE_TAG_HIST3_YHI_RATIO,
AE_TAG_HIST3_XLOW,
AE_TAG_HIST3_XHI,
AE_TAG_HIST3_YLOW,
AE_TAG_HIST3_YHI,
AE_TAG_STAT_WIN00,
AE_TAG_STAT_WIN01,
AE_TAG_STAT_WIN02,
AE_TAG_STAT_WIN03,
AE_TAG_STAT_WIN04,
AE_TAG_STAT_WIN10,
AE_TAG_STAT_WIN11,
AE_TAG_STAT_WIN12,
AE_TAG_STAT_WIN13,
AE_TAG_STAT_WIN14,
AE_TAG_STAT_WIN20,
AE_TAG_STAT_WIN21,
AE_TAG_STAT_WIN22,
AE_TAG_STAT_WIN23,
AE_TAG_STAT_WIN24,
AE_TAG_STAT_WIN30,
AE_TAG_STAT_WIN31,
AE_TAG_STAT_WIN32,
AE_TAG_STAT_WIN33,
AE_TAG_STAT_WIN34,
AE_TAG_STAT_WIN40,
AE_TAG_STAT_WIN41,
AE_TAG_STAT_WIN42,
AE_TAG_STAT_WIN43,
AE_TAG_STAT_WIN44,
AE_TAG_HIST0_INFO_BIN_0,
AE_TAG_HIST0_INFO_BIN_1,
AE_TAG_HIST0_INFO_BIN_2,
AE_TAG_HIST0_INFO_BIN_3,
AE_TAG_HIST0_INFO_BIN_4,
AE_TAG_HIST0_INFO_BIN_5,
AE_TAG_HIST0_INFO_BIN_6,
AE_TAG_HIST0_INFO_BIN_7,
AE_TAG_HIST0_INFO_BIN_8,
AE_TAG_HIST0_INFO_BIN_9,
AE_TAG_HIST0_INFO_BIN_10,
AE_TAG_HIST0_INFO_BIN_11,
AE_TAG_HIST0_INFO_BIN_12,
AE_TAG_HIST0_INFO_BIN_13,
AE_TAG_HIST0_INFO_BIN_14,
AE_TAG_HIST0_INFO_BIN_15,
AE_TAG_HIST0_INFO_BIN_16,
AE_TAG_HIST0_INFO_BIN_17,
AE_TAG_HIST0_INFO_BIN_18,
AE_TAG_HIST0_INFO_BIN_19,
AE_TAG_HIST0_INFO_BIN_20,
AE_TAG_HIST0_INFO_BIN_21,
AE_TAG_HIST0_INFO_BIN_22,
AE_TAG_HIST0_INFO_BIN_23,
AE_TAG_HIST0_INFO_BIN_24,
AE_TAG_HIST0_INFO_BIN_25,
AE_TAG_HIST0_INFO_BIN_26,
AE_TAG_HIST0_INFO_BIN_27,
AE_TAG_HIST0_INFO_BIN_28,
AE_TAG_HIST0_INFO_BIN_29,
AE_TAG_HIST0_INFO_BIN_30,
AE_TAG_HIST0_INFO_BIN_31,
AE_TAG_HIST0_INFO_BIN_32,
AE_TAG_HIST0_INFO_BIN_33,
AE_TAG_HIST0_INFO_BIN_34,
AE_TAG_HIST0_INFO_BIN_35,
AE_TAG_HIST0_INFO_BIN_36,
AE_TAG_HIST0_INFO_BIN_37,
AE_TAG_HIST0_INFO_BIN_38,
AE_TAG_HIST0_INFO_BIN_39,
AE_TAG_HIST0_INFO_BIN_40,
AE_TAG_HIST0_INFO_BIN_41,
AE_TAG_HIST0_INFO_BIN_42,
AE_TAG_HIST0_INFO_BIN_43,
AE_TAG_HIST0_INFO_BIN_44,
AE_TAG_HIST0_INFO_BIN_45,
AE_TAG_HIST0_INFO_BIN_46,
AE_TAG_HIST0_INFO_BIN_47,
AE_TAG_HIST0_INFO_BIN_48,
AE_TAG_HIST0_INFO_BIN_49,
AE_TAG_HIST0_INFO_BIN_50,
AE_TAG_HIST0_INFO_BIN_51,
AE_TAG_HIST0_INFO_BIN_52,
AE_TAG_HIST0_INFO_BIN_53,
AE_TAG_HIST0_INFO_BIN_54,
AE_TAG_HIST0_INFO_BIN_55,
AE_TAG_HIST0_INFO_BIN_56,
AE_TAG_HIST0_INFO_BIN_57,
AE_TAG_HIST0_INFO_BIN_58,
AE_TAG_HIST0_INFO_BIN_59,
AE_TAG_HIST0_INFO_BIN_60,
AE_TAG_HIST0_INFO_BIN_61,
AE_TAG_HIST0_INFO_BIN_62,
AE_TAG_HIST0_INFO_BIN_63,
AE_TAG_HIST0_INFO_BIN_64,
AE_TAG_HIST0_INFO_BIN_65,
AE_TAG_HIST0_INFO_BIN_66,
AE_TAG_HIST0_INFO_BIN_67,
AE_TAG_HIST0_INFO_BIN_68,
AE_TAG_HIST0_INFO_BIN_69,
AE_TAG_HIST0_INFO_BIN_70,
AE_TAG_HIST0_INFO_BIN_71,
AE_TAG_HIST0_INFO_BIN_72,
AE_TAG_HIST0_INFO_BIN_73,
AE_TAG_HIST0_INFO_BIN_74,
AE_TAG_HIST0_INFO_BIN_75,
AE_TAG_HIST0_INFO_BIN_76,
AE_TAG_HIST0_INFO_BIN_77,
AE_TAG_HIST0_INFO_BIN_78,
AE_TAG_HIST0_INFO_BIN_79,
AE_TAG_HIST0_INFO_BIN_80,
AE_TAG_HIST0_INFO_BIN_81,
AE_TAG_HIST0_INFO_BIN_82,
AE_TAG_HIST0_INFO_BIN_83,
AE_TAG_HIST0_INFO_BIN_84,
AE_TAG_HIST0_INFO_BIN_85,
AE_TAG_HIST0_INFO_BIN_86,
AE_TAG_HIST0_INFO_BIN_87,
AE_TAG_HIST0_INFO_BIN_88,
AE_TAG_HIST0_INFO_BIN_89,
AE_TAG_HIST0_INFO_BIN_90,
AE_TAG_HIST0_INFO_BIN_91,
AE_TAG_HIST0_INFO_BIN_92,
AE_TAG_HIST0_INFO_BIN_93,
AE_TAG_HIST0_INFO_BIN_94,
AE_TAG_HIST0_INFO_BIN_95,
AE_TAG_HIST0_INFO_BIN_96,
AE_TAG_HIST0_INFO_BIN_97,
AE_TAG_HIST0_INFO_BIN_98,
AE_TAG_HIST0_INFO_BIN_99,
AE_TAG_HIST0_INFO_BIN_100,
AE_TAG_HIST0_INFO_BIN_101,
AE_TAG_HIST0_INFO_BIN_102,
AE_TAG_HIST0_INFO_BIN_103,
AE_TAG_HIST0_INFO_BIN_104,
AE_TAG_HIST0_INFO_BIN_105,
AE_TAG_HIST0_INFO_BIN_106,
AE_TAG_HIST0_INFO_BIN_107,
AE_TAG_HIST0_INFO_BIN_108,
AE_TAG_HIST0_INFO_BIN_109,
AE_TAG_HIST0_INFO_BIN_110,
AE_TAG_HIST0_INFO_BIN_111,
AE_TAG_HIST0_INFO_BIN_112,
AE_TAG_HIST0_INFO_BIN_113,
AE_TAG_HIST0_INFO_BIN_114,
AE_TAG_HIST0_INFO_BIN_115,
AE_TAG_HIST0_INFO_BIN_116,
AE_TAG_HIST0_INFO_BIN_117,
AE_TAG_HIST0_INFO_BIN_118,
AE_TAG_HIST0_INFO_BIN_119,
AE_TAG_HIST0_INFO_BIN_120,
AE_TAG_HIST0_INFO_BIN_121,
AE_TAG_HIST0_INFO_BIN_122,
AE_TAG_HIST0_INFO_BIN_123,
AE_TAG_HIST0_INFO_BIN_124,
AE_TAG_HIST0_INFO_BIN_125,
AE_TAG_HIST0_INFO_BIN_126,
AE_TAG_HIST0_INFO_BIN_127,
AE_TAG_HIST1_INFO_BIN_0,
AE_TAG_HIST1_INFO_BIN_1,
AE_TAG_HIST1_INFO_BIN_2,
AE_TAG_HIST1_INFO_BIN_3,
AE_TAG_HIST1_INFO_BIN_4,
AE_TAG_HIST1_INFO_BIN_5,
AE_TAG_HIST1_INFO_BIN_6,
AE_TAG_HIST1_INFO_BIN_7,
AE_TAG_HIST1_INFO_BIN_8,
AE_TAG_HIST1_INFO_BIN_9,
AE_TAG_HIST1_INFO_BIN_10,
AE_TAG_HIST1_INFO_BIN_11,
AE_TAG_HIST1_INFO_BIN_12,
AE_TAG_HIST1_INFO_BIN_13,
AE_TAG_HIST1_INFO_BIN_14,
AE_TAG_HIST1_INFO_BIN_15,
AE_TAG_HIST1_INFO_BIN_16,
AE_TAG_HIST1_INFO_BIN_17,
AE_TAG_HIST1_INFO_BIN_18,
AE_TAG_HIST1_INFO_BIN_19,
AE_TAG_HIST1_INFO_BIN_20,
AE_TAG_HIST1_INFO_BIN_21,
AE_TAG_HIST1_INFO_BIN_22,
AE_TAG_HIST1_INFO_BIN_23,
AE_TAG_HIST1_INFO_BIN_24,
AE_TAG_HIST1_INFO_BIN_25,
AE_TAG_HIST1_INFO_BIN_26,
AE_TAG_HIST1_INFO_BIN_27,
AE_TAG_HIST1_INFO_BIN_28,
AE_TAG_HIST1_INFO_BIN_29,
AE_TAG_HIST1_INFO_BIN_30,
AE_TAG_HIST1_INFO_BIN_31,
AE_TAG_HIST1_INFO_BIN_32,
AE_TAG_HIST1_INFO_BIN_33,
AE_TAG_HIST1_INFO_BIN_34,
AE_TAG_HIST1_INFO_BIN_35,
AE_TAG_HIST1_INFO_BIN_36,
AE_TAG_HIST1_INFO_BIN_37,
AE_TAG_HIST1_INFO_BIN_38,
AE_TAG_HIST1_INFO_BIN_39,
AE_TAG_HIST1_INFO_BIN_40,
AE_TAG_HIST1_INFO_BIN_41,
AE_TAG_HIST1_INFO_BIN_42,
AE_TAG_HIST1_INFO_BIN_43,
AE_TAG_HIST1_INFO_BIN_44,
AE_TAG_HIST1_INFO_BIN_45,
AE_TAG_HIST1_INFO_BIN_46,
AE_TAG_HIST1_INFO_BIN_47,
AE_TAG_HIST1_INFO_BIN_48,
AE_TAG_HIST1_INFO_BIN_49,
AE_TAG_HIST1_INFO_BIN_50,
AE_TAG_HIST1_INFO_BIN_51,
AE_TAG_HIST1_INFO_BIN_52,
AE_TAG_HIST1_INFO_BIN_53,
AE_TAG_HIST1_INFO_BIN_54,
AE_TAG_HIST1_INFO_BIN_55,
AE_TAG_HIST1_INFO_BIN_56,
AE_TAG_HIST1_INFO_BIN_57,
AE_TAG_HIST1_INFO_BIN_58,
AE_TAG_HIST1_INFO_BIN_59,
AE_TAG_HIST1_INFO_BIN_60,
AE_TAG_HIST1_INFO_BIN_61,
AE_TAG_HIST1_INFO_BIN_62,
AE_TAG_HIST1_INFO_BIN_63,
AE_TAG_HIST1_INFO_BIN_64,
AE_TAG_HIST1_INFO_BIN_65,
AE_TAG_HIST1_INFO_BIN_66,
AE_TAG_HIST1_INFO_BIN_67,
AE_TAG_HIST1_INFO_BIN_68,
AE_TAG_HIST1_INFO_BIN_69,
AE_TAG_HIST1_INFO_BIN_70,
AE_TAG_HIST1_INFO_BIN_71,
AE_TAG_HIST1_INFO_BIN_72,
AE_TAG_HIST1_INFO_BIN_73,
AE_TAG_HIST1_INFO_BIN_74,
AE_TAG_HIST1_INFO_BIN_75,
AE_TAG_HIST1_INFO_BIN_76,
AE_TAG_HIST1_INFO_BIN_77,
AE_TAG_HIST1_INFO_BIN_78,
AE_TAG_HIST1_INFO_BIN_79,
AE_TAG_HIST1_INFO_BIN_80,
AE_TAG_HIST1_INFO_BIN_81,
AE_TAG_HIST1_INFO_BIN_82,
AE_TAG_HIST1_INFO_BIN_83,
AE_TAG_HIST1_INFO_BIN_84,
AE_TAG_HIST1_INFO_BIN_85,
AE_TAG_HIST1_INFO_BIN_86,
AE_TAG_HIST1_INFO_BIN_87,
AE_TAG_HIST1_INFO_BIN_88,
AE_TAG_HIST1_INFO_BIN_89,
AE_TAG_HIST1_INFO_BIN_90,
AE_TAG_HIST1_INFO_BIN_91,
AE_TAG_HIST1_INFO_BIN_92,
AE_TAG_HIST1_INFO_BIN_93,
AE_TAG_HIST1_INFO_BIN_94,
AE_TAG_HIST1_INFO_BIN_95,
AE_TAG_HIST1_INFO_BIN_96,
AE_TAG_HIST1_INFO_BIN_97,
AE_TAG_HIST1_INFO_BIN_98,
AE_TAG_HIST1_INFO_BIN_99,
AE_TAG_HIST1_INFO_BIN_100,
AE_TAG_HIST1_INFO_BIN_101,
AE_TAG_HIST1_INFO_BIN_102,
AE_TAG_HIST1_INFO_BIN_103,
AE_TAG_HIST1_INFO_BIN_104,
AE_TAG_HIST1_INFO_BIN_105,
AE_TAG_HIST1_INFO_BIN_106,
AE_TAG_HIST1_INFO_BIN_107,
AE_TAG_HIST1_INFO_BIN_108,
AE_TAG_HIST1_INFO_BIN_109,
AE_TAG_HIST1_INFO_BIN_110,
AE_TAG_HIST1_INFO_BIN_111,
AE_TAG_HIST1_INFO_BIN_112,
AE_TAG_HIST1_INFO_BIN_113,
AE_TAG_HIST1_INFO_BIN_114,
AE_TAG_HIST1_INFO_BIN_115,
AE_TAG_HIST1_INFO_BIN_116,
AE_TAG_HIST1_INFO_BIN_117,
AE_TAG_HIST1_INFO_BIN_118,
AE_TAG_HIST1_INFO_BIN_119,
AE_TAG_HIST1_INFO_BIN_120,
AE_TAG_HIST1_INFO_BIN_121,
AE_TAG_HIST1_INFO_BIN_122,
AE_TAG_HIST1_INFO_BIN_123,
AE_TAG_HIST1_INFO_BIN_124,
AE_TAG_HIST1_INFO_BIN_125,
AE_TAG_HIST1_INFO_BIN_126,
AE_TAG_HIST1_INFO_BIN_127,
AE_TAG_HIST2_INFO_BIN_0,
AE_TAG_HIST2_INFO_BIN_1,
AE_TAG_HIST2_INFO_BIN_2,
AE_TAG_HIST2_INFO_BIN_3,
AE_TAG_HIST2_INFO_BIN_4,
AE_TAG_HIST2_INFO_BIN_5,
AE_TAG_HIST2_INFO_BIN_6,
AE_TAG_HIST2_INFO_BIN_7,
AE_TAG_HIST2_INFO_BIN_8,
AE_TAG_HIST2_INFO_BIN_9,
AE_TAG_HIST2_INFO_BIN_10,
AE_TAG_HIST2_INFO_BIN_11,
AE_TAG_HIST2_INFO_BIN_12,
AE_TAG_HIST2_INFO_BIN_13,
AE_TAG_HIST2_INFO_BIN_14,
AE_TAG_HIST2_INFO_BIN_15,
AE_TAG_HIST2_INFO_BIN_16,
AE_TAG_HIST2_INFO_BIN_17,
AE_TAG_HIST2_INFO_BIN_18,
AE_TAG_HIST2_INFO_BIN_19,
AE_TAG_HIST2_INFO_BIN_20,
AE_TAG_HIST2_INFO_BIN_21,
AE_TAG_HIST2_INFO_BIN_22,
AE_TAG_HIST2_INFO_BIN_23,
AE_TAG_HIST2_INFO_BIN_24,
AE_TAG_HIST2_INFO_BIN_25,
AE_TAG_HIST2_INFO_BIN_26,
AE_TAG_HIST2_INFO_BIN_27,
AE_TAG_HIST2_INFO_BIN_28,
AE_TAG_HIST2_INFO_BIN_29,
AE_TAG_HIST2_INFO_BIN_30,
AE_TAG_HIST2_INFO_BIN_31,
AE_TAG_HIST2_INFO_BIN_32,
AE_TAG_HIST2_INFO_BIN_33,
AE_TAG_HIST2_INFO_BIN_34,
AE_TAG_HIST2_INFO_BIN_35,
AE_TAG_HIST2_INFO_BIN_36,
AE_TAG_HIST2_INFO_BIN_37,
AE_TAG_HIST2_INFO_BIN_38,
AE_TAG_HIST2_INFO_BIN_39,
AE_TAG_HIST2_INFO_BIN_40,
AE_TAG_HIST2_INFO_BIN_41,
AE_TAG_HIST2_INFO_BIN_42,
AE_TAG_HIST2_INFO_BIN_43,
AE_TAG_HIST2_INFO_BIN_44,
AE_TAG_HIST2_INFO_BIN_45,
AE_TAG_HIST2_INFO_BIN_46,
AE_TAG_HIST2_INFO_BIN_47,
AE_TAG_HIST2_INFO_BIN_48,
AE_TAG_HIST2_INFO_BIN_49,
AE_TAG_HIST2_INFO_BIN_50,
AE_TAG_HIST2_INFO_BIN_51,
AE_TAG_HIST2_INFO_BIN_52,
AE_TAG_HIST2_INFO_BIN_53,
AE_TAG_HIST2_INFO_BIN_54,
AE_TAG_HIST2_INFO_BIN_55,
AE_TAG_HIST2_INFO_BIN_56,
AE_TAG_HIST2_INFO_BIN_57,
AE_TAG_HIST2_INFO_BIN_58,
AE_TAG_HIST2_INFO_BIN_59,
AE_TAG_HIST2_INFO_BIN_60,
AE_TAG_HIST2_INFO_BIN_61,
AE_TAG_HIST2_INFO_BIN_62,
AE_TAG_HIST2_INFO_BIN_63,
AE_TAG_HIST2_INFO_BIN_64,
AE_TAG_HIST2_INFO_BIN_65,
AE_TAG_HIST2_INFO_BIN_66,
AE_TAG_HIST2_INFO_BIN_67,
AE_TAG_HIST2_INFO_BIN_68,
AE_TAG_HIST2_INFO_BIN_69,
AE_TAG_HIST2_INFO_BIN_70,
AE_TAG_HIST2_INFO_BIN_71,
AE_TAG_HIST2_INFO_BIN_72,
AE_TAG_HIST2_INFO_BIN_73,
AE_TAG_HIST2_INFO_BIN_74,
AE_TAG_HIST2_INFO_BIN_75,
AE_TAG_HIST2_INFO_BIN_76,
AE_TAG_HIST2_INFO_BIN_77,
AE_TAG_HIST2_INFO_BIN_78,
AE_TAG_HIST2_INFO_BIN_79,
AE_TAG_HIST2_INFO_BIN_80,
AE_TAG_HIST2_INFO_BIN_81,
AE_TAG_HIST2_INFO_BIN_82,
AE_TAG_HIST2_INFO_BIN_83,
AE_TAG_HIST2_INFO_BIN_84,
AE_TAG_HIST2_INFO_BIN_85,
AE_TAG_HIST2_INFO_BIN_86,
AE_TAG_HIST2_INFO_BIN_87,
AE_TAG_HIST2_INFO_BIN_88,
AE_TAG_HIST2_INFO_BIN_89,
AE_TAG_HIST2_INFO_BIN_90,
AE_TAG_HIST2_INFO_BIN_91,
AE_TAG_HIST2_INFO_BIN_92,
AE_TAG_HIST2_INFO_BIN_93,
AE_TAG_HIST2_INFO_BIN_94,
AE_TAG_HIST2_INFO_BIN_95,
AE_TAG_HIST2_INFO_BIN_96,
AE_TAG_HIST2_INFO_BIN_97,
AE_TAG_HIST2_INFO_BIN_98,
AE_TAG_HIST2_INFO_BIN_99,
AE_TAG_HIST2_INFO_BIN_100,
AE_TAG_HIST2_INFO_BIN_101,
AE_TAG_HIST2_INFO_BIN_102,
AE_TAG_HIST2_INFO_BIN_103,
AE_TAG_HIST2_INFO_BIN_104,
AE_TAG_HIST2_INFO_BIN_105,
AE_TAG_HIST2_INFO_BIN_106,
AE_TAG_HIST2_INFO_BIN_107,
AE_TAG_HIST2_INFO_BIN_108,
AE_TAG_HIST2_INFO_BIN_109,
AE_TAG_HIST2_INFO_BIN_110,
AE_TAG_HIST2_INFO_BIN_111,
AE_TAG_HIST2_INFO_BIN_112,
AE_TAG_HIST2_INFO_BIN_113,
AE_TAG_HIST2_INFO_BIN_114,
AE_TAG_HIST2_INFO_BIN_115,
AE_TAG_HIST2_INFO_BIN_116,
AE_TAG_HIST2_INFO_BIN_117,
AE_TAG_HIST2_INFO_BIN_118,
AE_TAG_HIST2_INFO_BIN_119,
AE_TAG_HIST2_INFO_BIN_120,
AE_TAG_HIST2_INFO_BIN_121,
AE_TAG_HIST2_INFO_BIN_122,
AE_TAG_HIST2_INFO_BIN_123,
AE_TAG_HIST2_INFO_BIN_124,
AE_TAG_HIST2_INFO_BIN_125,
AE_TAG_HIST2_INFO_BIN_126,
AE_TAG_HIST2_INFO_BIN_127,
AE_TAG_HIST3_INFO_BIN_0,
AE_TAG_HIST3_INFO_BIN_1,
AE_TAG_HIST3_INFO_BIN_2,
AE_TAG_HIST3_INFO_BIN_3,
AE_TAG_HIST3_INFO_BIN_4,
AE_TAG_HIST3_INFO_BIN_5,
AE_TAG_HIST3_INFO_BIN_6,
AE_TAG_HIST3_INFO_BIN_7,
AE_TAG_HIST3_INFO_BIN_8,
AE_TAG_HIST3_INFO_BIN_9,
AE_TAG_HIST3_INFO_BIN_10,
AE_TAG_HIST3_INFO_BIN_11,
AE_TAG_HIST3_INFO_BIN_12,
AE_TAG_HIST3_INFO_BIN_13,
AE_TAG_HIST3_INFO_BIN_14,
AE_TAG_HIST3_INFO_BIN_15,
AE_TAG_HIST3_INFO_BIN_16,
AE_TAG_HIST3_INFO_BIN_17,
AE_TAG_HIST3_INFO_BIN_18,
AE_TAG_HIST3_INFO_BIN_19,
AE_TAG_HIST3_INFO_BIN_20,
AE_TAG_HIST3_INFO_BIN_21,
AE_TAG_HIST3_INFO_BIN_22,
AE_TAG_HIST3_INFO_BIN_23,
AE_TAG_HIST3_INFO_BIN_24,
AE_TAG_HIST3_INFO_BIN_25,
AE_TAG_HIST3_INFO_BIN_26,
AE_TAG_HIST3_INFO_BIN_27,
AE_TAG_HIST3_INFO_BIN_28,
AE_TAG_HIST3_INFO_BIN_29,
AE_TAG_HIST3_INFO_BIN_30,
AE_TAG_HIST3_INFO_BIN_31,
AE_TAG_HIST3_INFO_BIN_32,
AE_TAG_HIST3_INFO_BIN_33,
AE_TAG_HIST3_INFO_BIN_34,
AE_TAG_HIST3_INFO_BIN_35,
AE_TAG_HIST3_INFO_BIN_36,
AE_TAG_HIST3_INFO_BIN_37,
AE_TAG_HIST3_INFO_BIN_38,
AE_TAG_HIST3_INFO_BIN_39,
AE_TAG_HIST3_INFO_BIN_40,
AE_TAG_HIST3_INFO_BIN_41,
AE_TAG_HIST3_INFO_BIN_42,
AE_TAG_HIST3_INFO_BIN_43,
AE_TAG_HIST3_INFO_BIN_44,
AE_TAG_HIST3_INFO_BIN_45,
AE_TAG_HIST3_INFO_BIN_46,
AE_TAG_HIST3_INFO_BIN_47,
AE_TAG_HIST3_INFO_BIN_48,
AE_TAG_HIST3_INFO_BIN_49,
AE_TAG_HIST3_INFO_BIN_50,
AE_TAG_HIST3_INFO_BIN_51,
AE_TAG_HIST3_INFO_BIN_52,
AE_TAG_HIST3_INFO_BIN_53,
AE_TAG_HIST3_INFO_BIN_54,
AE_TAG_HIST3_INFO_BIN_55,
AE_TAG_HIST3_INFO_BIN_56,
AE_TAG_HIST3_INFO_BIN_57,
AE_TAG_HIST3_INFO_BIN_58,
AE_TAG_HIST3_INFO_BIN_59,
AE_TAG_HIST3_INFO_BIN_60,
AE_TAG_HIST3_INFO_BIN_61,
AE_TAG_HIST3_INFO_BIN_62,
AE_TAG_HIST3_INFO_BIN_63,
AE_TAG_HIST3_INFO_BIN_64,
AE_TAG_HIST3_INFO_BIN_65,
AE_TAG_HIST3_INFO_BIN_66,
AE_TAG_HIST3_INFO_BIN_67,
AE_TAG_HIST3_INFO_BIN_68,
AE_TAG_HIST3_INFO_BIN_69,
AE_TAG_HIST3_INFO_BIN_70,
AE_TAG_HIST3_INFO_BIN_71,
AE_TAG_HIST3_INFO_BIN_72,
AE_TAG_HIST3_INFO_BIN_73,
AE_TAG_HIST3_INFO_BIN_74,
AE_TAG_HIST3_INFO_BIN_75,
AE_TAG_HIST3_INFO_BIN_76,
AE_TAG_HIST3_INFO_BIN_77,
AE_TAG_HIST3_INFO_BIN_78,
AE_TAG_HIST3_INFO_BIN_79,
AE_TAG_HIST3_INFO_BIN_80,
AE_TAG_HIST3_INFO_BIN_81,
AE_TAG_HIST3_INFO_BIN_82,
AE_TAG_HIST3_INFO_BIN_83,
AE_TAG_HIST3_INFO_BIN_84,
AE_TAG_HIST3_INFO_BIN_85,
AE_TAG_HIST3_INFO_BIN_86,
AE_TAG_HIST3_INFO_BIN_87,
AE_TAG_HIST3_INFO_BIN_88,
AE_TAG_HIST3_INFO_BIN_89,
AE_TAG_HIST3_INFO_BIN_90,
AE_TAG_HIST3_INFO_BIN_91,
AE_TAG_HIST3_INFO_BIN_92,
AE_TAG_HIST3_INFO_BIN_93,
AE_TAG_HIST3_INFO_BIN_94,
AE_TAG_HIST3_INFO_BIN_95,
AE_TAG_HIST3_INFO_BIN_96,
AE_TAG_HIST3_INFO_BIN_97,
AE_TAG_HIST3_INFO_BIN_98,
AE_TAG_HIST3_INFO_BIN_99,
AE_TAG_HIST3_INFO_BIN_100,
AE_TAG_HIST3_INFO_BIN_101,
AE_TAG_HIST3_INFO_BIN_102,
AE_TAG_HIST3_INFO_BIN_103,
AE_TAG_HIST3_INFO_BIN_104,
AE_TAG_HIST3_INFO_BIN_105,
AE_TAG_HIST3_INFO_BIN_106,
AE_TAG_HIST3_INFO_BIN_107,
AE_TAG_HIST3_INFO_BIN_108,
AE_TAG_HIST3_INFO_BIN_109,
AE_TAG_HIST3_INFO_BIN_110,
AE_TAG_HIST3_INFO_BIN_111,
AE_TAG_HIST3_INFO_BIN_112,
AE_TAG_HIST3_INFO_BIN_113,
AE_TAG_HIST3_INFO_BIN_114,
AE_TAG_HIST3_INFO_BIN_115,
AE_TAG_HIST3_INFO_BIN_116,
AE_TAG_HIST3_INFO_BIN_117,
AE_TAG_HIST3_INFO_BIN_118,
AE_TAG_HIST3_INFO_BIN_119,
AE_TAG_HIST3_INFO_BIN_120,
AE_TAG_HIST3_INFO_BIN_121,
AE_TAG_HIST3_INFO_BIN_122,
AE_TAG_HIST3_INFO_BIN_123,
AE_TAG_HIST3_INFO_BIN_124,
AE_TAG_HIST3_INFO_BIN_125,
AE_TAG_HIST3_INFO_BIN_126,
AE_TAG_HIST3_INFO_BIN_127,
AE_TAG_MAX
};

#endif // _DBG_AE_PARAM_H_

