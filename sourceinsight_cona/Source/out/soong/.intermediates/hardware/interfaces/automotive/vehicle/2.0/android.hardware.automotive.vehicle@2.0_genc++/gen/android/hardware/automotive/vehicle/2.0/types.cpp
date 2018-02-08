#define LOG_TAG "android.hardware.automotive.vehicle@2.0::types"

#include <android/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <android/hardware/automotive/vehicle/2.0/types.h>
#include <android/hardware/automotive/vehicle/2.0/hwtypes.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

template<>
std::string toString<VehiclePropertyType>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehiclePropertyType::STRING) == static_cast<int32_t>(VehiclePropertyType::STRING)) {
        os += (first ? "" : " | ");
        os += "STRING";
        first = false;
        flipped |= VehiclePropertyType::STRING;
    }
    if ((o & VehiclePropertyType::BOOLEAN) == static_cast<int32_t>(VehiclePropertyType::BOOLEAN)) {
        os += (first ? "" : " | ");
        os += "BOOLEAN";
        first = false;
        flipped |= VehiclePropertyType::BOOLEAN;
    }
    if ((o & VehiclePropertyType::INT32) == static_cast<int32_t>(VehiclePropertyType::INT32)) {
        os += (first ? "" : " | ");
        os += "INT32";
        first = false;
        flipped |= VehiclePropertyType::INT32;
    }
    if ((o & VehiclePropertyType::INT32_VEC) == static_cast<int32_t>(VehiclePropertyType::INT32_VEC)) {
        os += (first ? "" : " | ");
        os += "INT32_VEC";
        first = false;
        flipped |= VehiclePropertyType::INT32_VEC;
    }
    if ((o & VehiclePropertyType::INT64) == static_cast<int32_t>(VehiclePropertyType::INT64)) {
        os += (first ? "" : " | ");
        os += "INT64";
        first = false;
        flipped |= VehiclePropertyType::INT64;
    }
    if ((o & VehiclePropertyType::FLOAT) == static_cast<int32_t>(VehiclePropertyType::FLOAT)) {
        os += (first ? "" : " | ");
        os += "FLOAT";
        first = false;
        flipped |= VehiclePropertyType::FLOAT;
    }
    if ((o & VehiclePropertyType::FLOAT_VEC) == static_cast<int32_t>(VehiclePropertyType::FLOAT_VEC)) {
        os += (first ? "" : " | ");
        os += "FLOAT_VEC";
        first = false;
        flipped |= VehiclePropertyType::FLOAT_VEC;
    }
    if ((o & VehiclePropertyType::BYTES) == static_cast<int32_t>(VehiclePropertyType::BYTES)) {
        os += (first ? "" : " | ");
        os += "BYTES";
        first = false;
        flipped |= VehiclePropertyType::BYTES;
    }
    if ((o & VehiclePropertyType::COMPLEX) == static_cast<int32_t>(VehiclePropertyType::COMPLEX)) {
        os += (first ? "" : " | ");
        os += "COMPLEX";
        first = false;
        flipped |= VehiclePropertyType::COMPLEX;
    }
    if ((o & VehiclePropertyType::MASK) == static_cast<int32_t>(VehiclePropertyType::MASK)) {
        os += (first ? "" : " | ");
        os += "MASK";
        first = false;
        flipped |= VehiclePropertyType::MASK;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehiclePropertyType o) {
    using ::android::hardware::details::toHexString;
    if (o == VehiclePropertyType::STRING) {
        return "STRING";
    }
    if (o == VehiclePropertyType::BOOLEAN) {
        return "BOOLEAN";
    }
    if (o == VehiclePropertyType::INT32) {
        return "INT32";
    }
    if (o == VehiclePropertyType::INT32_VEC) {
        return "INT32_VEC";
    }
    if (o == VehiclePropertyType::INT64) {
        return "INT64";
    }
    if (o == VehiclePropertyType::FLOAT) {
        return "FLOAT";
    }
    if (o == VehiclePropertyType::FLOAT_VEC) {
        return "FLOAT_VEC";
    }
    if (o == VehiclePropertyType::BYTES) {
        return "BYTES";
    }
    if (o == VehiclePropertyType::COMPLEX) {
        return "COMPLEX";
    }
    if (o == VehiclePropertyType::MASK) {
        return "MASK";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleArea>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleArea::GLOBAL) == static_cast<int32_t>(VehicleArea::GLOBAL)) {
        os += (first ? "" : " | ");
        os += "GLOBAL";
        first = false;
        flipped |= VehicleArea::GLOBAL;
    }
    if ((o & VehicleArea::ZONE) == static_cast<int32_t>(VehicleArea::ZONE)) {
        os += (first ? "" : " | ");
        os += "ZONE";
        first = false;
        flipped |= VehicleArea::ZONE;
    }
    if ((o & VehicleArea::WINDOW) == static_cast<int32_t>(VehicleArea::WINDOW)) {
        os += (first ? "" : " | ");
        os += "WINDOW";
        first = false;
        flipped |= VehicleArea::WINDOW;
    }
    if ((o & VehicleArea::MIRROR) == static_cast<int32_t>(VehicleArea::MIRROR)) {
        os += (first ? "" : " | ");
        os += "MIRROR";
        first = false;
        flipped |= VehicleArea::MIRROR;
    }
    if ((o & VehicleArea::SEAT) == static_cast<int32_t>(VehicleArea::SEAT)) {
        os += (first ? "" : " | ");
        os += "SEAT";
        first = false;
        flipped |= VehicleArea::SEAT;
    }
    if ((o & VehicleArea::DOOR) == static_cast<int32_t>(VehicleArea::DOOR)) {
        os += (first ? "" : " | ");
        os += "DOOR";
        first = false;
        flipped |= VehicleArea::DOOR;
    }
    if ((o & VehicleArea::MASK) == static_cast<int32_t>(VehicleArea::MASK)) {
        os += (first ? "" : " | ");
        os += "MASK";
        first = false;
        flipped |= VehicleArea::MASK;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleArea o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleArea::GLOBAL) {
        return "GLOBAL";
    }
    if (o == VehicleArea::ZONE) {
        return "ZONE";
    }
    if (o == VehicleArea::WINDOW) {
        return "WINDOW";
    }
    if (o == VehicleArea::MIRROR) {
        return "MIRROR";
    }
    if (o == VehicleArea::SEAT) {
        return "SEAT";
    }
    if (o == VehicleArea::DOOR) {
        return "DOOR";
    }
    if (o == VehicleArea::MASK) {
        return "MASK";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehiclePropertyGroup>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehiclePropertyGroup::SYSTEM) == static_cast<int32_t>(VehiclePropertyGroup::SYSTEM)) {
        os += (first ? "" : " | ");
        os += "SYSTEM";
        first = false;
        flipped |= VehiclePropertyGroup::SYSTEM;
    }
    if ((o & VehiclePropertyGroup::VENDOR) == static_cast<int32_t>(VehiclePropertyGroup::VENDOR)) {
        os += (first ? "" : " | ");
        os += "VENDOR";
        first = false;
        flipped |= VehiclePropertyGroup::VENDOR;
    }
    if ((o & VehiclePropertyGroup::MASK) == static_cast<int32_t>(VehiclePropertyGroup::MASK)) {
        os += (first ? "" : " | ");
        os += "MASK";
        first = false;
        flipped |= VehiclePropertyGroup::MASK;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehiclePropertyGroup o) {
    using ::android::hardware::details::toHexString;
    if (o == VehiclePropertyGroup::SYSTEM) {
        return "SYSTEM";
    }
    if (o == VehiclePropertyGroup::VENDOR) {
        return "VENDOR";
    }
    if (o == VehiclePropertyGroup::MASK) {
        return "MASK";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleProperty>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleProperty::INVALID) == static_cast<int32_t>(VehicleProperty::INVALID)) {
        os += (first ? "" : " | ");
        os += "INVALID";
        first = false;
        flipped |= VehicleProperty::INVALID;
    }
    if ((o & VehicleProperty::INFO_VIN) == static_cast<int32_t>(VehicleProperty::INFO_VIN)) {
        os += (first ? "" : " | ");
        os += "INFO_VIN";
        first = false;
        flipped |= VehicleProperty::INFO_VIN;
    }
    if ((o & VehicleProperty::INFO_MAKE) == static_cast<int32_t>(VehicleProperty::INFO_MAKE)) {
        os += (first ? "" : " | ");
        os += "INFO_MAKE";
        first = false;
        flipped |= VehicleProperty::INFO_MAKE;
    }
    if ((o & VehicleProperty::INFO_MODEL) == static_cast<int32_t>(VehicleProperty::INFO_MODEL)) {
        os += (first ? "" : " | ");
        os += "INFO_MODEL";
        first = false;
        flipped |= VehicleProperty::INFO_MODEL;
    }
    if ((o & VehicleProperty::INFO_MODEL_YEAR) == static_cast<int32_t>(VehicleProperty::INFO_MODEL_YEAR)) {
        os += (first ? "" : " | ");
        os += "INFO_MODEL_YEAR";
        first = false;
        flipped |= VehicleProperty::INFO_MODEL_YEAR;
    }
    if ((o & VehicleProperty::INFO_FUEL_CAPACITY) == static_cast<int32_t>(VehicleProperty::INFO_FUEL_CAPACITY)) {
        os += (first ? "" : " | ");
        os += "INFO_FUEL_CAPACITY";
        first = false;
        flipped |= VehicleProperty::INFO_FUEL_CAPACITY;
    }
    if ((o & VehicleProperty::PERF_ODOMETER) == static_cast<int32_t>(VehicleProperty::PERF_ODOMETER)) {
        os += (first ? "" : " | ");
        os += "PERF_ODOMETER";
        first = false;
        flipped |= VehicleProperty::PERF_ODOMETER;
    }
    if ((o & VehicleProperty::PERF_VEHICLE_SPEED) == static_cast<int32_t>(VehicleProperty::PERF_VEHICLE_SPEED)) {
        os += (first ? "" : " | ");
        os += "PERF_VEHICLE_SPEED";
        first = false;
        flipped |= VehicleProperty::PERF_VEHICLE_SPEED;
    }
    if ((o & VehicleProperty::ENGINE_COOLANT_TEMP) == static_cast<int32_t>(VehicleProperty::ENGINE_COOLANT_TEMP)) {
        os += (first ? "" : " | ");
        os += "ENGINE_COOLANT_TEMP";
        first = false;
        flipped |= VehicleProperty::ENGINE_COOLANT_TEMP;
    }
    if ((o & VehicleProperty::ENGINE_OIL_TEMP) == static_cast<int32_t>(VehicleProperty::ENGINE_OIL_TEMP)) {
        os += (first ? "" : " | ");
        os += "ENGINE_OIL_TEMP";
        first = false;
        flipped |= VehicleProperty::ENGINE_OIL_TEMP;
    }
    if ((o & VehicleProperty::ENGINE_RPM) == static_cast<int32_t>(VehicleProperty::ENGINE_RPM)) {
        os += (first ? "" : " | ");
        os += "ENGINE_RPM";
        first = false;
        flipped |= VehicleProperty::ENGINE_RPM;
    }
    if ((o & VehicleProperty::GEAR_SELECTION) == static_cast<int32_t>(VehicleProperty::GEAR_SELECTION)) {
        os += (first ? "" : " | ");
        os += "GEAR_SELECTION";
        first = false;
        flipped |= VehicleProperty::GEAR_SELECTION;
    }
    if ((o & VehicleProperty::CURRENT_GEAR) == static_cast<int32_t>(VehicleProperty::CURRENT_GEAR)) {
        os += (first ? "" : " | ");
        os += "CURRENT_GEAR";
        first = false;
        flipped |= VehicleProperty::CURRENT_GEAR;
    }
    if ((o & VehicleProperty::PARKING_BRAKE_ON) == static_cast<int32_t>(VehicleProperty::PARKING_BRAKE_ON)) {
        os += (first ? "" : " | ");
        os += "PARKING_BRAKE_ON";
        first = false;
        flipped |= VehicleProperty::PARKING_BRAKE_ON;
    }
    if ((o & VehicleProperty::DRIVING_STATUS) == static_cast<int32_t>(VehicleProperty::DRIVING_STATUS)) {
        os += (first ? "" : " | ");
        os += "DRIVING_STATUS";
        first = false;
        flipped |= VehicleProperty::DRIVING_STATUS;
    }
    if ((o & VehicleProperty::FUEL_LEVEL_LOW) == static_cast<int32_t>(VehicleProperty::FUEL_LEVEL_LOW)) {
        os += (first ? "" : " | ");
        os += "FUEL_LEVEL_LOW";
        first = false;
        flipped |= VehicleProperty::FUEL_LEVEL_LOW;
    }
    if ((o & VehicleProperty::NIGHT_MODE) == static_cast<int32_t>(VehicleProperty::NIGHT_MODE)) {
        os += (first ? "" : " | ");
        os += "NIGHT_MODE";
        first = false;
        flipped |= VehicleProperty::NIGHT_MODE;
    }
    if ((o & VehicleProperty::TURN_SIGNAL_STATE) == static_cast<int32_t>(VehicleProperty::TURN_SIGNAL_STATE)) {
        os += (first ? "" : " | ");
        os += "TURN_SIGNAL_STATE";
        first = false;
        flipped |= VehicleProperty::TURN_SIGNAL_STATE;
    }
    if ((o & VehicleProperty::IGNITION_STATE) == static_cast<int32_t>(VehicleProperty::IGNITION_STATE)) {
        os += (first ? "" : " | ");
        os += "IGNITION_STATE";
        first = false;
        flipped |= VehicleProperty::IGNITION_STATE;
    }
    if ((o & VehicleProperty::HVAC_FAN_SPEED) == static_cast<int32_t>(VehicleProperty::HVAC_FAN_SPEED)) {
        os += (first ? "" : " | ");
        os += "HVAC_FAN_SPEED";
        first = false;
        flipped |= VehicleProperty::HVAC_FAN_SPEED;
    }
    if ((o & VehicleProperty::HVAC_FAN_DIRECTION) == static_cast<int32_t>(VehicleProperty::HVAC_FAN_DIRECTION)) {
        os += (first ? "" : " | ");
        os += "HVAC_FAN_DIRECTION";
        first = false;
        flipped |= VehicleProperty::HVAC_FAN_DIRECTION;
    }
    if ((o & VehicleProperty::HVAC_TEMPERATURE_CURRENT) == static_cast<int32_t>(VehicleProperty::HVAC_TEMPERATURE_CURRENT)) {
        os += (first ? "" : " | ");
        os += "HVAC_TEMPERATURE_CURRENT";
        first = false;
        flipped |= VehicleProperty::HVAC_TEMPERATURE_CURRENT;
    }
    if ((o & VehicleProperty::HVAC_TEMPERATURE_SET) == static_cast<int32_t>(VehicleProperty::HVAC_TEMPERATURE_SET)) {
        os += (first ? "" : " | ");
        os += "HVAC_TEMPERATURE_SET";
        first = false;
        flipped |= VehicleProperty::HVAC_TEMPERATURE_SET;
    }
    if ((o & VehicleProperty::HVAC_DEFROSTER) == static_cast<int32_t>(VehicleProperty::HVAC_DEFROSTER)) {
        os += (first ? "" : " | ");
        os += "HVAC_DEFROSTER";
        first = false;
        flipped |= VehicleProperty::HVAC_DEFROSTER;
    }
    if ((o & VehicleProperty::HVAC_AC_ON) == static_cast<int32_t>(VehicleProperty::HVAC_AC_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_AC_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_AC_ON;
    }
    if ((o & VehicleProperty::HVAC_MAX_AC_ON) == static_cast<int32_t>(VehicleProperty::HVAC_MAX_AC_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_MAX_AC_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_MAX_AC_ON;
    }
    if ((o & VehicleProperty::HVAC_MAX_DEFROST_ON) == static_cast<int32_t>(VehicleProperty::HVAC_MAX_DEFROST_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_MAX_DEFROST_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_MAX_DEFROST_ON;
    }
    if ((o & VehicleProperty::HVAC_RECIRC_ON) == static_cast<int32_t>(VehicleProperty::HVAC_RECIRC_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_RECIRC_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_RECIRC_ON;
    }
    if ((o & VehicleProperty::HVAC_DUAL_ON) == static_cast<int32_t>(VehicleProperty::HVAC_DUAL_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_DUAL_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_DUAL_ON;
    }
    if ((o & VehicleProperty::HVAC_AUTO_ON) == static_cast<int32_t>(VehicleProperty::HVAC_AUTO_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_AUTO_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_AUTO_ON;
    }
    if ((o & VehicleProperty::HVAC_SEAT_TEMPERATURE) == static_cast<int32_t>(VehicleProperty::HVAC_SEAT_TEMPERATURE)) {
        os += (first ? "" : " | ");
        os += "HVAC_SEAT_TEMPERATURE";
        first = false;
        flipped |= VehicleProperty::HVAC_SEAT_TEMPERATURE;
    }
    if ((o & VehicleProperty::HVAC_SIDE_MIRROR_HEAT) == static_cast<int32_t>(VehicleProperty::HVAC_SIDE_MIRROR_HEAT)) {
        os += (first ? "" : " | ");
        os += "HVAC_SIDE_MIRROR_HEAT";
        first = false;
        flipped |= VehicleProperty::HVAC_SIDE_MIRROR_HEAT;
    }
    if ((o & VehicleProperty::HVAC_STEERING_WHEEL_TEMP) == static_cast<int32_t>(VehicleProperty::HVAC_STEERING_WHEEL_TEMP)) {
        os += (first ? "" : " | ");
        os += "HVAC_STEERING_WHEEL_TEMP";
        first = false;
        flipped |= VehicleProperty::HVAC_STEERING_WHEEL_TEMP;
    }
    if ((o & VehicleProperty::HVAC_TEMPERATURE_UNITS) == static_cast<int32_t>(VehicleProperty::HVAC_TEMPERATURE_UNITS)) {
        os += (first ? "" : " | ");
        os += "HVAC_TEMPERATURE_UNITS";
        first = false;
        flipped |= VehicleProperty::HVAC_TEMPERATURE_UNITS;
    }
    if ((o & VehicleProperty::HVAC_ACTUAL_FAN_SPEED_RPM) == static_cast<int32_t>(VehicleProperty::HVAC_ACTUAL_FAN_SPEED_RPM)) {
        os += (first ? "" : " | ");
        os += "HVAC_ACTUAL_FAN_SPEED_RPM";
        first = false;
        flipped |= VehicleProperty::HVAC_ACTUAL_FAN_SPEED_RPM;
    }
    if ((o & VehicleProperty::HVAC_FAN_DIRECTION_AVAILABLE) == static_cast<int32_t>(VehicleProperty::HVAC_FAN_DIRECTION_AVAILABLE)) {
        os += (first ? "" : " | ");
        os += "HVAC_FAN_DIRECTION_AVAILABLE";
        first = false;
        flipped |= VehicleProperty::HVAC_FAN_DIRECTION_AVAILABLE;
    }
    if ((o & VehicleProperty::HVAC_POWER_ON) == static_cast<int32_t>(VehicleProperty::HVAC_POWER_ON)) {
        os += (first ? "" : " | ");
        os += "HVAC_POWER_ON";
        first = false;
        flipped |= VehicleProperty::HVAC_POWER_ON;
    }
    if ((o & VehicleProperty::ENV_OUTSIDE_TEMPERATURE) == static_cast<int32_t>(VehicleProperty::ENV_OUTSIDE_TEMPERATURE)) {
        os += (first ? "" : " | ");
        os += "ENV_OUTSIDE_TEMPERATURE";
        first = false;
        flipped |= VehicleProperty::ENV_OUTSIDE_TEMPERATURE;
    }
    if ((o & VehicleProperty::ENV_CABIN_TEMPERATURE) == static_cast<int32_t>(VehicleProperty::ENV_CABIN_TEMPERATURE)) {
        os += (first ? "" : " | ");
        os += "ENV_CABIN_TEMPERATURE";
        first = false;
        flipped |= VehicleProperty::ENV_CABIN_TEMPERATURE;
    }
    if ((o & VehicleProperty::RADIO_PRESET) == static_cast<int32_t>(VehicleProperty::RADIO_PRESET)) {
        os += (first ? "" : " | ");
        os += "RADIO_PRESET";
        first = false;
        flipped |= VehicleProperty::RADIO_PRESET;
    }
    if ((o & VehicleProperty::AUDIO_FOCUS) == static_cast<int32_t>(VehicleProperty::AUDIO_FOCUS)) {
        os += (first ? "" : " | ");
        os += "AUDIO_FOCUS";
        first = false;
        flipped |= VehicleProperty::AUDIO_FOCUS;
    }
    if ((o & VehicleProperty::AUDIO_FOCUS_EXT_SYNC) == static_cast<int32_t>(VehicleProperty::AUDIO_FOCUS_EXT_SYNC)) {
        os += (first ? "" : " | ");
        os += "AUDIO_FOCUS_EXT_SYNC";
        first = false;
        flipped |= VehicleProperty::AUDIO_FOCUS_EXT_SYNC;
    }
    if ((o & VehicleProperty::AUDIO_VOLUME) == static_cast<int32_t>(VehicleProperty::AUDIO_VOLUME)) {
        os += (first ? "" : " | ");
        os += "AUDIO_VOLUME";
        first = false;
        flipped |= VehicleProperty::AUDIO_VOLUME;
    }
    if ((o & VehicleProperty::AUDIO_VOLUME_EXT_SYNC) == static_cast<int32_t>(VehicleProperty::AUDIO_VOLUME_EXT_SYNC)) {
        os += (first ? "" : " | ");
        os += "AUDIO_VOLUME_EXT_SYNC";
        first = false;
        flipped |= VehicleProperty::AUDIO_VOLUME_EXT_SYNC;
    }
    if ((o & VehicleProperty::AUDIO_VOLUME_LIMIT) == static_cast<int32_t>(VehicleProperty::AUDIO_VOLUME_LIMIT)) {
        os += (first ? "" : " | ");
        os += "AUDIO_VOLUME_LIMIT";
        first = false;
        flipped |= VehicleProperty::AUDIO_VOLUME_LIMIT;
    }
    if ((o & VehicleProperty::AUDIO_ROUTING_POLICY) == static_cast<int32_t>(VehicleProperty::AUDIO_ROUTING_POLICY)) {
        os += (first ? "" : " | ");
        os += "AUDIO_ROUTING_POLICY";
        first = false;
        flipped |= VehicleProperty::AUDIO_ROUTING_POLICY;
    }
    if ((o & VehicleProperty::AUDIO_HW_VARIANT) == static_cast<int32_t>(VehicleProperty::AUDIO_HW_VARIANT)) {
        os += (first ? "" : " | ");
        os += "AUDIO_HW_VARIANT";
        first = false;
        flipped |= VehicleProperty::AUDIO_HW_VARIANT;
    }
    if ((o & VehicleProperty::AUDIO_EXT_ROUTING_HINT) == static_cast<int32_t>(VehicleProperty::AUDIO_EXT_ROUTING_HINT)) {
        os += (first ? "" : " | ");
        os += "AUDIO_EXT_ROUTING_HINT";
        first = false;
        flipped |= VehicleProperty::AUDIO_EXT_ROUTING_HINT;
    }
    if ((o & VehicleProperty::AUDIO_STREAM_STATE) == static_cast<int32_t>(VehicleProperty::AUDIO_STREAM_STATE)) {
        os += (first ? "" : " | ");
        os += "AUDIO_STREAM_STATE";
        first = false;
        flipped |= VehicleProperty::AUDIO_STREAM_STATE;
    }
    if ((o & VehicleProperty::AUDIO_PARAMETERS) == static_cast<int32_t>(VehicleProperty::AUDIO_PARAMETERS)) {
        os += (first ? "" : " | ");
        os += "AUDIO_PARAMETERS";
        first = false;
        flipped |= VehicleProperty::AUDIO_PARAMETERS;
    }
    if ((o & VehicleProperty::AP_POWER_STATE) == static_cast<int32_t>(VehicleProperty::AP_POWER_STATE)) {
        os += (first ? "" : " | ");
        os += "AP_POWER_STATE";
        first = false;
        flipped |= VehicleProperty::AP_POWER_STATE;
    }
    if ((o & VehicleProperty::DISPLAY_BRIGHTNESS) == static_cast<int32_t>(VehicleProperty::DISPLAY_BRIGHTNESS)) {
        os += (first ? "" : " | ");
        os += "DISPLAY_BRIGHTNESS";
        first = false;
        flipped |= VehicleProperty::DISPLAY_BRIGHTNESS;
    }
    if ((o & VehicleProperty::AP_POWER_BOOTUP_REASON) == static_cast<int32_t>(VehicleProperty::AP_POWER_BOOTUP_REASON)) {
        os += (first ? "" : " | ");
        os += "AP_POWER_BOOTUP_REASON";
        first = false;
        flipped |= VehicleProperty::AP_POWER_BOOTUP_REASON;
    }
    if ((o & VehicleProperty::HW_KEY_INPUT) == static_cast<int32_t>(VehicleProperty::HW_KEY_INPUT)) {
        os += (first ? "" : " | ");
        os += "HW_KEY_INPUT";
        first = false;
        flipped |= VehicleProperty::HW_KEY_INPUT;
    }
    if ((o & VehicleProperty::INSTRUMENT_CLUSTER_INFO) == static_cast<int32_t>(VehicleProperty::INSTRUMENT_CLUSTER_INFO)) {
        os += (first ? "" : " | ");
        os += "INSTRUMENT_CLUSTER_INFO";
        first = false;
        flipped |= VehicleProperty::INSTRUMENT_CLUSTER_INFO;
    }
    if ((o & VehicleProperty::UNIX_TIME) == static_cast<int32_t>(VehicleProperty::UNIX_TIME)) {
        os += (first ? "" : " | ");
        os += "UNIX_TIME";
        first = false;
        flipped |= VehicleProperty::UNIX_TIME;
    }
    if ((o & VehicleProperty::CURRENT_TIME_IN_SECONDS) == static_cast<int32_t>(VehicleProperty::CURRENT_TIME_IN_SECONDS)) {
        os += (first ? "" : " | ");
        os += "CURRENT_TIME_IN_SECONDS";
        first = false;
        flipped |= VehicleProperty::CURRENT_TIME_IN_SECONDS;
    }
    if ((o & VehicleProperty::DOOR_POS) == static_cast<int32_t>(VehicleProperty::DOOR_POS)) {
        os += (first ? "" : " | ");
        os += "DOOR_POS";
        first = false;
        flipped |= VehicleProperty::DOOR_POS;
    }
    if ((o & VehicleProperty::DOOR_MOVE) == static_cast<int32_t>(VehicleProperty::DOOR_MOVE)) {
        os += (first ? "" : " | ");
        os += "DOOR_MOVE";
        first = false;
        flipped |= VehicleProperty::DOOR_MOVE;
    }
    if ((o & VehicleProperty::DOOR_LOCK) == static_cast<int32_t>(VehicleProperty::DOOR_LOCK)) {
        os += (first ? "" : " | ");
        os += "DOOR_LOCK";
        first = false;
        flipped |= VehicleProperty::DOOR_LOCK;
    }
    if ((o & VehicleProperty::MIRROR_Z_POS) == static_cast<int32_t>(VehicleProperty::MIRROR_Z_POS)) {
        os += (first ? "" : " | ");
        os += "MIRROR_Z_POS";
        first = false;
        flipped |= VehicleProperty::MIRROR_Z_POS;
    }
    if ((o & VehicleProperty::MIRROR_Z_MOVE) == static_cast<int32_t>(VehicleProperty::MIRROR_Z_MOVE)) {
        os += (first ? "" : " | ");
        os += "MIRROR_Z_MOVE";
        first = false;
        flipped |= VehicleProperty::MIRROR_Z_MOVE;
    }
    if ((o & VehicleProperty::MIRROR_Y_POS) == static_cast<int32_t>(VehicleProperty::MIRROR_Y_POS)) {
        os += (first ? "" : " | ");
        os += "MIRROR_Y_POS";
        first = false;
        flipped |= VehicleProperty::MIRROR_Y_POS;
    }
    if ((o & VehicleProperty::MIRROR_Y_MOVE) == static_cast<int32_t>(VehicleProperty::MIRROR_Y_MOVE)) {
        os += (first ? "" : " | ");
        os += "MIRROR_Y_MOVE";
        first = false;
        flipped |= VehicleProperty::MIRROR_Y_MOVE;
    }
    if ((o & VehicleProperty::MIRROR_LOCK) == static_cast<int32_t>(VehicleProperty::MIRROR_LOCK)) {
        os += (first ? "" : " | ");
        os += "MIRROR_LOCK";
        first = false;
        flipped |= VehicleProperty::MIRROR_LOCK;
    }
    if ((o & VehicleProperty::MIRROR_FOLD) == static_cast<int32_t>(VehicleProperty::MIRROR_FOLD)) {
        os += (first ? "" : " | ");
        os += "MIRROR_FOLD";
        first = false;
        flipped |= VehicleProperty::MIRROR_FOLD;
    }
    if ((o & VehicleProperty::SEAT_MEMORY_SELECT) == static_cast<int32_t>(VehicleProperty::SEAT_MEMORY_SELECT)) {
        os += (first ? "" : " | ");
        os += "SEAT_MEMORY_SELECT";
        first = false;
        flipped |= VehicleProperty::SEAT_MEMORY_SELECT;
    }
    if ((o & VehicleProperty::SEAT_MEMORY_SET) == static_cast<int32_t>(VehicleProperty::SEAT_MEMORY_SET)) {
        os += (first ? "" : " | ");
        os += "SEAT_MEMORY_SET";
        first = false;
        flipped |= VehicleProperty::SEAT_MEMORY_SET;
    }
    if ((o & VehicleProperty::SEAT_BELT_BUCKLED) == static_cast<int32_t>(VehicleProperty::SEAT_BELT_BUCKLED)) {
        os += (first ? "" : " | ");
        os += "SEAT_BELT_BUCKLED";
        first = false;
        flipped |= VehicleProperty::SEAT_BELT_BUCKLED;
    }
    if ((o & VehicleProperty::SEAT_BELT_HEIGHT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_BELT_HEIGHT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_BELT_HEIGHT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_BELT_HEIGHT_POS;
    }
    if ((o & VehicleProperty::SEAT_BELT_HEIGHT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_BELT_HEIGHT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_BELT_HEIGHT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_BELT_HEIGHT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_FORE_AFT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_FORE_AFT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_FORE_AFT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_FORE_AFT_POS;
    }
    if ((o & VehicleProperty::SEAT_FORE_AFT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_FORE_AFT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_FORE_AFT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_FORE_AFT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_BACKREST_ANGLE_1_POS) == static_cast<int32_t>(VehicleProperty::SEAT_BACKREST_ANGLE_1_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_BACKREST_ANGLE_1_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_BACKREST_ANGLE_1_POS;
    }
    if ((o & VehicleProperty::SEAT_BACKREST_ANGLE_1_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_BACKREST_ANGLE_1_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_BACKREST_ANGLE_1_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_BACKREST_ANGLE_1_MOVE;
    }
    if ((o & VehicleProperty::SEAT_BACKREST_ANGLE_2_POS) == static_cast<int32_t>(VehicleProperty::SEAT_BACKREST_ANGLE_2_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_BACKREST_ANGLE_2_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_BACKREST_ANGLE_2_POS;
    }
    if ((o & VehicleProperty::SEAT_BACKREST_ANGLE_2_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_BACKREST_ANGLE_2_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_BACKREST_ANGLE_2_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_BACKREST_ANGLE_2_MOVE;
    }
    if ((o & VehicleProperty::SEAT_HEIGHT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_HEIGHT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEIGHT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_HEIGHT_POS;
    }
    if ((o & VehicleProperty::SEAT_HEIGHT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_HEIGHT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEIGHT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_HEIGHT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_DEPTH_POS) == static_cast<int32_t>(VehicleProperty::SEAT_DEPTH_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_DEPTH_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_DEPTH_POS;
    }
    if ((o & VehicleProperty::SEAT_DEPTH_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_DEPTH_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_DEPTH_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_DEPTH_MOVE;
    }
    if ((o & VehicleProperty::SEAT_TILT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_TILT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_TILT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_TILT_POS;
    }
    if ((o & VehicleProperty::SEAT_TILT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_TILT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_TILT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_TILT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_LUMBAR_FORE_AFT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_LUMBAR_FORE_AFT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_LUMBAR_FORE_AFT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_LUMBAR_FORE_AFT_POS;
    }
    if ((o & VehicleProperty::SEAT_LUMBAR_FORE_AFT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_LUMBAR_FORE_AFT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_LUMBAR_FORE_AFT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_LUMBAR_FORE_AFT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_LUMBAR_SIDE_SUPPORT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_POS;
    }
    if ((o & VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_LUMBAR_SIDE_SUPPORT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_HEIGHT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_HEIGHT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_HEIGHT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_HEIGHT_POS;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_HEIGHT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_HEIGHT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_HEIGHT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_HEIGHT_MOVE;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_ANGLE_POS) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_ANGLE_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_ANGLE_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_ANGLE_POS;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_ANGLE_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_ANGLE_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_ANGLE_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_ANGLE_MOVE;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_FORE_AFT_POS) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_FORE_AFT_POS)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_FORE_AFT_POS";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_FORE_AFT_POS;
    }
    if ((o & VehicleProperty::SEAT_HEADREST_FORE_AFT_MOVE) == static_cast<int32_t>(VehicleProperty::SEAT_HEADREST_FORE_AFT_MOVE)) {
        os += (first ? "" : " | ");
        os += "SEAT_HEADREST_FORE_AFT_MOVE";
        first = false;
        flipped |= VehicleProperty::SEAT_HEADREST_FORE_AFT_MOVE;
    }
    if ((o & VehicleProperty::WINDOW_POS) == static_cast<int32_t>(VehicleProperty::WINDOW_POS)) {
        os += (first ? "" : " | ");
        os += "WINDOW_POS";
        first = false;
        flipped |= VehicleProperty::WINDOW_POS;
    }
    if ((o & VehicleProperty::WINDOW_MOVE) == static_cast<int32_t>(VehicleProperty::WINDOW_MOVE)) {
        os += (first ? "" : " | ");
        os += "WINDOW_MOVE";
        first = false;
        flipped |= VehicleProperty::WINDOW_MOVE;
    }
    if ((o & VehicleProperty::WINDOW_VENT_POS) == static_cast<int32_t>(VehicleProperty::WINDOW_VENT_POS)) {
        os += (first ? "" : " | ");
        os += "WINDOW_VENT_POS";
        first = false;
        flipped |= VehicleProperty::WINDOW_VENT_POS;
    }
    if ((o & VehicleProperty::WINDOW_VENT_MOVE) == static_cast<int32_t>(VehicleProperty::WINDOW_VENT_MOVE)) {
        os += (first ? "" : " | ");
        os += "WINDOW_VENT_MOVE";
        first = false;
        flipped |= VehicleProperty::WINDOW_VENT_MOVE;
    }
    if ((o & VehicleProperty::WINDOW_LOCK) == static_cast<int32_t>(VehicleProperty::WINDOW_LOCK)) {
        os += (first ? "" : " | ");
        os += "WINDOW_LOCK";
        first = false;
        flipped |= VehicleProperty::WINDOW_LOCK;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleProperty o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleProperty::INVALID) {
        return "INVALID";
    }
    if (o == VehicleProperty::INFO_VIN) {
        return "INFO_VIN";
    }
    if (o == VehicleProperty::INFO_MAKE) {
        return "INFO_MAKE";
    }
    if (o == VehicleProperty::INFO_MODEL) {
        return "INFO_MODEL";
    }
    if (o == VehicleProperty::INFO_MODEL_YEAR) {
        return "INFO_MODEL_YEAR";
    }
    if (o == VehicleProperty::INFO_FUEL_CAPACITY) {
        return "INFO_FUEL_CAPACITY";
    }
    if (o == VehicleProperty::PERF_ODOMETER) {
        return "PERF_ODOMETER";
    }
    if (o == VehicleProperty::PERF_VEHICLE_SPEED) {
        return "PERF_VEHICLE_SPEED";
    }
    if (o == VehicleProperty::ENGINE_COOLANT_TEMP) {
        return "ENGINE_COOLANT_TEMP";
    }
    if (o == VehicleProperty::ENGINE_OIL_TEMP) {
        return "ENGINE_OIL_TEMP";
    }
    if (o == VehicleProperty::ENGINE_RPM) {
        return "ENGINE_RPM";
    }
    if (o == VehicleProperty::GEAR_SELECTION) {
        return "GEAR_SELECTION";
    }
    if (o == VehicleProperty::CURRENT_GEAR) {
        return "CURRENT_GEAR";
    }
    if (o == VehicleProperty::PARKING_BRAKE_ON) {
        return "PARKING_BRAKE_ON";
    }
    if (o == VehicleProperty::DRIVING_STATUS) {
        return "DRIVING_STATUS";
    }
    if (o == VehicleProperty::FUEL_LEVEL_LOW) {
        return "FUEL_LEVEL_LOW";
    }
    if (o == VehicleProperty::NIGHT_MODE) {
        return "NIGHT_MODE";
    }
    if (o == VehicleProperty::TURN_SIGNAL_STATE) {
        return "TURN_SIGNAL_STATE";
    }
    if (o == VehicleProperty::IGNITION_STATE) {
        return "IGNITION_STATE";
    }
    if (o == VehicleProperty::HVAC_FAN_SPEED) {
        return "HVAC_FAN_SPEED";
    }
    if (o == VehicleProperty::HVAC_FAN_DIRECTION) {
        return "HVAC_FAN_DIRECTION";
    }
    if (o == VehicleProperty::HVAC_TEMPERATURE_CURRENT) {
        return "HVAC_TEMPERATURE_CURRENT";
    }
    if (o == VehicleProperty::HVAC_TEMPERATURE_SET) {
        return "HVAC_TEMPERATURE_SET";
    }
    if (o == VehicleProperty::HVAC_DEFROSTER) {
        return "HVAC_DEFROSTER";
    }
    if (o == VehicleProperty::HVAC_AC_ON) {
        return "HVAC_AC_ON";
    }
    if (o == VehicleProperty::HVAC_MAX_AC_ON) {
        return "HVAC_MAX_AC_ON";
    }
    if (o == VehicleProperty::HVAC_MAX_DEFROST_ON) {
        return "HVAC_MAX_DEFROST_ON";
    }
    if (o == VehicleProperty::HVAC_RECIRC_ON) {
        return "HVAC_RECIRC_ON";
    }
    if (o == VehicleProperty::HVAC_DUAL_ON) {
        return "HVAC_DUAL_ON";
    }
    if (o == VehicleProperty::HVAC_AUTO_ON) {
        return "HVAC_AUTO_ON";
    }
    if (o == VehicleProperty::HVAC_SEAT_TEMPERATURE) {
        return "HVAC_SEAT_TEMPERATURE";
    }
    if (o == VehicleProperty::HVAC_SIDE_MIRROR_HEAT) {
        return "HVAC_SIDE_MIRROR_HEAT";
    }
    if (o == VehicleProperty::HVAC_STEERING_WHEEL_TEMP) {
        return "HVAC_STEERING_WHEEL_TEMP";
    }
    if (o == VehicleProperty::HVAC_TEMPERATURE_UNITS) {
        return "HVAC_TEMPERATURE_UNITS";
    }
    if (o == VehicleProperty::HVAC_ACTUAL_FAN_SPEED_RPM) {
        return "HVAC_ACTUAL_FAN_SPEED_RPM";
    }
    if (o == VehicleProperty::HVAC_FAN_DIRECTION_AVAILABLE) {
        return "HVAC_FAN_DIRECTION_AVAILABLE";
    }
    if (o == VehicleProperty::HVAC_POWER_ON) {
        return "HVAC_POWER_ON";
    }
    if (o == VehicleProperty::ENV_OUTSIDE_TEMPERATURE) {
        return "ENV_OUTSIDE_TEMPERATURE";
    }
    if (o == VehicleProperty::ENV_CABIN_TEMPERATURE) {
        return "ENV_CABIN_TEMPERATURE";
    }
    if (o == VehicleProperty::RADIO_PRESET) {
        return "RADIO_PRESET";
    }
    if (o == VehicleProperty::AUDIO_FOCUS) {
        return "AUDIO_FOCUS";
    }
    if (o == VehicleProperty::AUDIO_FOCUS_EXT_SYNC) {
        return "AUDIO_FOCUS_EXT_SYNC";
    }
    if (o == VehicleProperty::AUDIO_VOLUME) {
        return "AUDIO_VOLUME";
    }
    if (o == VehicleProperty::AUDIO_VOLUME_EXT_SYNC) {
        return "AUDIO_VOLUME_EXT_SYNC";
    }
    if (o == VehicleProperty::AUDIO_VOLUME_LIMIT) {
        return "AUDIO_VOLUME_LIMIT";
    }
    if (o == VehicleProperty::AUDIO_ROUTING_POLICY) {
        return "AUDIO_ROUTING_POLICY";
    }
    if (o == VehicleProperty::AUDIO_HW_VARIANT) {
        return "AUDIO_HW_VARIANT";
    }
    if (o == VehicleProperty::AUDIO_EXT_ROUTING_HINT) {
        return "AUDIO_EXT_ROUTING_HINT";
    }
    if (o == VehicleProperty::AUDIO_STREAM_STATE) {
        return "AUDIO_STREAM_STATE";
    }
    if (o == VehicleProperty::AUDIO_PARAMETERS) {
        return "AUDIO_PARAMETERS";
    }
    if (o == VehicleProperty::AP_POWER_STATE) {
        return "AP_POWER_STATE";
    }
    if (o == VehicleProperty::DISPLAY_BRIGHTNESS) {
        return "DISPLAY_BRIGHTNESS";
    }
    if (o == VehicleProperty::AP_POWER_BOOTUP_REASON) {
        return "AP_POWER_BOOTUP_REASON";
    }
    if (o == VehicleProperty::HW_KEY_INPUT) {
        return "HW_KEY_INPUT";
    }
    if (o == VehicleProperty::INSTRUMENT_CLUSTER_INFO) {
        return "INSTRUMENT_CLUSTER_INFO";
    }
    if (o == VehicleProperty::UNIX_TIME) {
        return "UNIX_TIME";
    }
    if (o == VehicleProperty::CURRENT_TIME_IN_SECONDS) {
        return "CURRENT_TIME_IN_SECONDS";
    }
    if (o == VehicleProperty::DOOR_POS) {
        return "DOOR_POS";
    }
    if (o == VehicleProperty::DOOR_MOVE) {
        return "DOOR_MOVE";
    }
    if (o == VehicleProperty::DOOR_LOCK) {
        return "DOOR_LOCK";
    }
    if (o == VehicleProperty::MIRROR_Z_POS) {
        return "MIRROR_Z_POS";
    }
    if (o == VehicleProperty::MIRROR_Z_MOVE) {
        return "MIRROR_Z_MOVE";
    }
    if (o == VehicleProperty::MIRROR_Y_POS) {
        return "MIRROR_Y_POS";
    }
    if (o == VehicleProperty::MIRROR_Y_MOVE) {
        return "MIRROR_Y_MOVE";
    }
    if (o == VehicleProperty::MIRROR_LOCK) {
        return "MIRROR_LOCK";
    }
    if (o == VehicleProperty::MIRROR_FOLD) {
        return "MIRROR_FOLD";
    }
    if (o == VehicleProperty::SEAT_MEMORY_SELECT) {
        return "SEAT_MEMORY_SELECT";
    }
    if (o == VehicleProperty::SEAT_MEMORY_SET) {
        return "SEAT_MEMORY_SET";
    }
    if (o == VehicleProperty::SEAT_BELT_BUCKLED) {
        return "SEAT_BELT_BUCKLED";
    }
    if (o == VehicleProperty::SEAT_BELT_HEIGHT_POS) {
        return "SEAT_BELT_HEIGHT_POS";
    }
    if (o == VehicleProperty::SEAT_BELT_HEIGHT_MOVE) {
        return "SEAT_BELT_HEIGHT_MOVE";
    }
    if (o == VehicleProperty::SEAT_FORE_AFT_POS) {
        return "SEAT_FORE_AFT_POS";
    }
    if (o == VehicleProperty::SEAT_FORE_AFT_MOVE) {
        return "SEAT_FORE_AFT_MOVE";
    }
    if (o == VehicleProperty::SEAT_BACKREST_ANGLE_1_POS) {
        return "SEAT_BACKREST_ANGLE_1_POS";
    }
    if (o == VehicleProperty::SEAT_BACKREST_ANGLE_1_MOVE) {
        return "SEAT_BACKREST_ANGLE_1_MOVE";
    }
    if (o == VehicleProperty::SEAT_BACKREST_ANGLE_2_POS) {
        return "SEAT_BACKREST_ANGLE_2_POS";
    }
    if (o == VehicleProperty::SEAT_BACKREST_ANGLE_2_MOVE) {
        return "SEAT_BACKREST_ANGLE_2_MOVE";
    }
    if (o == VehicleProperty::SEAT_HEIGHT_POS) {
        return "SEAT_HEIGHT_POS";
    }
    if (o == VehicleProperty::SEAT_HEIGHT_MOVE) {
        return "SEAT_HEIGHT_MOVE";
    }
    if (o == VehicleProperty::SEAT_DEPTH_POS) {
        return "SEAT_DEPTH_POS";
    }
    if (o == VehicleProperty::SEAT_DEPTH_MOVE) {
        return "SEAT_DEPTH_MOVE";
    }
    if (o == VehicleProperty::SEAT_TILT_POS) {
        return "SEAT_TILT_POS";
    }
    if (o == VehicleProperty::SEAT_TILT_MOVE) {
        return "SEAT_TILT_MOVE";
    }
    if (o == VehicleProperty::SEAT_LUMBAR_FORE_AFT_POS) {
        return "SEAT_LUMBAR_FORE_AFT_POS";
    }
    if (o == VehicleProperty::SEAT_LUMBAR_FORE_AFT_MOVE) {
        return "SEAT_LUMBAR_FORE_AFT_MOVE";
    }
    if (o == VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_POS) {
        return "SEAT_LUMBAR_SIDE_SUPPORT_POS";
    }
    if (o == VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_MOVE) {
        return "SEAT_LUMBAR_SIDE_SUPPORT_MOVE";
    }
    if (o == VehicleProperty::SEAT_HEADREST_HEIGHT_POS) {
        return "SEAT_HEADREST_HEIGHT_POS";
    }
    if (o == VehicleProperty::SEAT_HEADREST_HEIGHT_MOVE) {
        return "SEAT_HEADREST_HEIGHT_MOVE";
    }
    if (o == VehicleProperty::SEAT_HEADREST_ANGLE_POS) {
        return "SEAT_HEADREST_ANGLE_POS";
    }
    if (o == VehicleProperty::SEAT_HEADREST_ANGLE_MOVE) {
        return "SEAT_HEADREST_ANGLE_MOVE";
    }
    if (o == VehicleProperty::SEAT_HEADREST_FORE_AFT_POS) {
        return "SEAT_HEADREST_FORE_AFT_POS";
    }
    if (o == VehicleProperty::SEAT_HEADREST_FORE_AFT_MOVE) {
        return "SEAT_HEADREST_FORE_AFT_MOVE";
    }
    if (o == VehicleProperty::WINDOW_POS) {
        return "WINDOW_POS";
    }
    if (o == VehicleProperty::WINDOW_MOVE) {
        return "WINDOW_MOVE";
    }
    if (o == VehicleProperty::WINDOW_VENT_POS) {
        return "WINDOW_VENT_POS";
    }
    if (o == VehicleProperty::WINDOW_VENT_MOVE) {
        return "WINDOW_VENT_MOVE";
    }
    if (o == VehicleProperty::WINDOW_LOCK) {
        return "WINDOW_LOCK";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleHvacFanDirection>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleHvacFanDirection::FACE) == static_cast<int32_t>(VehicleHvacFanDirection::FACE)) {
        os += (first ? "" : " | ");
        os += "FACE";
        first = false;
        flipped |= VehicleHvacFanDirection::FACE;
    }
    if ((o & VehicleHvacFanDirection::FLOOR) == static_cast<int32_t>(VehicleHvacFanDirection::FLOOR)) {
        os += (first ? "" : " | ");
        os += "FLOOR";
        first = false;
        flipped |= VehicleHvacFanDirection::FLOOR;
    }
    if ((o & VehicleHvacFanDirection::FACE_AND_FLOOR) == static_cast<int32_t>(VehicleHvacFanDirection::FACE_AND_FLOOR)) {
        os += (first ? "" : " | ");
        os += "FACE_AND_FLOOR";
        first = false;
        flipped |= VehicleHvacFanDirection::FACE_AND_FLOOR;
    }
    if ((o & VehicleHvacFanDirection::DEFROST) == static_cast<int32_t>(VehicleHvacFanDirection::DEFROST)) {
        os += (first ? "" : " | ");
        os += "DEFROST";
        first = false;
        flipped |= VehicleHvacFanDirection::DEFROST;
    }
    if ((o & VehicleHvacFanDirection::DEFROST_AND_FLOOR) == static_cast<int32_t>(VehicleHvacFanDirection::DEFROST_AND_FLOOR)) {
        os += (first ? "" : " | ");
        os += "DEFROST_AND_FLOOR";
        first = false;
        flipped |= VehicleHvacFanDirection::DEFROST_AND_FLOOR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleHvacFanDirection o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleHvacFanDirection::FACE) {
        return "FACE";
    }
    if (o == VehicleHvacFanDirection::FLOOR) {
        return "FLOOR";
    }
    if (o == VehicleHvacFanDirection::FACE_AND_FLOOR) {
        return "FACE_AND_FLOOR";
    }
    if (o == VehicleHvacFanDirection::DEFROST) {
        return "DEFROST";
    }
    if (o == VehicleHvacFanDirection::DEFROST_AND_FLOOR) {
        return "DEFROST_AND_FLOOR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleRadioConstants>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleRadioConstants::VEHICLE_RADIO_PRESET_MIN_VALUE) == static_cast<int32_t>(VehicleRadioConstants::VEHICLE_RADIO_PRESET_MIN_VALUE)) {
        os += (first ? "" : " | ");
        os += "VEHICLE_RADIO_PRESET_MIN_VALUE";
        first = false;
        flipped |= VehicleRadioConstants::VEHICLE_RADIO_PRESET_MIN_VALUE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleRadioConstants o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleRadioConstants::VEHICLE_RADIO_PRESET_MIN_VALUE) {
        return "VEHICLE_RADIO_PRESET_MIN_VALUE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioFocusRequest>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioFocusRequest::REQUEST_GAIN) == static_cast<int32_t>(VehicleAudioFocusRequest::REQUEST_GAIN)) {
        os += (first ? "" : " | ");
        os += "REQUEST_GAIN";
        first = false;
        flipped |= VehicleAudioFocusRequest::REQUEST_GAIN;
    }
    if ((o & VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT) == static_cast<int32_t>(VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT)) {
        os += (first ? "" : " | ");
        os += "REQUEST_GAIN_TRANSIENT";
        first = false;
        flipped |= VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT;
    }
    if ((o & VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_MAY_DUCK) == static_cast<int32_t>(VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_MAY_DUCK)) {
        os += (first ? "" : " | ");
        os += "REQUEST_GAIN_TRANSIENT_MAY_DUCK";
        first = false;
        flipped |= VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_MAY_DUCK;
    }
    if ((o & VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_NO_DUCK) == static_cast<int32_t>(VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_NO_DUCK)) {
        os += (first ? "" : " | ");
        os += "REQUEST_GAIN_TRANSIENT_NO_DUCK";
        first = false;
        flipped |= VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_NO_DUCK;
    }
    if ((o & VehicleAudioFocusRequest::REQUEST_RELEASE) == static_cast<int32_t>(VehicleAudioFocusRequest::REQUEST_RELEASE)) {
        os += (first ? "" : " | ");
        os += "REQUEST_RELEASE";
        first = false;
        flipped |= VehicleAudioFocusRequest::REQUEST_RELEASE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioFocusRequest o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioFocusRequest::REQUEST_GAIN) {
        return "REQUEST_GAIN";
    }
    if (o == VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT) {
        return "REQUEST_GAIN_TRANSIENT";
    }
    if (o == VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_MAY_DUCK) {
        return "REQUEST_GAIN_TRANSIENT_MAY_DUCK";
    }
    if (o == VehicleAudioFocusRequest::REQUEST_GAIN_TRANSIENT_NO_DUCK) {
        return "REQUEST_GAIN_TRANSIENT_NO_DUCK";
    }
    if (o == VehicleAudioFocusRequest::REQUEST_RELEASE) {
        return "REQUEST_RELEASE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioFocusState>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioFocusState::STATE_GAIN) == static_cast<int32_t>(VehicleAudioFocusState::STATE_GAIN)) {
        os += (first ? "" : " | ");
        os += "STATE_GAIN";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_GAIN;
    }
    if ((o & VehicleAudioFocusState::STATE_GAIN_TRANSIENT) == static_cast<int32_t>(VehicleAudioFocusState::STATE_GAIN_TRANSIENT)) {
        os += (first ? "" : " | ");
        os += "STATE_GAIN_TRANSIENT";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_GAIN_TRANSIENT;
    }
    if ((o & VehicleAudioFocusState::STATE_LOSS_TRANSIENT_CAN_DUCK) == static_cast<int32_t>(VehicleAudioFocusState::STATE_LOSS_TRANSIENT_CAN_DUCK)) {
        os += (first ? "" : " | ");
        os += "STATE_LOSS_TRANSIENT_CAN_DUCK";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_LOSS_TRANSIENT_CAN_DUCK;
    }
    if ((o & VehicleAudioFocusState::STATE_LOSS_TRANSIENT) == static_cast<int32_t>(VehicleAudioFocusState::STATE_LOSS_TRANSIENT)) {
        os += (first ? "" : " | ");
        os += "STATE_LOSS_TRANSIENT";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_LOSS_TRANSIENT;
    }
    if ((o & VehicleAudioFocusState::STATE_LOSS) == static_cast<int32_t>(VehicleAudioFocusState::STATE_LOSS)) {
        os += (first ? "" : " | ");
        os += "STATE_LOSS";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_LOSS;
    }
    if ((o & VehicleAudioFocusState::STATE_LOSS_TRANSIENT_EXLCUSIVE) == static_cast<int32_t>(VehicleAudioFocusState::STATE_LOSS_TRANSIENT_EXLCUSIVE)) {
        os += (first ? "" : " | ");
        os += "STATE_LOSS_TRANSIENT_EXLCUSIVE";
        first = false;
        flipped |= VehicleAudioFocusState::STATE_LOSS_TRANSIENT_EXLCUSIVE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioFocusState o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioFocusState::STATE_GAIN) {
        return "STATE_GAIN";
    }
    if (o == VehicleAudioFocusState::STATE_GAIN_TRANSIENT) {
        return "STATE_GAIN_TRANSIENT";
    }
    if (o == VehicleAudioFocusState::STATE_LOSS_TRANSIENT_CAN_DUCK) {
        return "STATE_LOSS_TRANSIENT_CAN_DUCK";
    }
    if (o == VehicleAudioFocusState::STATE_LOSS_TRANSIENT) {
        return "STATE_LOSS_TRANSIENT";
    }
    if (o == VehicleAudioFocusState::STATE_LOSS) {
        return "STATE_LOSS";
    }
    if (o == VehicleAudioFocusState::STATE_LOSS_TRANSIENT_EXLCUSIVE) {
        return "STATE_LOSS_TRANSIENT_EXLCUSIVE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioStreamFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioStreamFlag::STREAM0_FLAG) == static_cast<int32_t>(VehicleAudioStreamFlag::STREAM0_FLAG)) {
        os += (first ? "" : " | ");
        os += "STREAM0_FLAG";
        first = false;
        flipped |= VehicleAudioStreamFlag::STREAM0_FLAG;
    }
    if ((o & VehicleAudioStreamFlag::STREAM1_FLAG) == static_cast<int32_t>(VehicleAudioStreamFlag::STREAM1_FLAG)) {
        os += (first ? "" : " | ");
        os += "STREAM1_FLAG";
        first = false;
        flipped |= VehicleAudioStreamFlag::STREAM1_FLAG;
    }
    if ((o & VehicleAudioStreamFlag::STREAM2_FLAG) == static_cast<int32_t>(VehicleAudioStreamFlag::STREAM2_FLAG)) {
        os += (first ? "" : " | ");
        os += "STREAM2_FLAG";
        first = false;
        flipped |= VehicleAudioStreamFlag::STREAM2_FLAG;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioStreamFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioStreamFlag::STREAM0_FLAG) {
        return "STREAM0_FLAG";
    }
    if (o == VehicleAudioStreamFlag::STREAM1_FLAG) {
        return "STREAM1_FLAG";
    }
    if (o == VehicleAudioStreamFlag::STREAM2_FLAG) {
        return "STREAM2_FLAG";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioStream>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioStream::STREAM0) == static_cast<int32_t>(VehicleAudioStream::STREAM0)) {
        os += (first ? "" : " | ");
        os += "STREAM0";
        first = false;
        flipped |= VehicleAudioStream::STREAM0;
    }
    if ((o & VehicleAudioStream::STREAM1) == static_cast<int32_t>(VehicleAudioStream::STREAM1)) {
        os += (first ? "" : " | ");
        os += "STREAM1";
        first = false;
        flipped |= VehicleAudioStream::STREAM1;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioStream o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioStream::STREAM0) {
        return "STREAM0";
    }
    if (o == VehicleAudioStream::STREAM1) {
        return "STREAM1";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioExtFocusFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioExtFocusFlag::NONE_FLAG) == static_cast<int32_t>(VehicleAudioExtFocusFlag::NONE_FLAG)) {
        os += (first ? "" : " | ");
        os += "NONE_FLAG";
        first = false;
        flipped |= VehicleAudioExtFocusFlag::NONE_FLAG;
    }
    if ((o & VehicleAudioExtFocusFlag::PERMANENT_FLAG) == static_cast<int32_t>(VehicleAudioExtFocusFlag::PERMANENT_FLAG)) {
        os += (first ? "" : " | ");
        os += "PERMANENT_FLAG";
        first = false;
        flipped |= VehicleAudioExtFocusFlag::PERMANENT_FLAG;
    }
    if ((o & VehicleAudioExtFocusFlag::TRANSIENT_FLAG) == static_cast<int32_t>(VehicleAudioExtFocusFlag::TRANSIENT_FLAG)) {
        os += (first ? "" : " | ");
        os += "TRANSIENT_FLAG";
        first = false;
        flipped |= VehicleAudioExtFocusFlag::TRANSIENT_FLAG;
    }
    if ((o & VehicleAudioExtFocusFlag::PLAY_ONLY_FLAG) == static_cast<int32_t>(VehicleAudioExtFocusFlag::PLAY_ONLY_FLAG)) {
        os += (first ? "" : " | ");
        os += "PLAY_ONLY_FLAG";
        first = false;
        flipped |= VehicleAudioExtFocusFlag::PLAY_ONLY_FLAG;
    }
    if ((o & VehicleAudioExtFocusFlag::MUTE_MEDIA_FLAG) == static_cast<int32_t>(VehicleAudioExtFocusFlag::MUTE_MEDIA_FLAG)) {
        os += (first ? "" : " | ");
        os += "MUTE_MEDIA_FLAG";
        first = false;
        flipped |= VehicleAudioExtFocusFlag::MUTE_MEDIA_FLAG;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioExtFocusFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioExtFocusFlag::NONE_FLAG) {
        return "NONE_FLAG";
    }
    if (o == VehicleAudioExtFocusFlag::PERMANENT_FLAG) {
        return "PERMANENT_FLAG";
    }
    if (o == VehicleAudioExtFocusFlag::TRANSIENT_FLAG) {
        return "TRANSIENT_FLAG";
    }
    if (o == VehicleAudioExtFocusFlag::PLAY_ONLY_FLAG) {
        return "PLAY_ONLY_FLAG";
    }
    if (o == VehicleAudioExtFocusFlag::MUTE_MEDIA_FLAG) {
        return "MUTE_MEDIA_FLAG";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioFocusIndex>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioFocusIndex::FOCUS) == static_cast<int32_t>(VehicleAudioFocusIndex::FOCUS)) {
        os += (first ? "" : " | ");
        os += "FOCUS";
        first = false;
        flipped |= VehicleAudioFocusIndex::FOCUS;
    }
    if ((o & VehicleAudioFocusIndex::STREAMS) == static_cast<int32_t>(VehicleAudioFocusIndex::STREAMS)) {
        os += (first ? "" : " | ");
        os += "STREAMS";
        first = false;
        flipped |= VehicleAudioFocusIndex::STREAMS;
    }
    if ((o & VehicleAudioFocusIndex::EXTERNAL_FOCUS_STATE) == static_cast<int32_t>(VehicleAudioFocusIndex::EXTERNAL_FOCUS_STATE)) {
        os += (first ? "" : " | ");
        os += "EXTERNAL_FOCUS_STATE";
        first = false;
        flipped |= VehicleAudioFocusIndex::EXTERNAL_FOCUS_STATE;
    }
    if ((o & VehicleAudioFocusIndex::AUDIO_CONTEXTS) == static_cast<int32_t>(VehicleAudioFocusIndex::AUDIO_CONTEXTS)) {
        os += (first ? "" : " | ");
        os += "AUDIO_CONTEXTS";
        first = false;
        flipped |= VehicleAudioFocusIndex::AUDIO_CONTEXTS;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioFocusIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioFocusIndex::FOCUS) {
        return "FOCUS";
    }
    if (o == VehicleAudioFocusIndex::STREAMS) {
        return "STREAMS";
    }
    if (o == VehicleAudioFocusIndex::EXTERNAL_FOCUS_STATE) {
        return "EXTERNAL_FOCUS_STATE";
    }
    if (o == VehicleAudioFocusIndex::AUDIO_CONTEXTS) {
        return "AUDIO_CONTEXTS";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioContextFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioContextFlag::MUSIC_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::MUSIC_FLAG)) {
        os += (first ? "" : " | ");
        os += "MUSIC_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::MUSIC_FLAG;
    }
    if ((o & VehicleAudioContextFlag::NAVIGATION_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::NAVIGATION_FLAG)) {
        os += (first ? "" : " | ");
        os += "NAVIGATION_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::NAVIGATION_FLAG;
    }
    if ((o & VehicleAudioContextFlag::VOICE_COMMAND_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::VOICE_COMMAND_FLAG)) {
        os += (first ? "" : " | ");
        os += "VOICE_COMMAND_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::VOICE_COMMAND_FLAG;
    }
    if ((o & VehicleAudioContextFlag::CALL_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::CALL_FLAG)) {
        os += (first ? "" : " | ");
        os += "CALL_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::CALL_FLAG;
    }
    if ((o & VehicleAudioContextFlag::ALARM_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::ALARM_FLAG)) {
        os += (first ? "" : " | ");
        os += "ALARM_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::ALARM_FLAG;
    }
    if ((o & VehicleAudioContextFlag::NOTIFICATION_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::NOTIFICATION_FLAG)) {
        os += (first ? "" : " | ");
        os += "NOTIFICATION_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::NOTIFICATION_FLAG;
    }
    if ((o & VehicleAudioContextFlag::UNKNOWN_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::UNKNOWN_FLAG)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::UNKNOWN_FLAG;
    }
    if ((o & VehicleAudioContextFlag::SAFETY_ALERT_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::SAFETY_ALERT_FLAG)) {
        os += (first ? "" : " | ");
        os += "SAFETY_ALERT_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::SAFETY_ALERT_FLAG;
    }
    if ((o & VehicleAudioContextFlag::CD_ROM_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::CD_ROM_FLAG)) {
        os += (first ? "" : " | ");
        os += "CD_ROM_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::CD_ROM_FLAG;
    }
    if ((o & VehicleAudioContextFlag::AUX_AUDIO_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::AUX_AUDIO_FLAG)) {
        os += (first ? "" : " | ");
        os += "AUX_AUDIO_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::AUX_AUDIO_FLAG;
    }
    if ((o & VehicleAudioContextFlag::SYSTEM_SOUND_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::SYSTEM_SOUND_FLAG)) {
        os += (first ? "" : " | ");
        os += "SYSTEM_SOUND_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::SYSTEM_SOUND_FLAG;
    }
    if ((o & VehicleAudioContextFlag::RADIO_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::RADIO_FLAG)) {
        os += (first ? "" : " | ");
        os += "RADIO_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::RADIO_FLAG;
    }
    if ((o & VehicleAudioContextFlag::EXT_SOURCE_FLAG) == static_cast<int32_t>(VehicleAudioContextFlag::EXT_SOURCE_FLAG)) {
        os += (first ? "" : " | ");
        os += "EXT_SOURCE_FLAG";
        first = false;
        flipped |= VehicleAudioContextFlag::EXT_SOURCE_FLAG;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioContextFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioContextFlag::MUSIC_FLAG) {
        return "MUSIC_FLAG";
    }
    if (o == VehicleAudioContextFlag::NAVIGATION_FLAG) {
        return "NAVIGATION_FLAG";
    }
    if (o == VehicleAudioContextFlag::VOICE_COMMAND_FLAG) {
        return "VOICE_COMMAND_FLAG";
    }
    if (o == VehicleAudioContextFlag::CALL_FLAG) {
        return "CALL_FLAG";
    }
    if (o == VehicleAudioContextFlag::ALARM_FLAG) {
        return "ALARM_FLAG";
    }
    if (o == VehicleAudioContextFlag::NOTIFICATION_FLAG) {
        return "NOTIFICATION_FLAG";
    }
    if (o == VehicleAudioContextFlag::UNKNOWN_FLAG) {
        return "UNKNOWN_FLAG";
    }
    if (o == VehicleAudioContextFlag::SAFETY_ALERT_FLAG) {
        return "SAFETY_ALERT_FLAG";
    }
    if (o == VehicleAudioContextFlag::CD_ROM_FLAG) {
        return "CD_ROM_FLAG";
    }
    if (o == VehicleAudioContextFlag::AUX_AUDIO_FLAG) {
        return "AUX_AUDIO_FLAG";
    }
    if (o == VehicleAudioContextFlag::SYSTEM_SOUND_FLAG) {
        return "SYSTEM_SOUND_FLAG";
    }
    if (o == VehicleAudioContextFlag::RADIO_FLAG) {
        return "RADIO_FLAG";
    }
    if (o == VehicleAudioContextFlag::EXT_SOURCE_FLAG) {
        return "EXT_SOURCE_FLAG";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioVolumeCapabilityFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioVolumeCapabilityFlag::PERSISTENT_STORAGE) == static_cast<int32_t>(VehicleAudioVolumeCapabilityFlag::PERSISTENT_STORAGE)) {
        os += (first ? "" : " | ");
        os += "PERSISTENT_STORAGE";
        first = false;
        flipped |= VehicleAudioVolumeCapabilityFlag::PERSISTENT_STORAGE;
    }
    if ((o & VehicleAudioVolumeCapabilityFlag::MASTER_VOLUME_ONLY) == static_cast<int32_t>(VehicleAudioVolumeCapabilityFlag::MASTER_VOLUME_ONLY)) {
        os += (first ? "" : " | ");
        os += "MASTER_VOLUME_ONLY";
        first = false;
        flipped |= VehicleAudioVolumeCapabilityFlag::MASTER_VOLUME_ONLY;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioVolumeCapabilityFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioVolumeCapabilityFlag::PERSISTENT_STORAGE) {
        return "PERSISTENT_STORAGE";
    }
    if (o == VehicleAudioVolumeCapabilityFlag::MASTER_VOLUME_ONLY) {
        return "MASTER_VOLUME_ONLY";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioVolumeState>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioVolumeState::STATE_OK) == static_cast<int32_t>(VehicleAudioVolumeState::STATE_OK)) {
        os += (first ? "" : " | ");
        os += "STATE_OK";
        first = false;
        flipped |= VehicleAudioVolumeState::STATE_OK;
    }
    if ((o & VehicleAudioVolumeState::LIMIT_REACHED) == static_cast<int32_t>(VehicleAudioVolumeState::LIMIT_REACHED)) {
        os += (first ? "" : " | ");
        os += "LIMIT_REACHED";
        first = false;
        flipped |= VehicleAudioVolumeState::LIMIT_REACHED;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioVolumeState o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioVolumeState::STATE_OK) {
        return "STATE_OK";
    }
    if (o == VehicleAudioVolumeState::LIMIT_REACHED) {
        return "LIMIT_REACHED";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioVolumeIndex>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioVolumeIndex::INDEX_STREAM) == static_cast<int32_t>(VehicleAudioVolumeIndex::INDEX_STREAM)) {
        os += (first ? "" : " | ");
        os += "INDEX_STREAM";
        first = false;
        flipped |= VehicleAudioVolumeIndex::INDEX_STREAM;
    }
    if ((o & VehicleAudioVolumeIndex::INDEX_VOLUME) == static_cast<int32_t>(VehicleAudioVolumeIndex::INDEX_VOLUME)) {
        os += (first ? "" : " | ");
        os += "INDEX_VOLUME";
        first = false;
        flipped |= VehicleAudioVolumeIndex::INDEX_VOLUME;
    }
    if ((o & VehicleAudioVolumeIndex::INDEX_STATE) == static_cast<int32_t>(VehicleAudioVolumeIndex::INDEX_STATE)) {
        os += (first ? "" : " | ");
        os += "INDEX_STATE";
        first = false;
        flipped |= VehicleAudioVolumeIndex::INDEX_STATE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioVolumeIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioVolumeIndex::INDEX_STREAM) {
        return "INDEX_STREAM";
    }
    if (o == VehicleAudioVolumeIndex::INDEX_VOLUME) {
        return "INDEX_VOLUME";
    }
    if (o == VehicleAudioVolumeIndex::INDEX_STATE) {
        return "INDEX_STATE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioVolumeLimitIndex>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioVolumeLimitIndex::STREAM) == static_cast<int32_t>(VehicleAudioVolumeLimitIndex::STREAM)) {
        os += (first ? "" : " | ");
        os += "STREAM";
        first = false;
        flipped |= VehicleAudioVolumeLimitIndex::STREAM;
    }
    if ((o & VehicleAudioVolumeLimitIndex::MAX_VOLUME) == static_cast<int32_t>(VehicleAudioVolumeLimitIndex::MAX_VOLUME)) {
        os += (first ? "" : " | ");
        os += "MAX_VOLUME";
        first = false;
        flipped |= VehicleAudioVolumeLimitIndex::MAX_VOLUME;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioVolumeLimitIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioVolumeLimitIndex::STREAM) {
        return "STREAM";
    }
    if (o == VehicleAudioVolumeLimitIndex::MAX_VOLUME) {
        return "MAX_VOLUME";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioRoutingPolicyIndex>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioRoutingPolicyIndex::STREAM) == static_cast<int32_t>(VehicleAudioRoutingPolicyIndex::STREAM)) {
        os += (first ? "" : " | ");
        os += "STREAM";
        first = false;
        flipped |= VehicleAudioRoutingPolicyIndex::STREAM;
    }
    if ((o & VehicleAudioRoutingPolicyIndex::CONTEXTS) == static_cast<int32_t>(VehicleAudioRoutingPolicyIndex::CONTEXTS)) {
        os += (first ? "" : " | ");
        os += "CONTEXTS";
        first = false;
        flipped |= VehicleAudioRoutingPolicyIndex::CONTEXTS;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioRoutingPolicyIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioRoutingPolicyIndex::STREAM) {
        return "STREAM";
    }
    if (o == VehicleAudioRoutingPolicyIndex::CONTEXTS) {
        return "CONTEXTS";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAudioHwVariantConfigFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAudioHwVariantConfigFlag::INTERNAL_RADIO_FLAG) == static_cast<int32_t>(VehicleAudioHwVariantConfigFlag::INTERNAL_RADIO_FLAG)) {
        os += (first ? "" : " | ");
        os += "INTERNAL_RADIO_FLAG";
        first = false;
        flipped |= VehicleAudioHwVariantConfigFlag::INTERNAL_RADIO_FLAG;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAudioHwVariantConfigFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAudioHwVariantConfigFlag::INTERNAL_RADIO_FLAG) {
        return "INTERNAL_RADIO_FLAG";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerStateConfigFlag>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerStateConfigFlag::ENABLE_DEEP_SLEEP_FLAG) == static_cast<int32_t>(VehicleApPowerStateConfigFlag::ENABLE_DEEP_SLEEP_FLAG)) {
        os += (first ? "" : " | ");
        os += "ENABLE_DEEP_SLEEP_FLAG";
        first = false;
        flipped |= VehicleApPowerStateConfigFlag::ENABLE_DEEP_SLEEP_FLAG;
    }
    if ((o & VehicleApPowerStateConfigFlag::CONFIG_SUPPORT_TIMER_POWER_ON_FLAG) == static_cast<int32_t>(VehicleApPowerStateConfigFlag::CONFIG_SUPPORT_TIMER_POWER_ON_FLAG)) {
        os += (first ? "" : " | ");
        os += "CONFIG_SUPPORT_TIMER_POWER_ON_FLAG";
        first = false;
        flipped |= VehicleApPowerStateConfigFlag::CONFIG_SUPPORT_TIMER_POWER_ON_FLAG;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerStateConfigFlag o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerStateConfigFlag::ENABLE_DEEP_SLEEP_FLAG) {
        return "ENABLE_DEEP_SLEEP_FLAG";
    }
    if (o == VehicleApPowerStateConfigFlag::CONFIG_SUPPORT_TIMER_POWER_ON_FLAG) {
        return "CONFIG_SUPPORT_TIMER_POWER_ON_FLAG";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerState>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerState::OFF) == static_cast<int32_t>(VehicleApPowerState::OFF)) {
        os += (first ? "" : " | ");
        os += "OFF";
        first = false;
        flipped |= VehicleApPowerState::OFF;
    }
    if ((o & VehicleApPowerState::DEEP_SLEEP) == static_cast<int32_t>(VehicleApPowerState::DEEP_SLEEP)) {
        os += (first ? "" : " | ");
        os += "DEEP_SLEEP";
        first = false;
        flipped |= VehicleApPowerState::DEEP_SLEEP;
    }
    if ((o & VehicleApPowerState::ON_DISP_OFF) == static_cast<int32_t>(VehicleApPowerState::ON_DISP_OFF)) {
        os += (first ? "" : " | ");
        os += "ON_DISP_OFF";
        first = false;
        flipped |= VehicleApPowerState::ON_DISP_OFF;
    }
    if ((o & VehicleApPowerState::ON_FULL) == static_cast<int32_t>(VehicleApPowerState::ON_FULL)) {
        os += (first ? "" : " | ");
        os += "ON_FULL";
        first = false;
        flipped |= VehicleApPowerState::ON_FULL;
    }
    if ((o & VehicleApPowerState::SHUTDOWN_PREPARE) == static_cast<int32_t>(VehicleApPowerState::SHUTDOWN_PREPARE)) {
        os += (first ? "" : " | ");
        os += "SHUTDOWN_PREPARE";
        first = false;
        flipped |= VehicleApPowerState::SHUTDOWN_PREPARE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerState o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerState::OFF) {
        return "OFF";
    }
    if (o == VehicleApPowerState::DEEP_SLEEP) {
        return "DEEP_SLEEP";
    }
    if (o == VehicleApPowerState::ON_DISP_OFF) {
        return "ON_DISP_OFF";
    }
    if (o == VehicleApPowerState::ON_FULL) {
        return "ON_FULL";
    }
    if (o == VehicleApPowerState::SHUTDOWN_PREPARE) {
        return "SHUTDOWN_PREPARE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerStateShutdownParam>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerStateShutdownParam::SHUTDOWN_IMMEDIATELY) == static_cast<int32_t>(VehicleApPowerStateShutdownParam::SHUTDOWN_IMMEDIATELY)) {
        os += (first ? "" : " | ");
        os += "SHUTDOWN_IMMEDIATELY";
        first = false;
        flipped |= VehicleApPowerStateShutdownParam::SHUTDOWN_IMMEDIATELY;
    }
    if ((o & VehicleApPowerStateShutdownParam::CAN_SLEEP) == static_cast<int32_t>(VehicleApPowerStateShutdownParam::CAN_SLEEP)) {
        os += (first ? "" : " | ");
        os += "CAN_SLEEP";
        first = false;
        flipped |= VehicleApPowerStateShutdownParam::CAN_SLEEP;
    }
    if ((o & VehicleApPowerStateShutdownParam::SHUTDOWN_ONLY) == static_cast<int32_t>(VehicleApPowerStateShutdownParam::SHUTDOWN_ONLY)) {
        os += (first ? "" : " | ");
        os += "SHUTDOWN_ONLY";
        first = false;
        flipped |= VehicleApPowerStateShutdownParam::SHUTDOWN_ONLY;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerStateShutdownParam o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerStateShutdownParam::SHUTDOWN_IMMEDIATELY) {
        return "SHUTDOWN_IMMEDIATELY";
    }
    if (o == VehicleApPowerStateShutdownParam::CAN_SLEEP) {
        return "CAN_SLEEP";
    }
    if (o == VehicleApPowerStateShutdownParam::SHUTDOWN_ONLY) {
        return "SHUTDOWN_ONLY";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerSetState>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerSetState::BOOT_COMPLETE) == static_cast<int32_t>(VehicleApPowerSetState::BOOT_COMPLETE)) {
        os += (first ? "" : " | ");
        os += "BOOT_COMPLETE";
        first = false;
        flipped |= VehicleApPowerSetState::BOOT_COMPLETE;
    }
    if ((o & VehicleApPowerSetState::DEEP_SLEEP_ENTRY) == static_cast<int32_t>(VehicleApPowerSetState::DEEP_SLEEP_ENTRY)) {
        os += (first ? "" : " | ");
        os += "DEEP_SLEEP_ENTRY";
        first = false;
        flipped |= VehicleApPowerSetState::DEEP_SLEEP_ENTRY;
    }
    if ((o & VehicleApPowerSetState::DEEP_SLEEP_EXIT) == static_cast<int32_t>(VehicleApPowerSetState::DEEP_SLEEP_EXIT)) {
        os += (first ? "" : " | ");
        os += "DEEP_SLEEP_EXIT";
        first = false;
        flipped |= VehicleApPowerSetState::DEEP_SLEEP_EXIT;
    }
    if ((o & VehicleApPowerSetState::SHUTDOWN_POSTPONE) == static_cast<int32_t>(VehicleApPowerSetState::SHUTDOWN_POSTPONE)) {
        os += (first ? "" : " | ");
        os += "SHUTDOWN_POSTPONE";
        first = false;
        flipped |= VehicleApPowerSetState::SHUTDOWN_POSTPONE;
    }
    if ((o & VehicleApPowerSetState::SHUTDOWN_START) == static_cast<int32_t>(VehicleApPowerSetState::SHUTDOWN_START)) {
        os += (first ? "" : " | ");
        os += "SHUTDOWN_START";
        first = false;
        flipped |= VehicleApPowerSetState::SHUTDOWN_START;
    }
    if ((o & VehicleApPowerSetState::DISPLAY_OFF) == static_cast<int32_t>(VehicleApPowerSetState::DISPLAY_OFF)) {
        os += (first ? "" : " | ");
        os += "DISPLAY_OFF";
        first = false;
        flipped |= VehicleApPowerSetState::DISPLAY_OFF;
    }
    if ((o & VehicleApPowerSetState::DISPLAY_ON) == static_cast<int32_t>(VehicleApPowerSetState::DISPLAY_ON)) {
        os += (first ? "" : " | ");
        os += "DISPLAY_ON";
        first = false;
        flipped |= VehicleApPowerSetState::DISPLAY_ON;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerSetState o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerSetState::BOOT_COMPLETE) {
        return "BOOT_COMPLETE";
    }
    if (o == VehicleApPowerSetState::DEEP_SLEEP_ENTRY) {
        return "DEEP_SLEEP_ENTRY";
    }
    if (o == VehicleApPowerSetState::DEEP_SLEEP_EXIT) {
        return "DEEP_SLEEP_EXIT";
    }
    if (o == VehicleApPowerSetState::SHUTDOWN_POSTPONE) {
        return "SHUTDOWN_POSTPONE";
    }
    if (o == VehicleApPowerSetState::SHUTDOWN_START) {
        return "SHUTDOWN_START";
    }
    if (o == VehicleApPowerSetState::DISPLAY_OFF) {
        return "DISPLAY_OFF";
    }
    if (o == VehicleApPowerSetState::DISPLAY_ON) {
        return "DISPLAY_ON";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerStateIndex>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerStateIndex::STATE) == static_cast<int32_t>(VehicleApPowerStateIndex::STATE)) {
        os += (first ? "" : " | ");
        os += "STATE";
        first = false;
        flipped |= VehicleApPowerStateIndex::STATE;
    }
    if ((o & VehicleApPowerStateIndex::ADDITIONAL) == static_cast<int32_t>(VehicleApPowerStateIndex::ADDITIONAL)) {
        os += (first ? "" : " | ");
        os += "ADDITIONAL";
        first = false;
        flipped |= VehicleApPowerStateIndex::ADDITIONAL;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerStateIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerStateIndex::STATE) {
        return "STATE";
    }
    if (o == VehicleApPowerStateIndex::ADDITIONAL) {
        return "ADDITIONAL";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleApPowerBootupReason>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleApPowerBootupReason::USER_POWER_ON) == static_cast<int32_t>(VehicleApPowerBootupReason::USER_POWER_ON)) {
        os += (first ? "" : " | ");
        os += "USER_POWER_ON";
        first = false;
        flipped |= VehicleApPowerBootupReason::USER_POWER_ON;
    }
    if ((o & VehicleApPowerBootupReason::USER_UNLOCK) == static_cast<int32_t>(VehicleApPowerBootupReason::USER_UNLOCK)) {
        os += (first ? "" : " | ");
        os += "USER_UNLOCK";
        first = false;
        flipped |= VehicleApPowerBootupReason::USER_UNLOCK;
    }
    if ((o & VehicleApPowerBootupReason::TIMER) == static_cast<int32_t>(VehicleApPowerBootupReason::TIMER)) {
        os += (first ? "" : " | ");
        os += "TIMER";
        first = false;
        flipped |= VehicleApPowerBootupReason::TIMER;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleApPowerBootupReason o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleApPowerBootupReason::USER_POWER_ON) {
        return "USER_POWER_ON";
    }
    if (o == VehicleApPowerBootupReason::USER_UNLOCK) {
        return "USER_UNLOCK";
    }
    if (o == VehicleApPowerBootupReason::TIMER) {
        return "TIMER";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleHwKeyInputAction>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleHwKeyInputAction::ACTION_DOWN) == static_cast<int32_t>(VehicleHwKeyInputAction::ACTION_DOWN)) {
        os += (first ? "" : " | ");
        os += "ACTION_DOWN";
        first = false;
        flipped |= VehicleHwKeyInputAction::ACTION_DOWN;
    }
    if ((o & VehicleHwKeyInputAction::ACTION_UP) == static_cast<int32_t>(VehicleHwKeyInputAction::ACTION_UP)) {
        os += (first ? "" : " | ");
        os += "ACTION_UP";
        first = false;
        flipped |= VehicleHwKeyInputAction::ACTION_UP;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleHwKeyInputAction o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleHwKeyInputAction::ACTION_DOWN) {
        return "ACTION_DOWN";
    }
    if (o == VehicleHwKeyInputAction::ACTION_UP) {
        return "ACTION_UP";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleDisplay>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleDisplay::MAIN) == static_cast<int32_t>(VehicleDisplay::MAIN)) {
        os += (first ? "" : " | ");
        os += "MAIN";
        first = false;
        flipped |= VehicleDisplay::MAIN;
    }
    if ((o & VehicleDisplay::INSTRUMENT_CLUSTER) == static_cast<int32_t>(VehicleDisplay::INSTRUMENT_CLUSTER)) {
        os += (first ? "" : " | ");
        os += "INSTRUMENT_CLUSTER";
        first = false;
        flipped |= VehicleDisplay::INSTRUMENT_CLUSTER;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleDisplay o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleDisplay::MAIN) {
        return "MAIN";
    }
    if (o == VehicleDisplay::INSTRUMENT_CLUSTER) {
        return "INSTRUMENT_CLUSTER";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleInstrumentClusterType>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleInstrumentClusterType::NONE) == static_cast<int32_t>(VehicleInstrumentClusterType::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= VehicleInstrumentClusterType::NONE;
    }
    if ((o & VehicleInstrumentClusterType::HAL_INTERFACE) == static_cast<int32_t>(VehicleInstrumentClusterType::HAL_INTERFACE)) {
        os += (first ? "" : " | ");
        os += "HAL_INTERFACE";
        first = false;
        flipped |= VehicleInstrumentClusterType::HAL_INTERFACE;
    }
    if ((o & VehicleInstrumentClusterType::EXTERNAL_DISPLAY) == static_cast<int32_t>(VehicleInstrumentClusterType::EXTERNAL_DISPLAY)) {
        os += (first ? "" : " | ");
        os += "EXTERNAL_DISPLAY";
        first = false;
        flipped |= VehicleInstrumentClusterType::EXTERNAL_DISPLAY;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleInstrumentClusterType o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleInstrumentClusterType::NONE) {
        return "NONE";
    }
    if (o == VehicleInstrumentClusterType::HAL_INTERFACE) {
        return "HAL_INTERFACE";
    }
    if (o == VehicleInstrumentClusterType::EXTERNAL_DISPLAY) {
        return "EXTERNAL_DISPLAY";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleUnit>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleUnit::SHOULD_NOT_USE) == static_cast<int32_t>(VehicleUnit::SHOULD_NOT_USE)) {
        os += (first ? "" : " | ");
        os += "SHOULD_NOT_USE";
        first = false;
        flipped |= VehicleUnit::SHOULD_NOT_USE;
    }
    if ((o & VehicleUnit::METER_PER_SEC) == static_cast<int32_t>(VehicleUnit::METER_PER_SEC)) {
        os += (first ? "" : " | ");
        os += "METER_PER_SEC";
        first = false;
        flipped |= VehicleUnit::METER_PER_SEC;
    }
    if ((o & VehicleUnit::RPM) == static_cast<int32_t>(VehicleUnit::RPM)) {
        os += (first ? "" : " | ");
        os += "RPM";
        first = false;
        flipped |= VehicleUnit::RPM;
    }
    if ((o & VehicleUnit::HERTZ) == static_cast<int32_t>(VehicleUnit::HERTZ)) {
        os += (first ? "" : " | ");
        os += "HERTZ";
        first = false;
        flipped |= VehicleUnit::HERTZ;
    }
    if ((o & VehicleUnit::PERCENTILE) == static_cast<int32_t>(VehicleUnit::PERCENTILE)) {
        os += (first ? "" : " | ");
        os += "PERCENTILE";
        first = false;
        flipped |= VehicleUnit::PERCENTILE;
    }
    if ((o & VehicleUnit::MILLIMETER) == static_cast<int32_t>(VehicleUnit::MILLIMETER)) {
        os += (first ? "" : " | ");
        os += "MILLIMETER";
        first = false;
        flipped |= VehicleUnit::MILLIMETER;
    }
    if ((o & VehicleUnit::METER) == static_cast<int32_t>(VehicleUnit::METER)) {
        os += (first ? "" : " | ");
        os += "METER";
        first = false;
        flipped |= VehicleUnit::METER;
    }
    if ((o & VehicleUnit::KILOMETER) == static_cast<int32_t>(VehicleUnit::KILOMETER)) {
        os += (first ? "" : " | ");
        os += "KILOMETER";
        first = false;
        flipped |= VehicleUnit::KILOMETER;
    }
    if ((o & VehicleUnit::CELSIUS) == static_cast<int32_t>(VehicleUnit::CELSIUS)) {
        os += (first ? "" : " | ");
        os += "CELSIUS";
        first = false;
        flipped |= VehicleUnit::CELSIUS;
    }
    if ((o & VehicleUnit::FAHRENHEIT) == static_cast<int32_t>(VehicleUnit::FAHRENHEIT)) {
        os += (first ? "" : " | ");
        os += "FAHRENHEIT";
        first = false;
        flipped |= VehicleUnit::FAHRENHEIT;
    }
    if ((o & VehicleUnit::KELVIN) == static_cast<int32_t>(VehicleUnit::KELVIN)) {
        os += (first ? "" : " | ");
        os += "KELVIN";
        first = false;
        flipped |= VehicleUnit::KELVIN;
    }
    if ((o & VehicleUnit::MILLILITER) == static_cast<int32_t>(VehicleUnit::MILLILITER)) {
        os += (first ? "" : " | ");
        os += "MILLILITER";
        first = false;
        flipped |= VehicleUnit::MILLILITER;
    }
    if ((o & VehicleUnit::NANO_SECS) == static_cast<int32_t>(VehicleUnit::NANO_SECS)) {
        os += (first ? "" : " | ");
        os += "NANO_SECS";
        first = false;
        flipped |= VehicleUnit::NANO_SECS;
    }
    if ((o & VehicleUnit::SECS) == static_cast<int32_t>(VehicleUnit::SECS)) {
        os += (first ? "" : " | ");
        os += "SECS";
        first = false;
        flipped |= VehicleUnit::SECS;
    }
    if ((o & VehicleUnit::YEAR) == static_cast<int32_t>(VehicleUnit::YEAR)) {
        os += (first ? "" : " | ");
        os += "YEAR";
        first = false;
        flipped |= VehicleUnit::YEAR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleUnit o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleUnit::SHOULD_NOT_USE) {
        return "SHOULD_NOT_USE";
    }
    if (o == VehicleUnit::METER_PER_SEC) {
        return "METER_PER_SEC";
    }
    if (o == VehicleUnit::RPM) {
        return "RPM";
    }
    if (o == VehicleUnit::HERTZ) {
        return "HERTZ";
    }
    if (o == VehicleUnit::PERCENTILE) {
        return "PERCENTILE";
    }
    if (o == VehicleUnit::MILLIMETER) {
        return "MILLIMETER";
    }
    if (o == VehicleUnit::METER) {
        return "METER";
    }
    if (o == VehicleUnit::KILOMETER) {
        return "KILOMETER";
    }
    if (o == VehicleUnit::CELSIUS) {
        return "CELSIUS";
    }
    if (o == VehicleUnit::FAHRENHEIT) {
        return "FAHRENHEIT";
    }
    if (o == VehicleUnit::KELVIN) {
        return "KELVIN";
    }
    if (o == VehicleUnit::MILLILITER) {
        return "MILLILITER";
    }
    if (o == VehicleUnit::NANO_SECS) {
        return "NANO_SECS";
    }
    if (o == VehicleUnit::SECS) {
        return "SECS";
    }
    if (o == VehicleUnit::YEAR) {
        return "YEAR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehiclePropertyChangeMode>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehiclePropertyChangeMode::STATIC) == static_cast<int32_t>(VehiclePropertyChangeMode::STATIC)) {
        os += (first ? "" : " | ");
        os += "STATIC";
        first = false;
        flipped |= VehiclePropertyChangeMode::STATIC;
    }
    if ((o & VehiclePropertyChangeMode::ON_CHANGE) == static_cast<int32_t>(VehiclePropertyChangeMode::ON_CHANGE)) {
        os += (first ? "" : " | ");
        os += "ON_CHANGE";
        first = false;
        flipped |= VehiclePropertyChangeMode::ON_CHANGE;
    }
    if ((o & VehiclePropertyChangeMode::CONTINUOUS) == static_cast<int32_t>(VehiclePropertyChangeMode::CONTINUOUS)) {
        os += (first ? "" : " | ");
        os += "CONTINUOUS";
        first = false;
        flipped |= VehiclePropertyChangeMode::CONTINUOUS;
    }
    if ((o & VehiclePropertyChangeMode::POLL) == static_cast<int32_t>(VehiclePropertyChangeMode::POLL)) {
        os += (first ? "" : " | ");
        os += "POLL";
        first = false;
        flipped |= VehiclePropertyChangeMode::POLL;
    }
    if ((o & VehiclePropertyChangeMode::ON_SET) == static_cast<int32_t>(VehiclePropertyChangeMode::ON_SET)) {
        os += (first ? "" : " | ");
        os += "ON_SET";
        first = false;
        flipped |= VehiclePropertyChangeMode::ON_SET;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehiclePropertyChangeMode o) {
    using ::android::hardware::details::toHexString;
    if (o == VehiclePropertyChangeMode::STATIC) {
        return "STATIC";
    }
    if (o == VehiclePropertyChangeMode::ON_CHANGE) {
        return "ON_CHANGE";
    }
    if (o == VehiclePropertyChangeMode::CONTINUOUS) {
        return "CONTINUOUS";
    }
    if (o == VehiclePropertyChangeMode::POLL) {
        return "POLL";
    }
    if (o == VehiclePropertyChangeMode::ON_SET) {
        return "ON_SET";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehiclePropertyAccess>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehiclePropertyAccess::NONE) == static_cast<int32_t>(VehiclePropertyAccess::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= VehiclePropertyAccess::NONE;
    }
    if ((o & VehiclePropertyAccess::READ) == static_cast<int32_t>(VehiclePropertyAccess::READ)) {
        os += (first ? "" : " | ");
        os += "READ";
        first = false;
        flipped |= VehiclePropertyAccess::READ;
    }
    if ((o & VehiclePropertyAccess::WRITE) == static_cast<int32_t>(VehiclePropertyAccess::WRITE)) {
        os += (first ? "" : " | ");
        os += "WRITE";
        first = false;
        flipped |= VehiclePropertyAccess::WRITE;
    }
    if ((o & VehiclePropertyAccess::READ_WRITE) == static_cast<int32_t>(VehiclePropertyAccess::READ_WRITE)) {
        os += (first ? "" : " | ");
        os += "READ_WRITE";
        first = false;
        flipped |= VehiclePropertyAccess::READ_WRITE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehiclePropertyAccess o) {
    using ::android::hardware::details::toHexString;
    if (o == VehiclePropertyAccess::NONE) {
        return "NONE";
    }
    if (o == VehiclePropertyAccess::READ) {
        return "READ";
    }
    if (o == VehiclePropertyAccess::WRITE) {
        return "WRITE";
    }
    if (o == VehiclePropertyAccess::READ_WRITE) {
        return "READ_WRITE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleDrivingStatus>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleDrivingStatus::UNRESTRICTED) == static_cast<int32_t>(VehicleDrivingStatus::UNRESTRICTED)) {
        os += (first ? "" : " | ");
        os += "UNRESTRICTED";
        first = false;
        flipped |= VehicleDrivingStatus::UNRESTRICTED;
    }
    if ((o & VehicleDrivingStatus::NO_VIDEO) == static_cast<int32_t>(VehicleDrivingStatus::NO_VIDEO)) {
        os += (first ? "" : " | ");
        os += "NO_VIDEO";
        first = false;
        flipped |= VehicleDrivingStatus::NO_VIDEO;
    }
    if ((o & VehicleDrivingStatus::NO_KEYBOARD_INPUT) == static_cast<int32_t>(VehicleDrivingStatus::NO_KEYBOARD_INPUT)) {
        os += (first ? "" : " | ");
        os += "NO_KEYBOARD_INPUT";
        first = false;
        flipped |= VehicleDrivingStatus::NO_KEYBOARD_INPUT;
    }
    if ((o & VehicleDrivingStatus::NO_VOICE_INPUT) == static_cast<int32_t>(VehicleDrivingStatus::NO_VOICE_INPUT)) {
        os += (first ? "" : " | ");
        os += "NO_VOICE_INPUT";
        first = false;
        flipped |= VehicleDrivingStatus::NO_VOICE_INPUT;
    }
    if ((o & VehicleDrivingStatus::NO_CONFIG) == static_cast<int32_t>(VehicleDrivingStatus::NO_CONFIG)) {
        os += (first ? "" : " | ");
        os += "NO_CONFIG";
        first = false;
        flipped |= VehicleDrivingStatus::NO_CONFIG;
    }
    if ((o & VehicleDrivingStatus::LIMIT_MESSAGE_LEN) == static_cast<int32_t>(VehicleDrivingStatus::LIMIT_MESSAGE_LEN)) {
        os += (first ? "" : " | ");
        os += "LIMIT_MESSAGE_LEN";
        first = false;
        flipped |= VehicleDrivingStatus::LIMIT_MESSAGE_LEN;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleDrivingStatus o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleDrivingStatus::UNRESTRICTED) {
        return "UNRESTRICTED";
    }
    if (o == VehicleDrivingStatus::NO_VIDEO) {
        return "NO_VIDEO";
    }
    if (o == VehicleDrivingStatus::NO_KEYBOARD_INPUT) {
        return "NO_KEYBOARD_INPUT";
    }
    if (o == VehicleDrivingStatus::NO_VOICE_INPUT) {
        return "NO_VOICE_INPUT";
    }
    if (o == VehicleDrivingStatus::NO_CONFIG) {
        return "NO_CONFIG";
    }
    if (o == VehicleDrivingStatus::LIMIT_MESSAGE_LEN) {
        return "LIMIT_MESSAGE_LEN";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleGear>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleGear::GEAR_NEUTRAL) == static_cast<int32_t>(VehicleGear::GEAR_NEUTRAL)) {
        os += (first ? "" : " | ");
        os += "GEAR_NEUTRAL";
        first = false;
        flipped |= VehicleGear::GEAR_NEUTRAL;
    }
    if ((o & VehicleGear::GEAR_REVERSE) == static_cast<int32_t>(VehicleGear::GEAR_REVERSE)) {
        os += (first ? "" : " | ");
        os += "GEAR_REVERSE";
        first = false;
        flipped |= VehicleGear::GEAR_REVERSE;
    }
    if ((o & VehicleGear::GEAR_PARK) == static_cast<int32_t>(VehicleGear::GEAR_PARK)) {
        os += (first ? "" : " | ");
        os += "GEAR_PARK";
        first = false;
        flipped |= VehicleGear::GEAR_PARK;
    }
    if ((o & VehicleGear::GEAR_DRIVE) == static_cast<int32_t>(VehicleGear::GEAR_DRIVE)) {
        os += (first ? "" : " | ");
        os += "GEAR_DRIVE";
        first = false;
        flipped |= VehicleGear::GEAR_DRIVE;
    }
    if ((o & VehicleGear::GEAR_LOW) == static_cast<int32_t>(VehicleGear::GEAR_LOW)) {
        os += (first ? "" : " | ");
        os += "GEAR_LOW";
        first = false;
        flipped |= VehicleGear::GEAR_LOW;
    }
    if ((o & VehicleGear::GEAR_1) == static_cast<int32_t>(VehicleGear::GEAR_1)) {
        os += (first ? "" : " | ");
        os += "GEAR_1";
        first = false;
        flipped |= VehicleGear::GEAR_1;
    }
    if ((o & VehicleGear::GEAR_2) == static_cast<int32_t>(VehicleGear::GEAR_2)) {
        os += (first ? "" : " | ");
        os += "GEAR_2";
        first = false;
        flipped |= VehicleGear::GEAR_2;
    }
    if ((o & VehicleGear::GEAR_3) == static_cast<int32_t>(VehicleGear::GEAR_3)) {
        os += (first ? "" : " | ");
        os += "GEAR_3";
        first = false;
        flipped |= VehicleGear::GEAR_3;
    }
    if ((o & VehicleGear::GEAR_4) == static_cast<int32_t>(VehicleGear::GEAR_4)) {
        os += (first ? "" : " | ");
        os += "GEAR_4";
        first = false;
        flipped |= VehicleGear::GEAR_4;
    }
    if ((o & VehicleGear::GEAR_5) == static_cast<int32_t>(VehicleGear::GEAR_5)) {
        os += (first ? "" : " | ");
        os += "GEAR_5";
        first = false;
        flipped |= VehicleGear::GEAR_5;
    }
    if ((o & VehicleGear::GEAR_6) == static_cast<int32_t>(VehicleGear::GEAR_6)) {
        os += (first ? "" : " | ");
        os += "GEAR_6";
        first = false;
        flipped |= VehicleGear::GEAR_6;
    }
    if ((o & VehicleGear::GEAR_7) == static_cast<int32_t>(VehicleGear::GEAR_7)) {
        os += (first ? "" : " | ");
        os += "GEAR_7";
        first = false;
        flipped |= VehicleGear::GEAR_7;
    }
    if ((o & VehicleGear::GEAR_8) == static_cast<int32_t>(VehicleGear::GEAR_8)) {
        os += (first ? "" : " | ");
        os += "GEAR_8";
        first = false;
        flipped |= VehicleGear::GEAR_8;
    }
    if ((o & VehicleGear::GEAR_9) == static_cast<int32_t>(VehicleGear::GEAR_9)) {
        os += (first ? "" : " | ");
        os += "GEAR_9";
        first = false;
        flipped |= VehicleGear::GEAR_9;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleGear o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleGear::GEAR_NEUTRAL) {
        return "GEAR_NEUTRAL";
    }
    if (o == VehicleGear::GEAR_REVERSE) {
        return "GEAR_REVERSE";
    }
    if (o == VehicleGear::GEAR_PARK) {
        return "GEAR_PARK";
    }
    if (o == VehicleGear::GEAR_DRIVE) {
        return "GEAR_DRIVE";
    }
    if (o == VehicleGear::GEAR_LOW) {
        return "GEAR_LOW";
    }
    if (o == VehicleGear::GEAR_1) {
        return "GEAR_1";
    }
    if (o == VehicleGear::GEAR_2) {
        return "GEAR_2";
    }
    if (o == VehicleGear::GEAR_3) {
        return "GEAR_3";
    }
    if (o == VehicleGear::GEAR_4) {
        return "GEAR_4";
    }
    if (o == VehicleGear::GEAR_5) {
        return "GEAR_5";
    }
    if (o == VehicleGear::GEAR_6) {
        return "GEAR_6";
    }
    if (o == VehicleGear::GEAR_7) {
        return "GEAR_7";
    }
    if (o == VehicleGear::GEAR_8) {
        return "GEAR_8";
    }
    if (o == VehicleGear::GEAR_9) {
        return "GEAR_9";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAreaZone>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAreaZone::ROW_1_LEFT) == static_cast<int32_t>(VehicleAreaZone::ROW_1_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_LEFT";
        first = false;
        flipped |= VehicleAreaZone::ROW_1_LEFT;
    }
    if ((o & VehicleAreaZone::ROW_1_CENTER) == static_cast<int32_t>(VehicleAreaZone::ROW_1_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_1_CENTER";
        first = false;
        flipped |= VehicleAreaZone::ROW_1_CENTER;
    }
    if ((o & VehicleAreaZone::ROW_1_RIGHT) == static_cast<int32_t>(VehicleAreaZone::ROW_1_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_RIGHT";
        first = false;
        flipped |= VehicleAreaZone::ROW_1_RIGHT;
    }
    if ((o & VehicleAreaZone::ROW_1) == static_cast<int32_t>(VehicleAreaZone::ROW_1)) {
        os += (first ? "" : " | ");
        os += "ROW_1";
        first = false;
        flipped |= VehicleAreaZone::ROW_1;
    }
    if ((o & VehicleAreaZone::ROW_2_LEFT) == static_cast<int32_t>(VehicleAreaZone::ROW_2_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_LEFT";
        first = false;
        flipped |= VehicleAreaZone::ROW_2_LEFT;
    }
    if ((o & VehicleAreaZone::ROW_2_CENTER) == static_cast<int32_t>(VehicleAreaZone::ROW_2_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_2_CENTER";
        first = false;
        flipped |= VehicleAreaZone::ROW_2_CENTER;
    }
    if ((o & VehicleAreaZone::ROW_2_RIGHT) == static_cast<int32_t>(VehicleAreaZone::ROW_2_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_RIGHT";
        first = false;
        flipped |= VehicleAreaZone::ROW_2_RIGHT;
    }
    if ((o & VehicleAreaZone::ROW_2) == static_cast<int32_t>(VehicleAreaZone::ROW_2)) {
        os += (first ? "" : " | ");
        os += "ROW_2";
        first = false;
        flipped |= VehicleAreaZone::ROW_2;
    }
    if ((o & VehicleAreaZone::ROW_3_LEFT) == static_cast<int32_t>(VehicleAreaZone::ROW_3_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_LEFT";
        first = false;
        flipped |= VehicleAreaZone::ROW_3_LEFT;
    }
    if ((o & VehicleAreaZone::ROW_3_CENTER) == static_cast<int32_t>(VehicleAreaZone::ROW_3_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_3_CENTER";
        first = false;
        flipped |= VehicleAreaZone::ROW_3_CENTER;
    }
    if ((o & VehicleAreaZone::ROW_3_RIGHT) == static_cast<int32_t>(VehicleAreaZone::ROW_3_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_RIGHT";
        first = false;
        flipped |= VehicleAreaZone::ROW_3_RIGHT;
    }
    if ((o & VehicleAreaZone::ROW_3) == static_cast<int32_t>(VehicleAreaZone::ROW_3)) {
        os += (first ? "" : " | ");
        os += "ROW_3";
        first = false;
        flipped |= VehicleAreaZone::ROW_3;
    }
    if ((o & VehicleAreaZone::ROW_4_LEFT) == static_cast<int32_t>(VehicleAreaZone::ROW_4_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_4_LEFT";
        first = false;
        flipped |= VehicleAreaZone::ROW_4_LEFT;
    }
    if ((o & VehicleAreaZone::ROW_4_CENTER) == static_cast<int32_t>(VehicleAreaZone::ROW_4_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_4_CENTER";
        first = false;
        flipped |= VehicleAreaZone::ROW_4_CENTER;
    }
    if ((o & VehicleAreaZone::ROW_4_RIGHT) == static_cast<int32_t>(VehicleAreaZone::ROW_4_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_4_RIGHT";
        first = false;
        flipped |= VehicleAreaZone::ROW_4_RIGHT;
    }
    if ((o & VehicleAreaZone::ROW_4) == static_cast<int32_t>(VehicleAreaZone::ROW_4)) {
        os += (first ? "" : " | ");
        os += "ROW_4";
        first = false;
        flipped |= VehicleAreaZone::ROW_4;
    }
    if ((o & VehicleAreaZone::WHOLE_CABIN) == static_cast<int32_t>(VehicleAreaZone::WHOLE_CABIN)) {
        os += (first ? "" : " | ");
        os += "WHOLE_CABIN";
        first = false;
        flipped |= VehicleAreaZone::WHOLE_CABIN;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAreaZone o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAreaZone::ROW_1_LEFT) {
        return "ROW_1_LEFT";
    }
    if (o == VehicleAreaZone::ROW_1_CENTER) {
        return "ROW_1_CENTER";
    }
    if (o == VehicleAreaZone::ROW_1_RIGHT) {
        return "ROW_1_RIGHT";
    }
    if (o == VehicleAreaZone::ROW_1) {
        return "ROW_1";
    }
    if (o == VehicleAreaZone::ROW_2_LEFT) {
        return "ROW_2_LEFT";
    }
    if (o == VehicleAreaZone::ROW_2_CENTER) {
        return "ROW_2_CENTER";
    }
    if (o == VehicleAreaZone::ROW_2_RIGHT) {
        return "ROW_2_RIGHT";
    }
    if (o == VehicleAreaZone::ROW_2) {
        return "ROW_2";
    }
    if (o == VehicleAreaZone::ROW_3_LEFT) {
        return "ROW_3_LEFT";
    }
    if (o == VehicleAreaZone::ROW_3_CENTER) {
        return "ROW_3_CENTER";
    }
    if (o == VehicleAreaZone::ROW_3_RIGHT) {
        return "ROW_3_RIGHT";
    }
    if (o == VehicleAreaZone::ROW_3) {
        return "ROW_3";
    }
    if (o == VehicleAreaZone::ROW_4_LEFT) {
        return "ROW_4_LEFT";
    }
    if (o == VehicleAreaZone::ROW_4_CENTER) {
        return "ROW_4_CENTER";
    }
    if (o == VehicleAreaZone::ROW_4_RIGHT) {
        return "ROW_4_RIGHT";
    }
    if (o == VehicleAreaZone::ROW_4) {
        return "ROW_4";
    }
    if (o == VehicleAreaZone::WHOLE_CABIN) {
        return "WHOLE_CABIN";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAreaSeat>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAreaSeat::ROW_1_LEFT) == static_cast<int32_t>(VehicleAreaSeat::ROW_1_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_LEFT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_1_LEFT;
    }
    if ((o & VehicleAreaSeat::ROW_1_CENTER) == static_cast<int32_t>(VehicleAreaSeat::ROW_1_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_1_CENTER";
        first = false;
        flipped |= VehicleAreaSeat::ROW_1_CENTER;
    }
    if ((o & VehicleAreaSeat::ROW_1_RIGHT) == static_cast<int32_t>(VehicleAreaSeat::ROW_1_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_RIGHT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_1_RIGHT;
    }
    if ((o & VehicleAreaSeat::ROW_2_LEFT) == static_cast<int32_t>(VehicleAreaSeat::ROW_2_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_LEFT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_2_LEFT;
    }
    if ((o & VehicleAreaSeat::ROW_2_CENTER) == static_cast<int32_t>(VehicleAreaSeat::ROW_2_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_2_CENTER";
        first = false;
        flipped |= VehicleAreaSeat::ROW_2_CENTER;
    }
    if ((o & VehicleAreaSeat::ROW_2_RIGHT) == static_cast<int32_t>(VehicleAreaSeat::ROW_2_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_RIGHT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_2_RIGHT;
    }
    if ((o & VehicleAreaSeat::ROW_3_LEFT) == static_cast<int32_t>(VehicleAreaSeat::ROW_3_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_LEFT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_3_LEFT;
    }
    if ((o & VehicleAreaSeat::ROW_3_CENTER) == static_cast<int32_t>(VehicleAreaSeat::ROW_3_CENTER)) {
        os += (first ? "" : " | ");
        os += "ROW_3_CENTER";
        first = false;
        flipped |= VehicleAreaSeat::ROW_3_CENTER;
    }
    if ((o & VehicleAreaSeat::ROW_3_RIGHT) == static_cast<int32_t>(VehicleAreaSeat::ROW_3_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_RIGHT";
        first = false;
        flipped |= VehicleAreaSeat::ROW_3_RIGHT;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAreaSeat o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAreaSeat::ROW_1_LEFT) {
        return "ROW_1_LEFT";
    }
    if (o == VehicleAreaSeat::ROW_1_CENTER) {
        return "ROW_1_CENTER";
    }
    if (o == VehicleAreaSeat::ROW_1_RIGHT) {
        return "ROW_1_RIGHT";
    }
    if (o == VehicleAreaSeat::ROW_2_LEFT) {
        return "ROW_2_LEFT";
    }
    if (o == VehicleAreaSeat::ROW_2_CENTER) {
        return "ROW_2_CENTER";
    }
    if (o == VehicleAreaSeat::ROW_2_RIGHT) {
        return "ROW_2_RIGHT";
    }
    if (o == VehicleAreaSeat::ROW_3_LEFT) {
        return "ROW_3_LEFT";
    }
    if (o == VehicleAreaSeat::ROW_3_CENTER) {
        return "ROW_3_CENTER";
    }
    if (o == VehicleAreaSeat::ROW_3_RIGHT) {
        return "ROW_3_RIGHT";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAreaWindow>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAreaWindow::FRONT_WINDSHIELD) == static_cast<int32_t>(VehicleAreaWindow::FRONT_WINDSHIELD)) {
        os += (first ? "" : " | ");
        os += "FRONT_WINDSHIELD";
        first = false;
        flipped |= VehicleAreaWindow::FRONT_WINDSHIELD;
    }
    if ((o & VehicleAreaWindow::REAR_WINDSHIELD) == static_cast<int32_t>(VehicleAreaWindow::REAR_WINDSHIELD)) {
        os += (first ? "" : " | ");
        os += "REAR_WINDSHIELD";
        first = false;
        flipped |= VehicleAreaWindow::REAR_WINDSHIELD;
    }
    if ((o & VehicleAreaWindow::ROOF_TOP) == static_cast<int32_t>(VehicleAreaWindow::ROOF_TOP)) {
        os += (first ? "" : " | ");
        os += "ROOF_TOP";
        first = false;
        flipped |= VehicleAreaWindow::ROOF_TOP;
    }
    if ((o & VehicleAreaWindow::ROW_1_LEFT) == static_cast<int32_t>(VehicleAreaWindow::ROW_1_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_LEFT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_1_LEFT;
    }
    if ((o & VehicleAreaWindow::ROW_1_RIGHT) == static_cast<int32_t>(VehicleAreaWindow::ROW_1_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_RIGHT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_1_RIGHT;
    }
    if ((o & VehicleAreaWindow::ROW_2_LEFT) == static_cast<int32_t>(VehicleAreaWindow::ROW_2_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_LEFT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_2_LEFT;
    }
    if ((o & VehicleAreaWindow::ROW_2_RIGHT) == static_cast<int32_t>(VehicleAreaWindow::ROW_2_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_RIGHT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_2_RIGHT;
    }
    if ((o & VehicleAreaWindow::ROW_3_LEFT) == static_cast<int32_t>(VehicleAreaWindow::ROW_3_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_LEFT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_3_LEFT;
    }
    if ((o & VehicleAreaWindow::ROW_3_RIGHT) == static_cast<int32_t>(VehicleAreaWindow::ROW_3_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_RIGHT";
        first = false;
        flipped |= VehicleAreaWindow::ROW_3_RIGHT;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAreaWindow o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAreaWindow::FRONT_WINDSHIELD) {
        return "FRONT_WINDSHIELD";
    }
    if (o == VehicleAreaWindow::REAR_WINDSHIELD) {
        return "REAR_WINDSHIELD";
    }
    if (o == VehicleAreaWindow::ROOF_TOP) {
        return "ROOF_TOP";
    }
    if (o == VehicleAreaWindow::ROW_1_LEFT) {
        return "ROW_1_LEFT";
    }
    if (o == VehicleAreaWindow::ROW_1_RIGHT) {
        return "ROW_1_RIGHT";
    }
    if (o == VehicleAreaWindow::ROW_2_LEFT) {
        return "ROW_2_LEFT";
    }
    if (o == VehicleAreaWindow::ROW_2_RIGHT) {
        return "ROW_2_RIGHT";
    }
    if (o == VehicleAreaWindow::ROW_3_LEFT) {
        return "ROW_3_LEFT";
    }
    if (o == VehicleAreaWindow::ROW_3_RIGHT) {
        return "ROW_3_RIGHT";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAreaDoor>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAreaDoor::ROW_1_LEFT) == static_cast<int32_t>(VehicleAreaDoor::ROW_1_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_LEFT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_1_LEFT;
    }
    if ((o & VehicleAreaDoor::ROW_1_RIGHT) == static_cast<int32_t>(VehicleAreaDoor::ROW_1_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_1_RIGHT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_1_RIGHT;
    }
    if ((o & VehicleAreaDoor::ROW_2_LEFT) == static_cast<int32_t>(VehicleAreaDoor::ROW_2_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_LEFT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_2_LEFT;
    }
    if ((o & VehicleAreaDoor::ROW_2_RIGHT) == static_cast<int32_t>(VehicleAreaDoor::ROW_2_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_2_RIGHT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_2_RIGHT;
    }
    if ((o & VehicleAreaDoor::ROW_3_LEFT) == static_cast<int32_t>(VehicleAreaDoor::ROW_3_LEFT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_LEFT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_3_LEFT;
    }
    if ((o & VehicleAreaDoor::ROW_3_RIGHT) == static_cast<int32_t>(VehicleAreaDoor::ROW_3_RIGHT)) {
        os += (first ? "" : " | ");
        os += "ROW_3_RIGHT";
        first = false;
        flipped |= VehicleAreaDoor::ROW_3_RIGHT;
    }
    if ((o & VehicleAreaDoor::HOOD) == static_cast<int32_t>(VehicleAreaDoor::HOOD)) {
        os += (first ? "" : " | ");
        os += "HOOD";
        first = false;
        flipped |= VehicleAreaDoor::HOOD;
    }
    if ((o & VehicleAreaDoor::REAR) == static_cast<int32_t>(VehicleAreaDoor::REAR)) {
        os += (first ? "" : " | ");
        os += "REAR";
        first = false;
        flipped |= VehicleAreaDoor::REAR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAreaDoor o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAreaDoor::ROW_1_LEFT) {
        return "ROW_1_LEFT";
    }
    if (o == VehicleAreaDoor::ROW_1_RIGHT) {
        return "ROW_1_RIGHT";
    }
    if (o == VehicleAreaDoor::ROW_2_LEFT) {
        return "ROW_2_LEFT";
    }
    if (o == VehicleAreaDoor::ROW_2_RIGHT) {
        return "ROW_2_RIGHT";
    }
    if (o == VehicleAreaDoor::ROW_3_LEFT) {
        return "ROW_3_LEFT";
    }
    if (o == VehicleAreaDoor::ROW_3_RIGHT) {
        return "ROW_3_RIGHT";
    }
    if (o == VehicleAreaDoor::HOOD) {
        return "HOOD";
    }
    if (o == VehicleAreaDoor::REAR) {
        return "REAR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleAreaMirror>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleAreaMirror::DRIVER_LEFT) == static_cast<int32_t>(VehicleAreaMirror::DRIVER_LEFT)) {
        os += (first ? "" : " | ");
        os += "DRIVER_LEFT";
        first = false;
        flipped |= VehicleAreaMirror::DRIVER_LEFT;
    }
    if ((o & VehicleAreaMirror::DRIVER_RIGHT) == static_cast<int32_t>(VehicleAreaMirror::DRIVER_RIGHT)) {
        os += (first ? "" : " | ");
        os += "DRIVER_RIGHT";
        first = false;
        flipped |= VehicleAreaMirror::DRIVER_RIGHT;
    }
    if ((o & VehicleAreaMirror::DRIVER_CENTER) == static_cast<int32_t>(VehicleAreaMirror::DRIVER_CENTER)) {
        os += (first ? "" : " | ");
        os += "DRIVER_CENTER";
        first = false;
        flipped |= VehicleAreaMirror::DRIVER_CENTER;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleAreaMirror o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleAreaMirror::DRIVER_LEFT) {
        return "DRIVER_LEFT";
    }
    if (o == VehicleAreaMirror::DRIVER_RIGHT) {
        return "DRIVER_RIGHT";
    }
    if (o == VehicleAreaMirror::DRIVER_CENTER) {
        return "DRIVER_CENTER";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehicleTurnSignal>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleTurnSignal::NONE) == static_cast<int32_t>(VehicleTurnSignal::NONE)) {
        os += (first ? "" : " | ");
        os += "NONE";
        first = false;
        flipped |= VehicleTurnSignal::NONE;
    }
    if ((o & VehicleTurnSignal::RIGHT) == static_cast<int32_t>(VehicleTurnSignal::RIGHT)) {
        os += (first ? "" : " | ");
        os += "RIGHT";
        first = false;
        flipped |= VehicleTurnSignal::RIGHT;
    }
    if ((o & VehicleTurnSignal::LEFT) == static_cast<int32_t>(VehicleTurnSignal::LEFT)) {
        os += (first ? "" : " | ");
        os += "LEFT";
        first = false;
        flipped |= VehicleTurnSignal::LEFT;
    }
    if ((o & VehicleTurnSignal::EMERGENCY) == static_cast<int32_t>(VehicleTurnSignal::EMERGENCY)) {
        os += (first ? "" : " | ");
        os += "EMERGENCY";
        first = false;
        flipped |= VehicleTurnSignal::EMERGENCY;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleTurnSignal o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleTurnSignal::NONE) {
        return "NONE";
    }
    if (o == VehicleTurnSignal::RIGHT) {
        return "RIGHT";
    }
    if (o == VehicleTurnSignal::LEFT) {
        return "LEFT";
    }
    if (o == VehicleTurnSignal::EMERGENCY) {
        return "EMERGENCY";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

std::string toString(const VehicleAreaConfig& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".areaId = ";
    os += ::android::hardware::toString(o.areaId);
    os += ", .minInt32Value = ";
    os += ::android::hardware::toString(o.minInt32Value);
    os += ", .maxInt32Value = ";
    os += ::android::hardware::toString(o.maxInt32Value);
    os += ", .minInt64Value = ";
    os += ::android::hardware::toString(o.minInt64Value);
    os += ", .maxInt64Value = ";
    os += ::android::hardware::toString(o.maxInt64Value);
    os += ", .minFloatValue = ";
    os += ::android::hardware::toString(o.minFloatValue);
    os += ", .maxFloatValue = ";
    os += ::android::hardware::toString(o.maxFloatValue);
    os += "}"; return os;
}

bool operator==(const VehicleAreaConfig& lhs, const VehicleAreaConfig& rhs) {
    if (lhs.areaId != rhs.areaId) {
        return false;
    }
    if (lhs.minInt32Value != rhs.minInt32Value) {
        return false;
    }
    if (lhs.maxInt32Value != rhs.maxInt32Value) {
        return false;
    }
    if (lhs.minInt64Value != rhs.minInt64Value) {
        return false;
    }
    if (lhs.maxInt64Value != rhs.maxInt64Value) {
        return false;
    }
    if (lhs.minFloatValue != rhs.minFloatValue) {
        return false;
    }
    if (lhs.maxFloatValue != rhs.maxFloatValue) {
        return false;
    }
    return true;
}

bool operator!=(const VehicleAreaConfig& lhs,const VehicleAreaConfig& rhs){
    return !(lhs == rhs);
}

::android::status_t readEmbeddedFromParcel(
        const VehiclePropConfig &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_areaConfigs_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<VehicleAreaConfig> &>(obj.areaConfigs),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, areaConfigs), &_hidl_areaConfigs_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_configArray_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<int32_t> &>(obj.configArray),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, configArray), &_hidl_configArray_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_string &>(obj.configString),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, configString));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

::android::status_t writeEmbeddedToParcel(
        const VehiclePropConfig &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_areaConfigs_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.areaConfigs,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, areaConfigs), &_hidl_areaConfigs_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_configArray_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.configArray,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, configArray), &_hidl_configArray_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.configString,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropConfig, configString));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

std::string toString(const VehiclePropConfig& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".prop = ";
    os += ::android::hardware::toString(o.prop);
    os += ", .access = ";
    os += toString(o.access);
    os += ", .changeMode = ";
    os += toString(o.changeMode);
    os += ", .supportedAreas = ";
    os += ::android::hardware::toString(o.supportedAreas);
    os += ", .areaConfigs = ";
    os += ::android::hardware::toString(o.areaConfigs);
    os += ", .configFlags = ";
    os += ::android::hardware::toString(o.configFlags);
    os += ", .configArray = ";
    os += ::android::hardware::toString(o.configArray);
    os += ", .configString = ";
    os += ::android::hardware::toString(o.configString);
    os += ", .minSampleRate = ";
    os += ::android::hardware::toString(o.minSampleRate);
    os += ", .maxSampleRate = ";
    os += ::android::hardware::toString(o.maxSampleRate);
    os += "}"; return os;
}

bool operator==(const VehiclePropConfig& lhs, const VehiclePropConfig& rhs) {
    if (lhs.prop != rhs.prop) {
        return false;
    }
    if (lhs.access != rhs.access) {
        return false;
    }
    if (lhs.changeMode != rhs.changeMode) {
        return false;
    }
    if (lhs.supportedAreas != rhs.supportedAreas) {
        return false;
    }
    if (lhs.areaConfigs != rhs.areaConfigs) {
        return false;
    }
    if (lhs.configFlags != rhs.configFlags) {
        return false;
    }
    if (lhs.configArray != rhs.configArray) {
        return false;
    }
    if (lhs.configString != rhs.configString) {
        return false;
    }
    if (lhs.minSampleRate != rhs.minSampleRate) {
        return false;
    }
    if (lhs.maxSampleRate != rhs.maxSampleRate) {
        return false;
    }
    return true;
}

bool operator!=(const VehiclePropConfig& lhs,const VehiclePropConfig& rhs){
    return !(lhs == rhs);
}

::android::status_t readEmbeddedFromParcel(
        const VehiclePropValue::RawValue &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_int32Values_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<int32_t> &>(obj.int32Values),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, int32Values), &_hidl_int32Values_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_floatValues_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<float> &>(obj.floatValues),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, floatValues), &_hidl_floatValues_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_int64Values_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<int64_t> &>(obj.int64Values),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, int64Values), &_hidl_int64Values_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_bytes_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<uint8_t> &>(obj.bytes),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, bytes), &_hidl_bytes_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_string &>(obj.stringValue),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, stringValue));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

::android::status_t writeEmbeddedToParcel(
        const VehiclePropValue::RawValue &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    size_t _hidl_int32Values_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.int32Values,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, int32Values), &_hidl_int32Values_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_floatValues_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.floatValues,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, floatValues), &_hidl_floatValues_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_int64Values_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.int64Values,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, int64Values), &_hidl_int64Values_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_bytes_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.bytes,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, bytes), &_hidl_bytes_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            obj.stringValue,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue::RawValue, stringValue));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

std::string toString(const VehiclePropValue::RawValue& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".int32Values = ";
    os += ::android::hardware::toString(o.int32Values);
    os += ", .floatValues = ";
    os += ::android::hardware::toString(o.floatValues);
    os += ", .int64Values = ";
    os += ::android::hardware::toString(o.int64Values);
    os += ", .bytes = ";
    os += ::android::hardware::toString(o.bytes);
    os += ", .stringValue = ";
    os += ::android::hardware::toString(o.stringValue);
    os += "}"; return os;
}

bool operator==(const VehiclePropValue::RawValue& lhs, const VehiclePropValue::RawValue& rhs) {
    if (lhs.int32Values != rhs.int32Values) {
        return false;
    }
    if (lhs.floatValues != rhs.floatValues) {
        return false;
    }
    if (lhs.int64Values != rhs.int64Values) {
        return false;
    }
    if (lhs.bytes != rhs.bytes) {
        return false;
    }
    if (lhs.stringValue != rhs.stringValue) {
        return false;
    }
    return true;
}

bool operator!=(const VehiclePropValue::RawValue& lhs,const VehiclePropValue::RawValue& rhs){
    return !(lhs == rhs);
}

::android::status_t readEmbeddedFromParcel(
        const VehiclePropValue &obj,
        const ::android::hardware::Parcel &parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    _hidl_err = readEmbeddedFromParcel(
            const_cast<VehiclePropValue::RawValue &>(obj.value),
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue, value));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

::android::status_t writeEmbeddedToParcel(
        const VehiclePropValue &obj,
        ::android::hardware::Parcel *parcel,
        size_t parentHandle,
        size_t parentOffset) {
    ::android::status_t _hidl_err = ::android::OK;

    _hidl_err = writeEmbeddedToParcel(
            obj.value,
            parcel,
            parentHandle,
            parentOffset + offsetof(VehiclePropValue, value));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    return _hidl_err;
}

std::string toString(const VehiclePropValue& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".prop = ";
    os += ::android::hardware::toString(o.prop);
    os += ", .timestamp = ";
    os += ::android::hardware::toString(o.timestamp);
    os += ", .areaId = ";
    os += ::android::hardware::toString(o.areaId);
    os += ", .value = ";
    os += toString(o.value);
    os += "}"; return os;
}

bool operator==(const VehiclePropValue& lhs, const VehiclePropValue& rhs) {
    if (lhs.prop != rhs.prop) {
        return false;
    }
    if (lhs.timestamp != rhs.timestamp) {
        return false;
    }
    if (lhs.areaId != rhs.areaId) {
        return false;
    }
    if (lhs.value != rhs.value) {
        return false;
    }
    return true;
}

bool operator!=(const VehiclePropValue& lhs,const VehiclePropValue& rhs){
    return !(lhs == rhs);
}

template<>
std::string toString<VehicleIgnitionState>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehicleIgnitionState::UNDEFINED) == static_cast<int32_t>(VehicleIgnitionState::UNDEFINED)) {
        os += (first ? "" : " | ");
        os += "UNDEFINED";
        first = false;
        flipped |= VehicleIgnitionState::UNDEFINED;
    }
    if ((o & VehicleIgnitionState::LOCK) == static_cast<int32_t>(VehicleIgnitionState::LOCK)) {
        os += (first ? "" : " | ");
        os += "LOCK";
        first = false;
        flipped |= VehicleIgnitionState::LOCK;
    }
    if ((o & VehicleIgnitionState::OFF) == static_cast<int32_t>(VehicleIgnitionState::OFF)) {
        os += (first ? "" : " | ");
        os += "OFF";
        first = false;
        flipped |= VehicleIgnitionState::OFF;
    }
    if ((o & VehicleIgnitionState::ACC) == static_cast<int32_t>(VehicleIgnitionState::ACC)) {
        os += (first ? "" : " | ");
        os += "ACC";
        first = false;
        flipped |= VehicleIgnitionState::ACC;
    }
    if ((o & VehicleIgnitionState::ON) == static_cast<int32_t>(VehicleIgnitionState::ON)) {
        os += (first ? "" : " | ");
        os += "ON";
        first = false;
        flipped |= VehicleIgnitionState::ON;
    }
    if ((o & VehicleIgnitionState::START) == static_cast<int32_t>(VehicleIgnitionState::START)) {
        os += (first ? "" : " | ");
        os += "START";
        first = false;
        flipped |= VehicleIgnitionState::START;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehicleIgnitionState o) {
    using ::android::hardware::details::toHexString;
    if (o == VehicleIgnitionState::UNDEFINED) {
        return "UNDEFINED";
    }
    if (o == VehicleIgnitionState::LOCK) {
        return "LOCK";
    }
    if (o == VehicleIgnitionState::OFF) {
        return "OFF";
    }
    if (o == VehicleIgnitionState::ACC) {
        return "ACC";
    }
    if (o == VehicleIgnitionState::ON) {
        return "ON";
    }
    if (o == VehicleIgnitionState::START) {
        return "START";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<VehiclePropertyOperation>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & VehiclePropertyOperation::GENERIC) == static_cast<int32_t>(VehiclePropertyOperation::GENERIC)) {
        os += (first ? "" : " | ");
        os += "GENERIC";
        first = false;
        flipped |= VehiclePropertyOperation::GENERIC;
    }
    if ((o & VehiclePropertyOperation::SET) == static_cast<int32_t>(VehiclePropertyOperation::SET)) {
        os += (first ? "" : " | ");
        os += "SET";
        first = false;
        flipped |= VehiclePropertyOperation::SET;
    }
    if ((o & VehiclePropertyOperation::GET) == static_cast<int32_t>(VehiclePropertyOperation::GET)) {
        os += (first ? "" : " | ");
        os += "GET";
        first = false;
        flipped |= VehiclePropertyOperation::GET;
    }
    if ((o & VehiclePropertyOperation::SUBSCRIBE) == static_cast<int32_t>(VehiclePropertyOperation::SUBSCRIBE)) {
        os += (first ? "" : " | ");
        os += "SUBSCRIBE";
        first = false;
        flipped |= VehiclePropertyOperation::SUBSCRIBE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(VehiclePropertyOperation o) {
    using ::android::hardware::details::toHexString;
    if (o == VehiclePropertyOperation::GENERIC) {
        return "GENERIC";
    }
    if (o == VehiclePropertyOperation::SET) {
        return "SET";
    }
    if (o == VehiclePropertyOperation::GET) {
        return "GET";
    }
    if (o == VehiclePropertyOperation::SUBSCRIBE) {
        return "SUBSCRIBE";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<SubscribeFlags>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & SubscribeFlags::UNDEFINED) == static_cast<int32_t>(SubscribeFlags::UNDEFINED)) {
        os += (first ? "" : " | ");
        os += "UNDEFINED";
        first = false;
        flipped |= SubscribeFlags::UNDEFINED;
    }
    if ((o & SubscribeFlags::HAL_EVENT) == static_cast<int32_t>(SubscribeFlags::HAL_EVENT)) {
        os += (first ? "" : " | ");
        os += "HAL_EVENT";
        first = false;
        flipped |= SubscribeFlags::HAL_EVENT;
    }
    if ((o & SubscribeFlags::SET_CALL) == static_cast<int32_t>(SubscribeFlags::SET_CALL)) {
        os += (first ? "" : " | ");
        os += "SET_CALL";
        first = false;
        flipped |= SubscribeFlags::SET_CALL;
    }
    if ((o & SubscribeFlags::DEFAULT) == static_cast<int32_t>(SubscribeFlags::DEFAULT)) {
        os += (first ? "" : " | ");
        os += "DEFAULT";
        first = false;
        flipped |= SubscribeFlags::DEFAULT;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(SubscribeFlags o) {
    using ::android::hardware::details::toHexString;
    if (o == SubscribeFlags::UNDEFINED) {
        return "UNDEFINED";
    }
    if (o == SubscribeFlags::HAL_EVENT) {
        return "HAL_EVENT";
    }
    if (o == SubscribeFlags::SET_CALL) {
        return "SET_CALL";
    }
    if (o == SubscribeFlags::DEFAULT) {
        return "DEFAULT";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

std::string toString(const SubscribeOptions& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".propId = ";
    os += ::android::hardware::toString(o.propId);
    os += ", .vehicleAreas = ";
    os += ::android::hardware::toString(o.vehicleAreas);
    os += ", .sampleRate = ";
    os += ::android::hardware::toString(o.sampleRate);
    os += ", .flags = ";
    os += toString(o.flags);
    os += "}"; return os;
}

bool operator==(const SubscribeOptions& lhs, const SubscribeOptions& rhs) {
    if (lhs.propId != rhs.propId) {
        return false;
    }
    if (lhs.vehicleAreas != rhs.vehicleAreas) {
        return false;
    }
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.flags != rhs.flags) {
        return false;
    }
    return true;
}

bool operator!=(const SubscribeOptions& lhs,const SubscribeOptions& rhs){
    return !(lhs == rhs);
}

template<>
std::string toString<StatusCode>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & StatusCode::OK) == static_cast<int32_t>(StatusCode::OK)) {
        os += (first ? "" : " | ");
        os += "OK";
        first = false;
        flipped |= StatusCode::OK;
    }
    if ((o & StatusCode::TRY_AGAIN) == static_cast<int32_t>(StatusCode::TRY_AGAIN)) {
        os += (first ? "" : " | ");
        os += "TRY_AGAIN";
        first = false;
        flipped |= StatusCode::TRY_AGAIN;
    }
    if ((o & StatusCode::INVALID_ARG) == static_cast<int32_t>(StatusCode::INVALID_ARG)) {
        os += (first ? "" : " | ");
        os += "INVALID_ARG";
        first = false;
        flipped |= StatusCode::INVALID_ARG;
    }
    if ((o & StatusCode::NOT_AVAILABLE) == static_cast<int32_t>(StatusCode::NOT_AVAILABLE)) {
        os += (first ? "" : " | ");
        os += "NOT_AVAILABLE";
        first = false;
        flipped |= StatusCode::NOT_AVAILABLE;
    }
    if ((o & StatusCode::ACCESS_DENIED) == static_cast<int32_t>(StatusCode::ACCESS_DENIED)) {
        os += (first ? "" : " | ");
        os += "ACCESS_DENIED";
        first = false;
        flipped |= StatusCode::ACCESS_DENIED;
    }
    if ((o & StatusCode::INTERNAL_ERROR) == static_cast<int32_t>(StatusCode::INTERNAL_ERROR)) {
        os += (first ? "" : " | ");
        os += "INTERNAL_ERROR";
        first = false;
        flipped |= StatusCode::INTERNAL_ERROR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(StatusCode o) {
    using ::android::hardware::details::toHexString;
    if (o == StatusCode::OK) {
        return "OK";
    }
    if (o == StatusCode::TRY_AGAIN) {
        return "TRY_AGAIN";
    }
    if (o == StatusCode::INVALID_ARG) {
        return "INVALID_ARG";
    }
    if (o == StatusCode::NOT_AVAILABLE) {
        return "NOT_AVAILABLE";
    }
    if (o == StatusCode::ACCESS_DENIED) {
        return "ACCESS_DENIED";
    }
    if (o == StatusCode::INTERNAL_ERROR) {
        return "INTERNAL_ERROR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

template<>
std::string toString<Wheel>(int32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    int32_t flipped = 0;
    bool first = true;
    if ((o & Wheel::UNKNOWN) == static_cast<int32_t>(Wheel::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= Wheel::UNKNOWN;
    }
    if ((o & Wheel::LEFT_FRONT) == static_cast<int32_t>(Wheel::LEFT_FRONT)) {
        os += (first ? "" : " | ");
        os += "LEFT_FRONT";
        first = false;
        flipped |= Wheel::LEFT_FRONT;
    }
    if ((o & Wheel::RIGHT_FRONT) == static_cast<int32_t>(Wheel::RIGHT_FRONT)) {
        os += (first ? "" : " | ");
        os += "RIGHT_FRONT";
        first = false;
        flipped |= Wheel::RIGHT_FRONT;
    }
    if ((o & Wheel::LEFT_REAR) == static_cast<int32_t>(Wheel::LEFT_REAR)) {
        os += (first ? "" : " | ");
        os += "LEFT_REAR";
        first = false;
        flipped |= Wheel::LEFT_REAR;
    }
    if ((o & Wheel::RIGHT_REAR) == static_cast<int32_t>(Wheel::RIGHT_REAR)) {
        os += (first ? "" : " | ");
        os += "RIGHT_REAR";
        first = false;
        flipped |= Wheel::RIGHT_REAR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

std::string toString(Wheel o) {
    using ::android::hardware::details::toHexString;
    if (o == Wheel::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == Wheel::LEFT_FRONT) {
        return "LEFT_FRONT";
    }
    if (o == Wheel::RIGHT_FRONT) {
        return "RIGHT_FRONT";
    }
    if (o == Wheel::LEFT_REAR) {
        return "LEFT_REAR";
    }
    if (o == Wheel::RIGHT_REAR) {
        return "RIGHT_REAR";
    }
    std::string os;
    os += toHexString(static_cast<int32_t>(o));
    return os;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_0
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android
