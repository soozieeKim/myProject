#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BNHWVEHICLECALLBACK_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BNHWVEHICLECALLBACK_H

#include <android/hardware/automotive/vehicle/2.0/IHwVehicleCallback.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

struct BnHwVehicleCallback : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwVehicleCallback(const ::android::sp<IVehicleCallback> &_hidl_impl);
    explicit BnHwVehicleCallback(const ::android::sp<IVehicleCallback> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;

    ::android::sp<IVehicleCallback> getImpl() { return _hidl_mImpl; };
private:
    // Methods from IVehicleCallback follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IVehicleCallback> _hidl_mImpl;
};

}  // namespace V2_0
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BNHWVEHICLECALLBACK_H
