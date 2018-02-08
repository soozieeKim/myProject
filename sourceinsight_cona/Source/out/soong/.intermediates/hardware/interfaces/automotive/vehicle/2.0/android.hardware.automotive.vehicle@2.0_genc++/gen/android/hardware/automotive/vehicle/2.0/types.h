#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_TYPES_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_TYPES_H

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

enum class VehiclePropertyType : int32_t {
    STRING = 1048576, // 0x00100000
    BOOLEAN = 2097152, // 0x00200000
    INT32 = 4194304, // 0x00400000
    INT32_VEC = 4259840, // 0x00410000
    INT64 = 5242880, // 0x00500000
    FLOAT = 6291456, // 0x00600000
    FLOAT_VEC = 6356992, // 0x00610000
    BYTES = 7340032, // 0x00700000
    COMPLEX = 14680064, // 0x00e00000
    MASK = 16711680, // 0x00ff0000
};

enum class VehicleArea : int32_t {
    GLOBAL = 16777216, // 0x01000000
    ZONE = 33554432, // 0x02000000
    WINDOW = 50331648, // 0x03000000
    MIRROR = 67108864, // 0x04000000
    SEAT = 83886080, // 0x05000000
    DOOR = 100663296, // 0x06000000
    MASK = 251658240, // 0x0f000000
};

enum class VehiclePropertyGroup : int32_t {
    SYSTEM = 268435456, // 0x10000000
    VENDOR = 536870912, // 0x20000000
    MASK = -268435456, // 0xf0000000
};

enum class VehicleProperty : int32_t {
    INVALID = 0, // 0x00000000
    INFO_VIN = 286261504, // (((0x0100 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL)
    INFO_MAKE = 286261505, // (((0x0101 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL)
    INFO_MODEL = 286261506, // (((0x0102 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL)
    INFO_MODEL_YEAR = 289407235, // (((0x0103 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    INFO_FUEL_CAPACITY = 291504388, // (((0x0104 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    PERF_ODOMETER = 291504644, // (((0x0204 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    PERF_VEHICLE_SPEED = 291504647, // (((0x0207 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    ENGINE_COOLANT_TEMP = 291504897, // (((0x0301 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    ENGINE_OIL_TEMP = 291504900, // (((0x0304 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    ENGINE_RPM = 291504901, // (((0x0305 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    GEAR_SELECTION = 289408000, // (((0x0400 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    CURRENT_GEAR = 289408001, // (((0x0401 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    PARKING_BRAKE_ON = 287310850, // (((0x0402 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
    DRIVING_STATUS = 289408004, // (((0x0404 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    FUEL_LEVEL_LOW = 287310853, // (((0x0405 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
    NIGHT_MODE = 287310855, // (((0x0407 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
    TURN_SIGNAL_STATE = 289408008, // (((0x0408 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    IGNITION_STATE = 289408009, // (((0x0409 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    HVAC_FAN_SPEED = 306185472, // (((0x0500 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:ZONE)
    HVAC_FAN_DIRECTION = 306185473, // (((0x0501 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:ZONE)
    HVAC_TEMPERATURE_CURRENT = 308282626, // (((0x0502 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:ZONE)
    HVAC_TEMPERATURE_SET = 308282627, // (((0x0503 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:ZONE)
    HVAC_DEFROSTER = 320865540, // (((0x0504 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:WINDOW)
    HVAC_AC_ON = 304088325, // (((0x0505 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_MAX_AC_ON = 304088326, // (((0x0506 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_MAX_DEFROST_ON = 304088327, // (((0x0507 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_RECIRC_ON = 304088328, // (((0x0508 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_DUAL_ON = 304088329, // (((0x0509 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_AUTO_ON = 304088330, // (((0x050A | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    HVAC_SEAT_TEMPERATURE = 356517131, // (((0x050B | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    HVAC_SIDE_MIRROR_HEAT = 339739916, // (((0x050C | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:MIRROR)
    HVAC_STEERING_WHEEL_TEMP = 289408269, // (((0x050D | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    HVAC_TEMPERATURE_UNITS = 306185486, // (((0x050E | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:ZONE)
    HVAC_ACTUAL_FAN_SPEED_RPM = 306185487, // (((0x050F | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:ZONE)
    HVAC_FAN_DIRECTION_AVAILABLE = 306185489, // (((0x0511 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:ZONE)
    HVAC_POWER_ON = 304088336, // (((0x0510 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:ZONE)
    ENV_OUTSIDE_TEMPERATURE = 291505923, // (((0x0703 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    ENV_CABIN_TEMPERATURE = 291505924, // (((0x0704 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:FLOAT) | VehicleArea:GLOBAL)
    RADIO_PRESET = 289474561, // (((0x0801 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_FOCUS = 289474816, // (((0x0900 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_FOCUS_EXT_SYNC = 289474832, // (((0x0910 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_VOLUME = 289474817, // (((0x0901 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_VOLUME_EXT_SYNC = 289474833, // (((0x0911 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_VOLUME_LIMIT = 289474818, // (((0x0902 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_ROUTING_POLICY = 289474819, // (((0x0903 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_HW_VARIANT = 289409284, // (((0x0904 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    AUDIO_EXT_ROUTING_HINT = 289474821, // (((0x0905 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_STREAM_STATE = 289474822, // (((0x0906 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    AUDIO_PARAMETERS = 286263559, // (((0x907 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:STRING) | VehicleArea:GLOBAL)
    AP_POWER_STATE = 289475072, // (((0x0A00 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    DISPLAY_BRIGHTNESS = 289409537, // (((0x0A01 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    AP_POWER_BOOTUP_REASON = 289409538, // (((0x0A02 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    HW_KEY_INPUT = 289475088, // (((0x0A10 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    INSTRUMENT_CLUSTER_INFO = 289475104, // (((0x0A20 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32_VEC) | VehicleArea:GLOBAL)
    UNIX_TIME = 290458160, // (((0x0A30 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT64) | VehicleArea:GLOBAL)
    CURRENT_TIME_IN_SECONDS = 289409585, // (((0x0A31 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    DOOR_POS = 373295872, // (((0x0B00 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:DOOR)
    DOOR_MOVE = 373295873, // (((0x0B01 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:DOOR)
    DOOR_LOCK = 371198722, // (((0x0B02 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:DOOR)
    MIRROR_Z_POS = 339741504, // (((0x0B40 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:MIRROR)
    MIRROR_Z_MOVE = 339741505, // (((0x0B41 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:MIRROR)
    MIRROR_Y_POS = 339741506, // (((0x0B42 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:MIRROR)
    MIRROR_Y_MOVE = 339741507, // (((0x0B43 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:MIRROR)
    MIRROR_LOCK = 287312708, // (((0x0B44 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
    MIRROR_FOLD = 287312709, // (((0x0B45 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
    SEAT_MEMORY_SELECT = 356518784, // (((0x0B80 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_MEMORY_SET = 356518785, // (((0x0B81 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BELT_BUCKLED = 354421634, // (((0x0B82 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:SEAT)
    SEAT_BELT_HEIGHT_POS = 356518787, // (((0x0B83 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BELT_HEIGHT_MOVE = 356518788, // (((0x0B84 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_FORE_AFT_POS = 356518789, // (((0x0B85 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_FORE_AFT_MOVE = 356518790, // (((0x0B86 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BACKREST_ANGLE_1_POS = 356518791, // (((0x0B87 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BACKREST_ANGLE_1_MOVE = 356518792, // (((0x0B88 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BACKREST_ANGLE_2_POS = 356518793, // (((0x0B89 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_BACKREST_ANGLE_2_MOVE = 356518794, // (((0x0B8A | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEIGHT_POS = 356518795, // (((0x0B8B | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEIGHT_MOVE = 356518796, // (((0x0B8C | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_DEPTH_POS = 356518797, // (((0x0B8D | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_DEPTH_MOVE = 356518798, // (((0x0B8E | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_TILT_POS = 356518799, // (((0x0B8F | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_TILT_MOVE = 356518800, // (((0x0B90 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_LUMBAR_FORE_AFT_POS = 356518801, // (((0x0B91 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_LUMBAR_FORE_AFT_MOVE = 356518802, // (((0x0B92 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_LUMBAR_SIDE_SUPPORT_POS = 356518803, // (((0x0B93 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_LUMBAR_SIDE_SUPPORT_MOVE = 356518804, // (((0x0B94 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEADREST_HEIGHT_POS = 289409941, // (((0x0B95 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    SEAT_HEADREST_HEIGHT_MOVE = 356518806, // (((0x0B96 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEADREST_ANGLE_POS = 356518807, // (((0x0B97 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEADREST_ANGLE_MOVE = 356518808, // (((0x0B98 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEADREST_FORE_AFT_POS = 356518809, // (((0x0B99 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    SEAT_HEADREST_FORE_AFT_MOVE = 356518810, // (((0x0B9A | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:SEAT)
    WINDOW_POS = 289409984, // (((0x0BC0 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    WINDOW_MOVE = 289409985, // (((0x0BC1 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    WINDOW_VENT_POS = 289409986, // (((0x0BC2 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    WINDOW_VENT_MOVE = 289409987, // (((0x0BC3 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:INT32) | VehicleArea:GLOBAL)
    WINDOW_LOCK = 287312836, // (((0x0BC4 | VehiclePropertyGroup:SYSTEM) | VehiclePropertyType:BOOLEAN) | VehicleArea:GLOBAL)
};

enum class VehicleHvacFanDirection : int32_t {
    FACE = 1, // 0x1
    FLOOR = 2, // 0x2
    FACE_AND_FLOOR = 3, // 0x3
    DEFROST = 4, // 0x4
    DEFROST_AND_FLOOR = 5, // 0x5
};

enum class VehicleRadioConstants : int32_t {
    VEHICLE_RADIO_PRESET_MIN_VALUE = 1,
};

enum class VehicleAudioFocusRequest : int32_t {
    REQUEST_GAIN = 1, // 0x1
    REQUEST_GAIN_TRANSIENT = 2, // 0x2
    REQUEST_GAIN_TRANSIENT_MAY_DUCK = 3, // 0x3
    REQUEST_GAIN_TRANSIENT_NO_DUCK = 4, // 0x4
    REQUEST_RELEASE = 5, // 0x5
};

enum class VehicleAudioFocusState : int32_t {
    STATE_GAIN = 1, // 0x1
    STATE_GAIN_TRANSIENT = 2, // 0x2
    STATE_LOSS_TRANSIENT_CAN_DUCK = 3, // 0x3
    STATE_LOSS_TRANSIENT = 4, // 0x4
    STATE_LOSS = 5, // 0x5
    STATE_LOSS_TRANSIENT_EXLCUSIVE = 6, // 0x6
};

enum class VehicleAudioStreamFlag : int32_t {
    STREAM0_FLAG = 1, // (0x1 << 0)
    STREAM1_FLAG = 2, // (0x1 << 1)
    STREAM2_FLAG = 4, // (0x1 << 2)
};

enum class VehicleAudioStream : int32_t {
    STREAM0 = 0,
    STREAM1 = 1,
};

enum class VehicleAudioExtFocusFlag : int32_t {
    NONE_FLAG = 0, // 0x0
    PERMANENT_FLAG = 1, // 0x1
    TRANSIENT_FLAG = 2, // 0x2
    PLAY_ONLY_FLAG = 4, // 0x4
    MUTE_MEDIA_FLAG = 8, // 0x8
};

enum class VehicleAudioFocusIndex : int32_t {
    FOCUS = 0,
    STREAMS = 1,
    EXTERNAL_FOCUS_STATE = 2,
    AUDIO_CONTEXTS = 3,
};

enum class VehicleAudioContextFlag : int32_t {
    MUSIC_FLAG = 1, // 0x1
    NAVIGATION_FLAG = 2, // 0x2
    VOICE_COMMAND_FLAG = 4, // 0x4
    CALL_FLAG = 8, // 0x8
    ALARM_FLAG = 16, // 0x10
    NOTIFICATION_FLAG = 32, // 0x20
    UNKNOWN_FLAG = 64, // 0x40
    SAFETY_ALERT_FLAG = 128, // 0x80
    CD_ROM_FLAG = 256, // 0x100
    AUX_AUDIO_FLAG = 512, // 0x200
    SYSTEM_SOUND_FLAG = 1024, // 0x400
    RADIO_FLAG = 2048, // 0x800
    EXT_SOURCE_FLAG = 4096, // 0x1000
};

enum class VehicleAudioVolumeCapabilityFlag : int32_t {
    PERSISTENT_STORAGE = 1, // 0x1
    MASTER_VOLUME_ONLY = 2, // 0x2
};

enum class VehicleAudioVolumeState : int32_t {
    STATE_OK = 0,
    LIMIT_REACHED = 1,
};

enum class VehicleAudioVolumeIndex : int32_t {
    INDEX_STREAM = 0,
    INDEX_VOLUME = 1,
    INDEX_STATE = 2,
};

enum class VehicleAudioVolumeLimitIndex : int32_t {
    STREAM = 0,
    MAX_VOLUME = 1,
};

enum class VehicleAudioRoutingPolicyIndex : int32_t {
    STREAM = 0,
    CONTEXTS = 1,
};

enum class VehicleAudioHwVariantConfigFlag : int32_t {
    INTERNAL_RADIO_FLAG = 1, // 0x1
};

enum class VehicleApPowerStateConfigFlag : int32_t {
    ENABLE_DEEP_SLEEP_FLAG = 1, // 0x1
    CONFIG_SUPPORT_TIMER_POWER_ON_FLAG = 2, // 0x2
};

enum class VehicleApPowerState : int32_t {
    OFF = 0,
    DEEP_SLEEP = 1,
    ON_DISP_OFF = 2,
    ON_FULL = 3,
    SHUTDOWN_PREPARE = 4,
};

enum class VehicleApPowerStateShutdownParam : int32_t {
    SHUTDOWN_IMMEDIATELY = 1,
    CAN_SLEEP = 2,
    SHUTDOWN_ONLY = 3,
};

enum class VehicleApPowerSetState : int32_t {
    BOOT_COMPLETE = 1, // 0x1
    DEEP_SLEEP_ENTRY = 2, // 0x2
    DEEP_SLEEP_EXIT = 3, // 0x3
    SHUTDOWN_POSTPONE = 4, // 0x4
    SHUTDOWN_START = 5, // 0x5
    DISPLAY_OFF = 6, // 0x6
    DISPLAY_ON = 7, // 0x7
};

enum class VehicleApPowerStateIndex : int32_t {
    STATE = 0,
    ADDITIONAL = 1,
};

enum class VehicleApPowerBootupReason : int32_t {
    USER_POWER_ON = 0,
    USER_UNLOCK = 1,
    TIMER = 2,
};

enum class VehicleHwKeyInputAction : int32_t {
    ACTION_DOWN = 0,
    ACTION_UP = 1,
};

enum class VehicleDisplay : int32_t {
    MAIN = 0,
    INSTRUMENT_CLUSTER = 1,
};

enum class VehicleInstrumentClusterType : int32_t {
    NONE = 0,
    HAL_INTERFACE = 1,
    EXTERNAL_DISPLAY = 2,
};

enum class VehicleUnit : int32_t {
    SHOULD_NOT_USE = 0, // 0x000
    METER_PER_SEC = 1, // 0x01
    RPM = 2, // 0x02
    HERTZ = 3, // 0x03
    PERCENTILE = 16, // 0x10
    MILLIMETER = 32, // 0x20
    METER = 33, // 0x21
    KILOMETER = 35, // 0x23
    CELSIUS = 48, // 0x30
    FAHRENHEIT = 49, // 0x31
    KELVIN = 50, // 0x32
    MILLILITER = 64, // 0x40
    NANO_SECS = 80, // 0x50
    SECS = 83, // 0x53
    YEAR = 89, // 0x59
};

enum class VehiclePropertyChangeMode : int32_t {
    STATIC = 0, // 0x00
    ON_CHANGE = 1, // 0x01
    CONTINUOUS = 2, // 0x02
    POLL = 3, // 0x03
    ON_SET = 4, // 0x04
};

enum class VehiclePropertyAccess : int32_t {
    NONE = 0, // 0x00
    READ = 1, // 0x01
    WRITE = 2, // 0x02
    READ_WRITE = 3, // 0x03
};

enum class VehicleDrivingStatus : int32_t {
    UNRESTRICTED = 0, // 0x00
    NO_VIDEO = 1, // 0x01
    NO_KEYBOARD_INPUT = 2, // 0x02
    NO_VOICE_INPUT = 4, // 0x04
    NO_CONFIG = 8, // 0x08
    LIMIT_MESSAGE_LEN = 16, // 0x10
};

enum class VehicleGear : int32_t {
    GEAR_NEUTRAL = 1, // 0x0001
    GEAR_REVERSE = 2, // 0x0002
    GEAR_PARK = 4, // 0x0004
    GEAR_DRIVE = 8, // 0x0008
    GEAR_LOW = 16, // 0x0010
    GEAR_1 = 16, // 0x0010
    GEAR_2 = 32, // 0x0020
    GEAR_3 = 64, // 0x0040
    GEAR_4 = 128, // 0x0080
    GEAR_5 = 256, // 0x0100
    GEAR_6 = 512, // 0x0200
    GEAR_7 = 1024, // 0x0400
    GEAR_8 = 2048, // 0x0800
    GEAR_9 = 4096, // 0x1000
};

enum class VehicleAreaZone : int32_t {
    ROW_1_LEFT = 1, // 0x00000001
    ROW_1_CENTER = 2, // 0x00000002
    ROW_1_RIGHT = 4, // 0x00000004
    ROW_1 = 8, // 0x00000008
    ROW_2_LEFT = 16, // 0x00000010
    ROW_2_CENTER = 32, // 0x00000020
    ROW_2_RIGHT = 64, // 0x00000040
    ROW_2 = 128, // 0x00000080
    ROW_3_LEFT = 256, // 0x00000100
    ROW_3_CENTER = 512, // 0x00000200
    ROW_3_RIGHT = 1024, // 0x00000400
    ROW_3 = 2048, // 0x00000800
    ROW_4_LEFT = 4096, // 0x00001000
    ROW_4_CENTER = 8192, // 0x00002000
    ROW_4_RIGHT = 16384, // 0x00004000
    ROW_4 = 32768, // 0x00008000
    WHOLE_CABIN = -2147483648, // 0x80000000
};

enum class VehicleAreaSeat : int32_t {
    ROW_1_LEFT = 1, // 0x0001
    ROW_1_CENTER = 2, // 0x0002
    ROW_1_RIGHT = 4, // 0x0004
    ROW_2_LEFT = 16, // 0x0010
    ROW_2_CENTER = 32, // 0x0020
    ROW_2_RIGHT = 64, // 0x0040
    ROW_3_LEFT = 256, // 0x0100
    ROW_3_CENTER = 512, // 0x0200
    ROW_3_RIGHT = 1024, // 0x0400
};

enum class VehicleAreaWindow : int32_t {
    FRONT_WINDSHIELD = 1, // 0x0001
    REAR_WINDSHIELD = 2, // 0x0002
    ROOF_TOP = 4, // 0x0004
    ROW_1_LEFT = 16, // 0x0010
    ROW_1_RIGHT = 32, // 0x0020
    ROW_2_LEFT = 256, // 0x0100
    ROW_2_RIGHT = 512, // 0x0200
    ROW_3_LEFT = 4096, // 0x1000
    ROW_3_RIGHT = 8192, // 0x2000
};

enum class VehicleAreaDoor : int32_t {
    ROW_1_LEFT = 1, // 0x00000001
    ROW_1_RIGHT = 4, // 0x00000004
    ROW_2_LEFT = 16, // 0x00000010
    ROW_2_RIGHT = 64, // 0x00000040
    ROW_3_LEFT = 256, // 0x00000100
    ROW_3_RIGHT = 1024, // 0x00000400
    HOOD = 268435456, // 0x10000000
    REAR = 536870912, // 0x20000000
};

enum class VehicleAreaMirror : int32_t {
    DRIVER_LEFT = 1, // 0x00000001
    DRIVER_RIGHT = 2, // 0x00000002
    DRIVER_CENTER = 4, // 0x00000004
};

enum class VehicleTurnSignal : int32_t {
    NONE = 0, // 0x00
    RIGHT = 1, // 0x01
    LEFT = 2, // 0x02
    EMERGENCY = 4, // 0x04
};

struct VehicleAreaConfig final {
    int32_t areaId __attribute__ ((aligned(4)));
    int32_t minInt32Value __attribute__ ((aligned(4)));
    int32_t maxInt32Value __attribute__ ((aligned(4)));
    int64_t minInt64Value __attribute__ ((aligned(8)));
    int64_t maxInt64Value __attribute__ ((aligned(8)));
    float minFloatValue __attribute__ ((aligned(4)));
    float maxFloatValue __attribute__ ((aligned(4)));
};

static_assert(offsetof(VehicleAreaConfig, areaId) == 0, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, minInt32Value) == 4, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, maxInt32Value) == 8, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, minInt64Value) == 16, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, maxInt64Value) == 24, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, minFloatValue) == 32, "wrong offset");
static_assert(offsetof(VehicleAreaConfig, maxFloatValue) == 36, "wrong offset");
static_assert(sizeof(VehicleAreaConfig) == 40, "wrong size");
static_assert(__alignof(VehicleAreaConfig) == 8, "wrong alignment");

struct VehiclePropConfig final {
    int32_t prop __attribute__ ((aligned(4)));
    VehiclePropertyAccess access __attribute__ ((aligned(4)));
    VehiclePropertyChangeMode changeMode __attribute__ ((aligned(4)));
    int32_t supportedAreas __attribute__ ((aligned(4)));
    ::android::hardware::hidl_vec<VehicleAreaConfig> areaConfigs __attribute__ ((aligned(8)));
    int32_t configFlags __attribute__ ((aligned(4)));
    ::android::hardware::hidl_vec<int32_t> configArray __attribute__ ((aligned(8)));
    ::android::hardware::hidl_string configString __attribute__ ((aligned(8)));
    float minSampleRate __attribute__ ((aligned(4)));
    float maxSampleRate __attribute__ ((aligned(4)));
};

static_assert(offsetof(VehiclePropConfig, prop) == 0, "wrong offset");
static_assert(offsetof(VehiclePropConfig, access) == 4, "wrong offset");
static_assert(offsetof(VehiclePropConfig, changeMode) == 8, "wrong offset");
static_assert(offsetof(VehiclePropConfig, supportedAreas) == 12, "wrong offset");
static_assert(offsetof(VehiclePropConfig, areaConfigs) == 16, "wrong offset");
static_assert(offsetof(VehiclePropConfig, configFlags) == 32, "wrong offset");
static_assert(offsetof(VehiclePropConfig, configArray) == 40, "wrong offset");
static_assert(offsetof(VehiclePropConfig, configString) == 56, "wrong offset");
static_assert(offsetof(VehiclePropConfig, minSampleRate) == 72, "wrong offset");
static_assert(offsetof(VehiclePropConfig, maxSampleRate) == 76, "wrong offset");
static_assert(sizeof(VehiclePropConfig) == 80, "wrong size");
static_assert(__alignof(VehiclePropConfig) == 8, "wrong alignment");

struct VehiclePropValue final {
    struct RawValue final {
        ::android::hardware::hidl_vec<int32_t> int32Values __attribute__ ((aligned(8)));
        ::android::hardware::hidl_vec<float> floatValues __attribute__ ((aligned(8)));
        ::android::hardware::hidl_vec<int64_t> int64Values __attribute__ ((aligned(8)));
        ::android::hardware::hidl_vec<uint8_t> bytes __attribute__ ((aligned(8)));
        ::android::hardware::hidl_string stringValue __attribute__ ((aligned(8)));
    };

    static_assert(offsetof(VehiclePropValue::RawValue, int32Values) == 0, "wrong offset");
    static_assert(offsetof(VehiclePropValue::RawValue, floatValues) == 16, "wrong offset");
    static_assert(offsetof(VehiclePropValue::RawValue, int64Values) == 32, "wrong offset");
    static_assert(offsetof(VehiclePropValue::RawValue, bytes) == 48, "wrong offset");
    static_assert(offsetof(VehiclePropValue::RawValue, stringValue) == 64, "wrong offset");
    static_assert(sizeof(VehiclePropValue::RawValue) == 80, "wrong size");
    static_assert(__alignof(VehiclePropValue::RawValue) == 8, "wrong alignment");

    int32_t prop __attribute__ ((aligned(4)));
    int64_t timestamp __attribute__ ((aligned(8)));
    int32_t areaId __attribute__ ((aligned(4)));
    VehiclePropValue::RawValue value __attribute__ ((aligned(8)));
};

static_assert(offsetof(VehiclePropValue, prop) == 0, "wrong offset");
static_assert(offsetof(VehiclePropValue, timestamp) == 8, "wrong offset");
static_assert(offsetof(VehiclePropValue, areaId) == 16, "wrong offset");
static_assert(offsetof(VehiclePropValue, value) == 24, "wrong offset");
static_assert(sizeof(VehiclePropValue) == 104, "wrong size");
static_assert(__alignof(VehiclePropValue) == 8, "wrong alignment");

enum class VehicleIgnitionState : int32_t {
    UNDEFINED = 0,
    LOCK = 1,
    OFF = 2,
    ACC = 3,
    ON = 4,
    START = 5,
};

enum class VehiclePropertyOperation : int32_t {
    GENERIC = 0,
    SET = 1,
    GET = 2,
    SUBSCRIBE = 3,
};

enum class SubscribeFlags : int32_t {
    UNDEFINED = 0, // 0x0
    HAL_EVENT = 1, // 0x1
    SET_CALL = 2, // 0x2
    DEFAULT = 1, // HAL_EVENT
};

struct SubscribeOptions final {
    int32_t propId __attribute__ ((aligned(4)));
    int32_t vehicleAreas __attribute__ ((aligned(4)));
    float sampleRate __attribute__ ((aligned(4)));
    SubscribeFlags flags __attribute__ ((aligned(4)));
};

static_assert(offsetof(SubscribeOptions, propId) == 0, "wrong offset");
static_assert(offsetof(SubscribeOptions, vehicleAreas) == 4, "wrong offset");
static_assert(offsetof(SubscribeOptions, sampleRate) == 8, "wrong offset");
static_assert(offsetof(SubscribeOptions, flags) == 12, "wrong offset");
static_assert(sizeof(SubscribeOptions) == 16, "wrong size");
static_assert(__alignof(SubscribeOptions) == 4, "wrong alignment");

enum class StatusCode : int32_t {
    OK = 0,
    TRY_AGAIN = 1,
    INVALID_ARG = 2,
    NOT_AVAILABLE = 3,
    ACCESS_DENIED = 4,
    INTERNAL_ERROR = 5,
};

enum class Wheel : int32_t {
    UNKNOWN = 0, // 0x0
    LEFT_FRONT = 1, // 0x1
    RIGHT_FRONT = 2, // 0x2
    LEFT_REAR = 4, // 0x4
    RIGHT_REAR = 8, // 0x8
};

constexpr int32_t operator|(const VehiclePropertyType lhs, const VehiclePropertyType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehiclePropertyType rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehiclePropertyType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehiclePropertyType lhs, const VehiclePropertyType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehiclePropertyType rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehiclePropertyType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehiclePropertyType e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehiclePropertyType e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehiclePropertyType>(int32_t o);

std::string toString(VehiclePropertyType o);

constexpr int32_t operator|(const VehicleArea lhs, const VehicleArea rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleArea rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleArea lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleArea lhs, const VehicleArea rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleArea rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleArea lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleArea e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleArea e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleArea>(int32_t o);

std::string toString(VehicleArea o);

constexpr int32_t operator|(const VehiclePropertyGroup lhs, const VehiclePropertyGroup rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehiclePropertyGroup rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehiclePropertyGroup lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehiclePropertyGroup lhs, const VehiclePropertyGroup rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehiclePropertyGroup rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehiclePropertyGroup lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehiclePropertyGroup e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehiclePropertyGroup e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehiclePropertyGroup>(int32_t o);

std::string toString(VehiclePropertyGroup o);

constexpr int32_t operator|(const VehicleProperty lhs, const VehicleProperty rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleProperty rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleProperty lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleProperty lhs, const VehicleProperty rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleProperty rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleProperty lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleProperty e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleProperty e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleProperty>(int32_t o);

std::string toString(VehicleProperty o);

constexpr int32_t operator|(const VehicleHvacFanDirection lhs, const VehicleHvacFanDirection rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleHvacFanDirection rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleHvacFanDirection lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleHvacFanDirection lhs, const VehicleHvacFanDirection rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleHvacFanDirection rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleHvacFanDirection lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleHvacFanDirection e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleHvacFanDirection e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleHvacFanDirection>(int32_t o);

std::string toString(VehicleHvacFanDirection o);

constexpr int32_t operator|(const VehicleRadioConstants lhs, const VehicleRadioConstants rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleRadioConstants rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleRadioConstants lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleRadioConstants lhs, const VehicleRadioConstants rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleRadioConstants rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleRadioConstants lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleRadioConstants e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleRadioConstants e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleRadioConstants>(int32_t o);

std::string toString(VehicleRadioConstants o);

constexpr int32_t operator|(const VehicleAudioFocusRequest lhs, const VehicleAudioFocusRequest rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioFocusRequest rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioFocusRequest lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioFocusRequest lhs, const VehicleAudioFocusRequest rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioFocusRequest rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioFocusRequest lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioFocusRequest e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioFocusRequest e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioFocusRequest>(int32_t o);

std::string toString(VehicleAudioFocusRequest o);

constexpr int32_t operator|(const VehicleAudioFocusState lhs, const VehicleAudioFocusState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioFocusState rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioFocusState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioFocusState lhs, const VehicleAudioFocusState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioFocusState rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioFocusState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioFocusState e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioFocusState e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioFocusState>(int32_t o);

std::string toString(VehicleAudioFocusState o);

constexpr int32_t operator|(const VehicleAudioStreamFlag lhs, const VehicleAudioStreamFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioStreamFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioStreamFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioStreamFlag lhs, const VehicleAudioStreamFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioStreamFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioStreamFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioStreamFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioStreamFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioStreamFlag>(int32_t o);

std::string toString(VehicleAudioStreamFlag o);

constexpr int32_t operator|(const VehicleAudioStream lhs, const VehicleAudioStream rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioStream rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioStream lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioStream lhs, const VehicleAudioStream rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioStream rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioStream lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioStream e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioStream e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioStream>(int32_t o);

std::string toString(VehicleAudioStream o);

constexpr int32_t operator|(const VehicleAudioExtFocusFlag lhs, const VehicleAudioExtFocusFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioExtFocusFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioExtFocusFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioExtFocusFlag lhs, const VehicleAudioExtFocusFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioExtFocusFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioExtFocusFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioExtFocusFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioExtFocusFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioExtFocusFlag>(int32_t o);

std::string toString(VehicleAudioExtFocusFlag o);

constexpr int32_t operator|(const VehicleAudioFocusIndex lhs, const VehicleAudioFocusIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioFocusIndex rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioFocusIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioFocusIndex lhs, const VehicleAudioFocusIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioFocusIndex rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioFocusIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioFocusIndex e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioFocusIndex e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioFocusIndex>(int32_t o);

std::string toString(VehicleAudioFocusIndex o);

constexpr int32_t operator|(const VehicleAudioContextFlag lhs, const VehicleAudioContextFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioContextFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioContextFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioContextFlag lhs, const VehicleAudioContextFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioContextFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioContextFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioContextFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioContextFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioContextFlag>(int32_t o);

std::string toString(VehicleAudioContextFlag o);

constexpr int32_t operator|(const VehicleAudioVolumeCapabilityFlag lhs, const VehicleAudioVolumeCapabilityFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioVolumeCapabilityFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioVolumeCapabilityFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioVolumeCapabilityFlag lhs, const VehicleAudioVolumeCapabilityFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioVolumeCapabilityFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioVolumeCapabilityFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioVolumeCapabilityFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioVolumeCapabilityFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioVolumeCapabilityFlag>(int32_t o);

std::string toString(VehicleAudioVolumeCapabilityFlag o);

constexpr int32_t operator|(const VehicleAudioVolumeState lhs, const VehicleAudioVolumeState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioVolumeState rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioVolumeState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioVolumeState lhs, const VehicleAudioVolumeState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioVolumeState rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioVolumeState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioVolumeState e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioVolumeState e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioVolumeState>(int32_t o);

std::string toString(VehicleAudioVolumeState o);

constexpr int32_t operator|(const VehicleAudioVolumeIndex lhs, const VehicleAudioVolumeIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioVolumeIndex rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioVolumeIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioVolumeIndex lhs, const VehicleAudioVolumeIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioVolumeIndex rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioVolumeIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioVolumeIndex e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioVolumeIndex e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioVolumeIndex>(int32_t o);

std::string toString(VehicleAudioVolumeIndex o);

constexpr int32_t operator|(const VehicleAudioVolumeLimitIndex lhs, const VehicleAudioVolumeLimitIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioVolumeLimitIndex rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioVolumeLimitIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioVolumeLimitIndex lhs, const VehicleAudioVolumeLimitIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioVolumeLimitIndex rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioVolumeLimitIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioVolumeLimitIndex e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioVolumeLimitIndex e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioVolumeLimitIndex>(int32_t o);

std::string toString(VehicleAudioVolumeLimitIndex o);

constexpr int32_t operator|(const VehicleAudioRoutingPolicyIndex lhs, const VehicleAudioRoutingPolicyIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioRoutingPolicyIndex rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioRoutingPolicyIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioRoutingPolicyIndex lhs, const VehicleAudioRoutingPolicyIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioRoutingPolicyIndex rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioRoutingPolicyIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioRoutingPolicyIndex e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioRoutingPolicyIndex e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioRoutingPolicyIndex>(int32_t o);

std::string toString(VehicleAudioRoutingPolicyIndex o);

constexpr int32_t operator|(const VehicleAudioHwVariantConfigFlag lhs, const VehicleAudioHwVariantConfigFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAudioHwVariantConfigFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAudioHwVariantConfigFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAudioHwVariantConfigFlag lhs, const VehicleAudioHwVariantConfigFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAudioHwVariantConfigFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAudioHwVariantConfigFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAudioHwVariantConfigFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAudioHwVariantConfigFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAudioHwVariantConfigFlag>(int32_t o);

std::string toString(VehicleAudioHwVariantConfigFlag o);

constexpr int32_t operator|(const VehicleApPowerStateConfigFlag lhs, const VehicleApPowerStateConfigFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerStateConfigFlag rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerStateConfigFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerStateConfigFlag lhs, const VehicleApPowerStateConfigFlag rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerStateConfigFlag rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerStateConfigFlag lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerStateConfigFlag e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerStateConfigFlag e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerStateConfigFlag>(int32_t o);

std::string toString(VehicleApPowerStateConfigFlag o);

constexpr int32_t operator|(const VehicleApPowerState lhs, const VehicleApPowerState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerState rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerState lhs, const VehicleApPowerState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerState rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerState e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerState e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerState>(int32_t o);

std::string toString(VehicleApPowerState o);

constexpr int32_t operator|(const VehicleApPowerStateShutdownParam lhs, const VehicleApPowerStateShutdownParam rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerStateShutdownParam rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerStateShutdownParam lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerStateShutdownParam lhs, const VehicleApPowerStateShutdownParam rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerStateShutdownParam rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerStateShutdownParam lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerStateShutdownParam e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerStateShutdownParam e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerStateShutdownParam>(int32_t o);

std::string toString(VehicleApPowerStateShutdownParam o);

constexpr int32_t operator|(const VehicleApPowerSetState lhs, const VehicleApPowerSetState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerSetState rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerSetState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerSetState lhs, const VehicleApPowerSetState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerSetState rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerSetState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerSetState e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerSetState e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerSetState>(int32_t o);

std::string toString(VehicleApPowerSetState o);

constexpr int32_t operator|(const VehicleApPowerStateIndex lhs, const VehicleApPowerStateIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerStateIndex rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerStateIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerStateIndex lhs, const VehicleApPowerStateIndex rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerStateIndex rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerStateIndex lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerStateIndex e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerStateIndex e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerStateIndex>(int32_t o);

std::string toString(VehicleApPowerStateIndex o);

constexpr int32_t operator|(const VehicleApPowerBootupReason lhs, const VehicleApPowerBootupReason rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleApPowerBootupReason rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleApPowerBootupReason lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleApPowerBootupReason lhs, const VehicleApPowerBootupReason rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleApPowerBootupReason rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleApPowerBootupReason lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleApPowerBootupReason e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleApPowerBootupReason e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleApPowerBootupReason>(int32_t o);

std::string toString(VehicleApPowerBootupReason o);

constexpr int32_t operator|(const VehicleHwKeyInputAction lhs, const VehicleHwKeyInputAction rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleHwKeyInputAction rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleHwKeyInputAction lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleHwKeyInputAction lhs, const VehicleHwKeyInputAction rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleHwKeyInputAction rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleHwKeyInputAction lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleHwKeyInputAction e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleHwKeyInputAction e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleHwKeyInputAction>(int32_t o);

std::string toString(VehicleHwKeyInputAction o);

constexpr int32_t operator|(const VehicleDisplay lhs, const VehicleDisplay rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleDisplay rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleDisplay lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleDisplay lhs, const VehicleDisplay rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleDisplay rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleDisplay lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleDisplay e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleDisplay e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleDisplay>(int32_t o);

std::string toString(VehicleDisplay o);

constexpr int32_t operator|(const VehicleInstrumentClusterType lhs, const VehicleInstrumentClusterType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleInstrumentClusterType rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleInstrumentClusterType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleInstrumentClusterType lhs, const VehicleInstrumentClusterType rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleInstrumentClusterType rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleInstrumentClusterType lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleInstrumentClusterType e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleInstrumentClusterType e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleInstrumentClusterType>(int32_t o);

std::string toString(VehicleInstrumentClusterType o);

constexpr int32_t operator|(const VehicleUnit lhs, const VehicleUnit rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleUnit rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleUnit lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleUnit lhs, const VehicleUnit rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleUnit rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleUnit lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleUnit e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleUnit e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleUnit>(int32_t o);

std::string toString(VehicleUnit o);

constexpr int32_t operator|(const VehiclePropertyChangeMode lhs, const VehiclePropertyChangeMode rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehiclePropertyChangeMode rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehiclePropertyChangeMode lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehiclePropertyChangeMode lhs, const VehiclePropertyChangeMode rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehiclePropertyChangeMode rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehiclePropertyChangeMode lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehiclePropertyChangeMode e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehiclePropertyChangeMode e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehiclePropertyChangeMode>(int32_t o);

std::string toString(VehiclePropertyChangeMode o);

constexpr int32_t operator|(const VehiclePropertyAccess lhs, const VehiclePropertyAccess rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehiclePropertyAccess rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehiclePropertyAccess lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehiclePropertyAccess lhs, const VehiclePropertyAccess rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehiclePropertyAccess rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehiclePropertyAccess lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehiclePropertyAccess e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehiclePropertyAccess e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehiclePropertyAccess>(int32_t o);

std::string toString(VehiclePropertyAccess o);

constexpr int32_t operator|(const VehicleDrivingStatus lhs, const VehicleDrivingStatus rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleDrivingStatus rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleDrivingStatus lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleDrivingStatus lhs, const VehicleDrivingStatus rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleDrivingStatus rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleDrivingStatus lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleDrivingStatus e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleDrivingStatus e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleDrivingStatus>(int32_t o);

std::string toString(VehicleDrivingStatus o);

constexpr int32_t operator|(const VehicleGear lhs, const VehicleGear rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleGear rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleGear lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleGear lhs, const VehicleGear rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleGear rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleGear lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleGear e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleGear e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleGear>(int32_t o);

std::string toString(VehicleGear o);

constexpr int32_t operator|(const VehicleAreaZone lhs, const VehicleAreaZone rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAreaZone rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAreaZone lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAreaZone lhs, const VehicleAreaZone rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAreaZone rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAreaZone lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAreaZone e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAreaZone e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAreaZone>(int32_t o);

std::string toString(VehicleAreaZone o);

constexpr int32_t operator|(const VehicleAreaSeat lhs, const VehicleAreaSeat rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAreaSeat rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAreaSeat lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAreaSeat lhs, const VehicleAreaSeat rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAreaSeat rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAreaSeat lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAreaSeat e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAreaSeat e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAreaSeat>(int32_t o);

std::string toString(VehicleAreaSeat o);

constexpr int32_t operator|(const VehicleAreaWindow lhs, const VehicleAreaWindow rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAreaWindow rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAreaWindow lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAreaWindow lhs, const VehicleAreaWindow rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAreaWindow rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAreaWindow lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAreaWindow e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAreaWindow e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAreaWindow>(int32_t o);

std::string toString(VehicleAreaWindow o);

constexpr int32_t operator|(const VehicleAreaDoor lhs, const VehicleAreaDoor rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAreaDoor rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAreaDoor lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAreaDoor lhs, const VehicleAreaDoor rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAreaDoor rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAreaDoor lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAreaDoor e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAreaDoor e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAreaDoor>(int32_t o);

std::string toString(VehicleAreaDoor o);

constexpr int32_t operator|(const VehicleAreaMirror lhs, const VehicleAreaMirror rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleAreaMirror rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleAreaMirror lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleAreaMirror lhs, const VehicleAreaMirror rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleAreaMirror rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleAreaMirror lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleAreaMirror e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleAreaMirror e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleAreaMirror>(int32_t o);

std::string toString(VehicleAreaMirror o);

constexpr int32_t operator|(const VehicleTurnSignal lhs, const VehicleTurnSignal rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleTurnSignal rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleTurnSignal lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleTurnSignal lhs, const VehicleTurnSignal rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleTurnSignal rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleTurnSignal lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleTurnSignal e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleTurnSignal e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleTurnSignal>(int32_t o);

std::string toString(VehicleTurnSignal o);

std::string toString(const VehicleAreaConfig&);

bool operator==(const VehicleAreaConfig&, const VehicleAreaConfig&);

bool operator!=(const VehicleAreaConfig&, const VehicleAreaConfig&);

std::string toString(const VehiclePropConfig&);

bool operator==(const VehiclePropConfig&, const VehiclePropConfig&);

bool operator!=(const VehiclePropConfig&, const VehiclePropConfig&);

std::string toString(const VehiclePropValue::RawValue&);

bool operator==(const VehiclePropValue::RawValue&, const VehiclePropValue::RawValue&);

bool operator!=(const VehiclePropValue::RawValue&, const VehiclePropValue::RawValue&);

std::string toString(const VehiclePropValue&);

bool operator==(const VehiclePropValue&, const VehiclePropValue&);

bool operator!=(const VehiclePropValue&, const VehiclePropValue&);

constexpr int32_t operator|(const VehicleIgnitionState lhs, const VehicleIgnitionState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehicleIgnitionState rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehicleIgnitionState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehicleIgnitionState lhs, const VehicleIgnitionState rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehicleIgnitionState rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehicleIgnitionState lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehicleIgnitionState e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehicleIgnitionState e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehicleIgnitionState>(int32_t o);

std::string toString(VehicleIgnitionState o);

constexpr int32_t operator|(const VehiclePropertyOperation lhs, const VehiclePropertyOperation rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const VehiclePropertyOperation rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const VehiclePropertyOperation lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const VehiclePropertyOperation lhs, const VehiclePropertyOperation rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const VehiclePropertyOperation rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const VehiclePropertyOperation lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const VehiclePropertyOperation e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const VehiclePropertyOperation e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<VehiclePropertyOperation>(int32_t o);

std::string toString(VehiclePropertyOperation o);

constexpr int32_t operator|(const SubscribeFlags lhs, const SubscribeFlags rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const SubscribeFlags rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const SubscribeFlags lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const SubscribeFlags lhs, const SubscribeFlags rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const SubscribeFlags rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const SubscribeFlags lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const SubscribeFlags e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const SubscribeFlags e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<SubscribeFlags>(int32_t o);

std::string toString(SubscribeFlags o);

std::string toString(const SubscribeOptions&);

bool operator==(const SubscribeOptions&, const SubscribeOptions&);

bool operator!=(const SubscribeOptions&, const SubscribeOptions&);

constexpr int32_t operator|(const StatusCode lhs, const StatusCode rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const StatusCode rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const StatusCode lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const StatusCode lhs, const StatusCode rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const StatusCode rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const StatusCode lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const StatusCode e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const StatusCode e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<StatusCode>(int32_t o);

std::string toString(StatusCode o);

constexpr int32_t operator|(const Wheel lhs, const Wheel rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const int32_t lhs, const Wheel rhs) {
    return static_cast<int32_t>(lhs | static_cast<int32_t>(rhs));
}

constexpr int32_t operator|(const Wheel lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) | rhs);
}

constexpr int32_t operator&(const Wheel lhs, const Wheel rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const int32_t lhs, const Wheel rhs) {
    return static_cast<int32_t>(lhs & static_cast<int32_t>(rhs));
}

constexpr int32_t operator&(const Wheel lhs, const int32_t rhs) {
    return static_cast<int32_t>(static_cast<int32_t>(lhs) & rhs);
}

constexpr int32_t &operator|=(int32_t& v, const Wheel e) {
    v |= static_cast<int32_t>(e);
    return v;
}

constexpr int32_t &operator&=(int32_t& v, const Wheel e) {
    v &= static_cast<int32_t>(e);
    return v;
}

template<typename>
std::string toString(int32_t o);
template<>
std::string toString<Wheel>(int32_t o);

std::string toString(Wheel o);


}  // namespace V2_0
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_TYPES_H
