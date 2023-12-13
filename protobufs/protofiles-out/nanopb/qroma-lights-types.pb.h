/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_QROMA_LIGHTS_TYPES_PB_H_INCLUDED
#define PB_QROMA_LIGHTS_TYPES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _QromaStrip_WS2812FX_Pattern { 
    QromaStrip_WS2812FX_Pattern_QSP_STATIC = 0, 
    QromaStrip_WS2812FX_Pattern_QSP_BLINK = 1, 
    QromaStrip_WS2812FX_Pattern_QSP_BREATH = 2, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_WIPE = 3, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_WIPE_INV = 4, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_WIPE_REV = 5, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_WIPE_REV_INV = 6, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_WIPE_RANDOM = 7, 
    QromaStrip_WS2812FX_Pattern_QSP_RANDOM_COLOR = 8, 
    QromaStrip_WS2812FX_Pattern_QSP_SINGLE_DYNAMIC = 9, 
    QromaStrip_WS2812FX_Pattern_QSP_MULTI_DYNAMIC = 10, 
    QromaStrip_WS2812FX_Pattern_QSP_RAINBOW = 11, 
    QromaStrip_WS2812FX_Pattern_QSP_RAINBOW_CYCLE = 12, 
    QromaStrip_WS2812FX_Pattern_QSP_SCAN = 13, 
    QromaStrip_WS2812FX_Pattern_QSP_DUAL_SCAN = 14, 
    QromaStrip_WS2812FX_Pattern_QSP_FADE = 15, 
    QromaStrip_WS2812FX_Pattern_QSP_THEATER_CHASE = 16, 
    QromaStrip_WS2812FX_Pattern_QSP_THEATER_CHASE_RAINBOW = 17, 
    QromaStrip_WS2812FX_Pattern_QSP_RUNNING_LIGHTS = 18, 
    QromaStrip_WS2812FX_Pattern_QSP_TWINKLE = 19, 
    QromaStrip_WS2812FX_Pattern_QSP_TWINKLE_RANDOM = 20, 
    QromaStrip_WS2812FX_Pattern_QSP_TWINKLE_FADE = 21, 
    QromaStrip_WS2812FX_Pattern_QSP_TWINKLE_FADE_RANDOM = 22, 
    QromaStrip_WS2812FX_Pattern_QSP_SPARKLE = 23, 
    QromaStrip_WS2812FX_Pattern_QSP_FLASH_SPARKLE = 24, 
    QromaStrip_WS2812FX_Pattern_QSP_HYPER_SPARKLE = 25, 
    QromaStrip_WS2812FX_Pattern_QSP_STROBE = 26, 
    QromaStrip_WS2812FX_Pattern_QSP_STROBE_RAINBOW = 27, 
    QromaStrip_WS2812FX_Pattern_QSP_MULTI_STROBE = 28, 
    QromaStrip_WS2812FX_Pattern_QSP_BLINK_RAINBOW = 29, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_WHITE = 30, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_COLOR = 31, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_RANDOM = 32, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_RAINBOW = 33, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_FLASH = 34, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_FLASH_RANDOM = 35, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_RAINBOW_WHITE = 36, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_BLACKOUT = 37, 
    QromaStrip_WS2812FX_Pattern_QSP_CHASE_BLACKOUT_RAINBOW = 38, 
    QromaStrip_WS2812FX_Pattern_QSP_COLOR_SWEEP_RANDOM = 39, 
    QromaStrip_WS2812FX_Pattern_QSP_RUNNING_COLOR = 40, 
    QromaStrip_WS2812FX_Pattern_QSP_RUNNING_RED_BLUE = 41, 
    QromaStrip_WS2812FX_Pattern_QSP_RUNNING_RANDOM = 42, 
    QromaStrip_WS2812FX_Pattern_QSP_LARSON_SCANNER = 43, 
    QromaStrip_WS2812FX_Pattern_QSP_COMET = 44, 
    QromaStrip_WS2812FX_Pattern_QSP_FIREWORKS = 45, 
    QromaStrip_WS2812FX_Pattern_QSP_FIREWORKS_RANDOM = 46, 
    QromaStrip_WS2812FX_Pattern_QSP_MERRY_CHRISTMAS = 47, 
    QromaStrip_WS2812FX_Pattern_QSP_FIRE_FLICKER = 48, 
    QromaStrip_WS2812FX_Pattern_QSP_FIRE_FLICKER_SOFT = 49, 
    QromaStrip_WS2812FX_Pattern_QSP_FIRE_FLICKER_INTENSE = 50, 
    QromaStrip_WS2812FX_Pattern_QSP_CIRCUS_COMBUSTUS = 51, 
    QromaStrip_WS2812FX_Pattern_QSP_HALLOWEEN = 52, 
    QromaStrip_WS2812FX_Pattern_QSP_BICOLOR_CHASE = 53, 
    QromaStrip_WS2812FX_Pattern_QSP_TRICOLOR_CHASE = 54, 
    QromaStrip_WS2812FX_Pattern_QSP_TWINKLEFOX = 55, 
    QromaStrip_WS2812FX_Pattern_QSP_RAIN = 56 
} QromaStrip_WS2812FX_Pattern;

typedef enum _QromaStrip_WS2812FX_FadeSpeed { 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_NOT_SET = 0, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_XFAST = 1, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_FAST = 2, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_MEDIUM = 3, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_SLOW = 4, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_XSLOW = 5, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_XXSLOW = 6, 
    QromaStrip_WS2812FX_FadeSpeed_QSFS_GLACIAL = 7 
} QromaStrip_WS2812FX_FadeSpeed;

typedef enum _QromaStrip_WS2812FX_PixelsSize { 
    QromaStrip_WS2812FX_PixelsSize_QSPS_NOT_SET = 0, 
    QromaStrip_WS2812FX_PixelsSize_QSPS_SMALL = 1, 
    QromaStrip_WS2812FX_PixelsSize_QSPS_MEDIUM = 2, 
    QromaStrip_WS2812FX_PixelsSize_QSPS_LARGE = 3, 
    QromaStrip_WS2812FX_PixelsSize_QSPS_XLARGE = 4 
} QromaStrip_WS2812FX_PixelsSize;

typedef enum _QromaStrip_WS2812FX_NeoPixelRgbOrder { 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NOT_SET = 0, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RGB = 1, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RBG = 2, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GRB = 3, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GBR = 4, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BRG = 5, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BGR = 6, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WRGB = 7, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WRBG = 8, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WGRB = 9, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WGBR = 10, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WBRG = 11, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_WBGR = 12, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RWGB = 13, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RWBG = 14, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RGWB = 15, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RGBW = 16, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RBWG = 17, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_RBGW = 18, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GWRB = 19, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GWBR = 20, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GRWB = 21, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GRBW = 22, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GBWR = 23, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_GBRW = 24, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BWRG = 25, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BWGR = 26, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BRWG = 27, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BRGW = 28, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BGWR = 29, 
    QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BGRW = 30 
} QromaStrip_WS2812FX_NeoPixelRgbOrder;

typedef enum _QromaStrip_WS2812FX_NeoPixelTxRate { 
    QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_NOT_SET = 0, 
    QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_400_KHZ = 1, 
    QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_800_KHZ = 2 
} QromaStrip_WS2812FX_NeoPixelTxRate;

typedef enum _QromaStrip_WS2812FX_StripIndex { 
    QromaStrip_WS2812FX_StripIndex_QSSI_NOT_SET = 0, 
    QromaStrip_WS2812FX_StripIndex_QSSI_STRIP_01 = 1, 
    QromaStrip_WS2812FX_StripIndex_QSSI_STRIP_02 = 2 
} QromaStrip_WS2812FX_StripIndex;

/* Struct definitions */
typedef struct _QromaStripColor { 
    uint32_t red; 
    uint32_t green; 
    uint32_t blue; 
} QromaStripColor;

typedef struct _QromaStrip_WS2812FX_IoSettings { 
    uint32_t pin; 
    uint32_t ledCount; 
    QromaStrip_WS2812FX_NeoPixelRgbOrder neoPixelRgbOrder; 
    QromaStrip_WS2812FX_NeoPixelTxRate neoPixelTxRate; 
} QromaStrip_WS2812FX_IoSettings;

typedef struct _QromaStrip_WS2812FX_Segment { 
    uint32_t startIndex; 
    uint32_t endIndex; 
} QromaStrip_WS2812FX_Segment;

typedef struct _QromaStrip_WS2812FX_Animation { 
    QromaStrip_WS2812FX_Pattern pattern; 
    uint32_t speed; /* 2-65535 */
    bool has_color1;
    QromaStripColor color1; 
    bool has_color2;
    QromaStripColor color2; 
    bool has_color3;
    QromaStripColor color3; 
    bool reversed; 
    QromaStrip_WS2812FX_FadeSpeed fadeSpeed; 
    QromaStrip_WS2812FX_PixelsSize size; 
    bool useGammaCorrection; 
} QromaStrip_WS2812FX_Animation;

typedef struct _QromaStrip_WS2812FX_SegmentsDefinition { 
    uint32_t brightness; 
    uint32_t numSegments; 
    uint32_t maxNumSegments; 
    QromaStrip_WS2812FX_Segment segments[5]; 
} QromaStrip_WS2812FX_SegmentsDefinition;

typedef struct _QromaStrip_WS2812FX_StartupAnimations { 
    uint32_t startupDelayInMs; 
    QromaStrip_WS2812FX_Animation segmentAnimations[5]; 
} QromaStrip_WS2812FX_StartupAnimations;

typedef struct _QromaStripConfig { 
    char name[30]; 
    bool has_ioSettings;
    QromaStrip_WS2812FX_IoSettings ioSettings; 
    bool has_segmentsDefinition;
    QromaStrip_WS2812FX_SegmentsDefinition segmentsDefinition; 
    bool has_startupAnimations;
    QromaStrip_WS2812FX_StartupAnimations startupAnimations; /* QromaStrip_WS2812FX_LedsConfig ledsConfig = 3;
 uint32 brightness = 4;  // 0-255 - or should this be per segment? */
} QromaStripConfig;

typedef struct _QromaLightsConfig { 
    bool has_qromaStrip1Config;
    QromaStripConfig qromaStrip1Config; 
    bool has_qromaStrip2Config;
    QromaStripConfig qromaStrip2Config; 
} QromaLightsConfig;


/* Helper constants for enums */
#define _QromaStrip_WS2812FX_Pattern_MIN QromaStrip_WS2812FX_Pattern_QSP_STATIC
#define _QromaStrip_WS2812FX_Pattern_MAX QromaStrip_WS2812FX_Pattern_QSP_RAIN
#define _QromaStrip_WS2812FX_Pattern_ARRAYSIZE ((QromaStrip_WS2812FX_Pattern)(QromaStrip_WS2812FX_Pattern_QSP_RAIN+1))

#define _QromaStrip_WS2812FX_FadeSpeed_MIN QromaStrip_WS2812FX_FadeSpeed_QSFS_NOT_SET
#define _QromaStrip_WS2812FX_FadeSpeed_MAX QromaStrip_WS2812FX_FadeSpeed_QSFS_GLACIAL
#define _QromaStrip_WS2812FX_FadeSpeed_ARRAYSIZE ((QromaStrip_WS2812FX_FadeSpeed)(QromaStrip_WS2812FX_FadeSpeed_QSFS_GLACIAL+1))

#define _QromaStrip_WS2812FX_PixelsSize_MIN QromaStrip_WS2812FX_PixelsSize_QSPS_NOT_SET
#define _QromaStrip_WS2812FX_PixelsSize_MAX QromaStrip_WS2812FX_PixelsSize_QSPS_XLARGE
#define _QromaStrip_WS2812FX_PixelsSize_ARRAYSIZE ((QromaStrip_WS2812FX_PixelsSize)(QromaStrip_WS2812FX_PixelsSize_QSPS_XLARGE+1))

#define _QromaStrip_WS2812FX_NeoPixelRgbOrder_MIN QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NOT_SET
#define _QromaStrip_WS2812FX_NeoPixelRgbOrder_MAX QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BGRW
#define _QromaStrip_WS2812FX_NeoPixelRgbOrder_ARRAYSIZE ((QromaStrip_WS2812FX_NeoPixelRgbOrder)(QromaStrip_WS2812FX_NeoPixelRgbOrder_QSNPO_NEO_BGRW+1))

#define _QromaStrip_WS2812FX_NeoPixelTxRate_MIN QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_NOT_SET
#define _QromaStrip_WS2812FX_NeoPixelTxRate_MAX QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_800_KHZ
#define _QromaStrip_WS2812FX_NeoPixelTxRate_ARRAYSIZE ((QromaStrip_WS2812FX_NeoPixelTxRate)(QromaStrip_WS2812FX_NeoPixelTxRate_QSNPTR_800_KHZ+1))

#define _QromaStrip_WS2812FX_StripIndex_MIN QromaStrip_WS2812FX_StripIndex_QSSI_NOT_SET
#define _QromaStrip_WS2812FX_StripIndex_MAX QromaStrip_WS2812FX_StripIndex_QSSI_STRIP_02
#define _QromaStrip_WS2812FX_StripIndex_ARRAYSIZE ((QromaStrip_WS2812FX_StripIndex)(QromaStrip_WS2812FX_StripIndex_QSSI_STRIP_02+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define QromaStripColor_init_default             {0, 0, 0}
#define QromaStrip_WS2812FX_Animation_init_default {_QromaStrip_WS2812FX_Pattern_MIN, 0, false, QromaStripColor_init_default, false, QromaStripColor_init_default, false, QromaStripColor_init_default, 0, _QromaStrip_WS2812FX_FadeSpeed_MIN, _QromaStrip_WS2812FX_PixelsSize_MIN, 0}
#define QromaStrip_WS2812FX_IoSettings_init_default {0, 0, _QromaStrip_WS2812FX_NeoPixelRgbOrder_MIN, _QromaStrip_WS2812FX_NeoPixelTxRate_MIN}
#define QromaStrip_WS2812FX_Segment_init_default {0, 0}
#define QromaStrip_WS2812FX_SegmentsDefinition_init_default {0, 0, 0, {QromaStrip_WS2812FX_Segment_init_default, QromaStrip_WS2812FX_Segment_init_default, QromaStrip_WS2812FX_Segment_init_default, QromaStrip_WS2812FX_Segment_init_default, QromaStrip_WS2812FX_Segment_init_default}}
#define QromaStrip_WS2812FX_StartupAnimations_init_default {0, {QromaStrip_WS2812FX_Animation_init_default, QromaStrip_WS2812FX_Animation_init_default, QromaStrip_WS2812FX_Animation_init_default, QromaStrip_WS2812FX_Animation_init_default, QromaStrip_WS2812FX_Animation_init_default}}
#define QromaStripConfig_init_default            {"", false, QromaStrip_WS2812FX_IoSettings_init_default, false, QromaStrip_WS2812FX_SegmentsDefinition_init_default, false, QromaStrip_WS2812FX_StartupAnimations_init_default}
#define QromaLightsConfig_init_default           {false, QromaStripConfig_init_default, false, QromaStripConfig_init_default}
#define QromaStripColor_init_zero                {0, 0, 0}
#define QromaStrip_WS2812FX_Animation_init_zero  {_QromaStrip_WS2812FX_Pattern_MIN, 0, false, QromaStripColor_init_zero, false, QromaStripColor_init_zero, false, QromaStripColor_init_zero, 0, _QromaStrip_WS2812FX_FadeSpeed_MIN, _QromaStrip_WS2812FX_PixelsSize_MIN, 0}
#define QromaStrip_WS2812FX_IoSettings_init_zero {0, 0, _QromaStrip_WS2812FX_NeoPixelRgbOrder_MIN, _QromaStrip_WS2812FX_NeoPixelTxRate_MIN}
#define QromaStrip_WS2812FX_Segment_init_zero    {0, 0}
#define QromaStrip_WS2812FX_SegmentsDefinition_init_zero {0, 0, 0, {QromaStrip_WS2812FX_Segment_init_zero, QromaStrip_WS2812FX_Segment_init_zero, QromaStrip_WS2812FX_Segment_init_zero, QromaStrip_WS2812FX_Segment_init_zero, QromaStrip_WS2812FX_Segment_init_zero}}
#define QromaStrip_WS2812FX_StartupAnimations_init_zero {0, {QromaStrip_WS2812FX_Animation_init_zero, QromaStrip_WS2812FX_Animation_init_zero, QromaStrip_WS2812FX_Animation_init_zero, QromaStrip_WS2812FX_Animation_init_zero, QromaStrip_WS2812FX_Animation_init_zero}}
#define QromaStripConfig_init_zero               {"", false, QromaStrip_WS2812FX_IoSettings_init_zero, false, QromaStrip_WS2812FX_SegmentsDefinition_init_zero, false, QromaStrip_WS2812FX_StartupAnimations_init_zero}
#define QromaLightsConfig_init_zero              {false, QromaStripConfig_init_zero, false, QromaStripConfig_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define QromaStripColor_red_tag                  1
#define QromaStripColor_green_tag                2
#define QromaStripColor_blue_tag                 3
#define QromaStrip_WS2812FX_IoSettings_pin_tag   1
#define QromaStrip_WS2812FX_IoSettings_ledCount_tag 2
#define QromaStrip_WS2812FX_IoSettings_neoPixelRgbOrder_tag 3
#define QromaStrip_WS2812FX_IoSettings_neoPixelTxRate_tag 4
#define QromaStrip_WS2812FX_Segment_startIndex_tag 1
#define QromaStrip_WS2812FX_Segment_endIndex_tag 2
#define QromaStrip_WS2812FX_Animation_pattern_tag 1
#define QromaStrip_WS2812FX_Animation_speed_tag  2
#define QromaStrip_WS2812FX_Animation_color1_tag 3
#define QromaStrip_WS2812FX_Animation_color2_tag 4
#define QromaStrip_WS2812FX_Animation_color3_tag 5
#define QromaStrip_WS2812FX_Animation_reversed_tag 6
#define QromaStrip_WS2812FX_Animation_fadeSpeed_tag 7
#define QromaStrip_WS2812FX_Animation_size_tag   8
#define QromaStrip_WS2812FX_Animation_useGammaCorrection_tag 9
#define QromaStrip_WS2812FX_SegmentsDefinition_brightness_tag 1
#define QromaStrip_WS2812FX_SegmentsDefinition_numSegments_tag 2
#define QromaStrip_WS2812FX_SegmentsDefinition_maxNumSegments_tag 3
#define QromaStrip_WS2812FX_SegmentsDefinition_segments_tag 4
#define QromaStrip_WS2812FX_StartupAnimations_startupDelayInMs_tag 1
#define QromaStrip_WS2812FX_StartupAnimations_segmentAnimations_tag 2
#define QromaStripConfig_name_tag                1
#define QromaStripConfig_ioSettings_tag          2
#define QromaStripConfig_segmentsDefinition_tag  3
#define QromaStripConfig_startupAnimations_tag   4
#define QromaLightsConfig_qromaStrip1Config_tag  1
#define QromaLightsConfig_qromaStrip2Config_tag  2

/* Struct field encoding specification for nanopb */
#define QromaStripColor_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   red,               1) \
X(a, STATIC,   SINGULAR, UINT32,   green,             2) \
X(a, STATIC,   SINGULAR, UINT32,   blue,              3)
#define QromaStripColor_CALLBACK NULL
#define QromaStripColor_DEFAULT NULL

#define QromaStrip_WS2812FX_Animation_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    pattern,           1) \
X(a, STATIC,   SINGULAR, UINT32,   speed,             2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  color1,            3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  color2,            4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  color3,            5) \
X(a, STATIC,   SINGULAR, BOOL,     reversed,          6) \
X(a, STATIC,   SINGULAR, UENUM,    fadeSpeed,         7) \
X(a, STATIC,   SINGULAR, UENUM,    size,              8) \
X(a, STATIC,   SINGULAR, BOOL,     useGammaCorrection,   9)
#define QromaStrip_WS2812FX_Animation_CALLBACK NULL
#define QromaStrip_WS2812FX_Animation_DEFAULT NULL
#define QromaStrip_WS2812FX_Animation_color1_MSGTYPE QromaStripColor
#define QromaStrip_WS2812FX_Animation_color2_MSGTYPE QromaStripColor
#define QromaStrip_WS2812FX_Animation_color3_MSGTYPE QromaStripColor

#define QromaStrip_WS2812FX_IoSettings_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   pin,               1) \
X(a, STATIC,   SINGULAR, UINT32,   ledCount,          2) \
X(a, STATIC,   SINGULAR, UENUM,    neoPixelRgbOrder,   3) \
X(a, STATIC,   SINGULAR, UENUM,    neoPixelTxRate,    4)
#define QromaStrip_WS2812FX_IoSettings_CALLBACK NULL
#define QromaStrip_WS2812FX_IoSettings_DEFAULT NULL

#define QromaStrip_WS2812FX_Segment_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   startIndex,        1) \
X(a, STATIC,   SINGULAR, UINT32,   endIndex,          2)
#define QromaStrip_WS2812FX_Segment_CALLBACK NULL
#define QromaStrip_WS2812FX_Segment_DEFAULT NULL

#define QromaStrip_WS2812FX_SegmentsDefinition_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   brightness,        1) \
X(a, STATIC,   SINGULAR, UINT32,   numSegments,       2) \
X(a, STATIC,   SINGULAR, UINT32,   maxNumSegments,    3) \
X(a, STATIC,   FIXARRAY, MESSAGE,  segments,          4)
#define QromaStrip_WS2812FX_SegmentsDefinition_CALLBACK NULL
#define QromaStrip_WS2812FX_SegmentsDefinition_DEFAULT NULL
#define QromaStrip_WS2812FX_SegmentsDefinition_segments_MSGTYPE QromaStrip_WS2812FX_Segment

#define QromaStrip_WS2812FX_StartupAnimations_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   startupDelayInMs,   1) \
X(a, STATIC,   FIXARRAY, MESSAGE,  segmentAnimations,   2)
#define QromaStrip_WS2812FX_StartupAnimations_CALLBACK NULL
#define QromaStrip_WS2812FX_StartupAnimations_DEFAULT NULL
#define QromaStrip_WS2812FX_StartupAnimations_segmentAnimations_MSGTYPE QromaStrip_WS2812FX_Animation

#define QromaStripConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   name,              1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  ioSettings,        2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  segmentsDefinition,   3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  startupAnimations,   4)
#define QromaStripConfig_CALLBACK NULL
#define QromaStripConfig_DEFAULT NULL
#define QromaStripConfig_ioSettings_MSGTYPE QromaStrip_WS2812FX_IoSettings
#define QromaStripConfig_segmentsDefinition_MSGTYPE QromaStrip_WS2812FX_SegmentsDefinition
#define QromaStripConfig_startupAnimations_MSGTYPE QromaStrip_WS2812FX_StartupAnimations

#define QromaLightsConfig_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  qromaStrip1Config,   1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  qromaStrip2Config,   2)
#define QromaLightsConfig_CALLBACK NULL
#define QromaLightsConfig_DEFAULT NULL
#define QromaLightsConfig_qromaStrip1Config_MSGTYPE QromaStripConfig
#define QromaLightsConfig_qromaStrip2Config_MSGTYPE QromaStripConfig

extern const pb_msgdesc_t QromaStripColor_msg;
extern const pb_msgdesc_t QromaStrip_WS2812FX_Animation_msg;
extern const pb_msgdesc_t QromaStrip_WS2812FX_IoSettings_msg;
extern const pb_msgdesc_t QromaStrip_WS2812FX_Segment_msg;
extern const pb_msgdesc_t QromaStrip_WS2812FX_SegmentsDefinition_msg;
extern const pb_msgdesc_t QromaStrip_WS2812FX_StartupAnimations_msg;
extern const pb_msgdesc_t QromaStripConfig_msg;
extern const pb_msgdesc_t QromaLightsConfig_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define QromaStripColor_fields &QromaStripColor_msg
#define QromaStrip_WS2812FX_Animation_fields &QromaStrip_WS2812FX_Animation_msg
#define QromaStrip_WS2812FX_IoSettings_fields &QromaStrip_WS2812FX_IoSettings_msg
#define QromaStrip_WS2812FX_Segment_fields &QromaStrip_WS2812FX_Segment_msg
#define QromaStrip_WS2812FX_SegmentsDefinition_fields &QromaStrip_WS2812FX_SegmentsDefinition_msg
#define QromaStrip_WS2812FX_StartupAnimations_fields &QromaStrip_WS2812FX_StartupAnimations_msg
#define QromaStripConfig_fields &QromaStripConfig_msg
#define QromaLightsConfig_fields &QromaLightsConfig_msg

/* Maximum encoded size of messages (where known) */
#define QromaLightsConfig_size                   1082
#define QromaStripColor_size                     18
#define QromaStripConfig_size                    538
#define QromaStrip_WS2812FX_Animation_size       76
#define QromaStrip_WS2812FX_IoSettings_size      16
#define QromaStrip_WS2812FX_Segment_size         12
#define QromaStrip_WS2812FX_SegmentsDefinition_size 88
#define QromaStrip_WS2812FX_StartupAnimations_size 396

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif