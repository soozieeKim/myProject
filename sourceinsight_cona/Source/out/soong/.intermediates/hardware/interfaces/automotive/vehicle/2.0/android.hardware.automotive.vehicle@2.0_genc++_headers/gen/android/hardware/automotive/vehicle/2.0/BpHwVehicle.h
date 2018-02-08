#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BPHWVEHICLE_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BPHWVEHICLE_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/automotive/vehicle/2.0/IHwVehicle.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

struct BpHwVehicle : public ::android::hardware::BpInterface<IVehicle>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwVehicle(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    virtual bool isRemote() const override { return true; }

    // Methods from IVehicle follow.
    ::android::hardware::Return<void> getAllPropConfigs(getAllPropConfigs_cb _hidl_cb) override;
    ::android::hardware::Return<void> getPropConfigs(const ::android::hardware::hidl_vec<int32_t>& props, getPropConfigs_cb _hidl_cb) override;
    ::android::hardware::Return<void> get(const VehiclePropValue& requestedPropValue, get_cb _hidl_cb) override;
    ::android::hardware::Return<StatusCode> set(const VehiclePropValue& propValue) override;
    ::android::hardware::Return<StatusCode> subscribe(const ::android::sp<IVehicleCallback>& callback, const ::android::hardware::hidl_vec<SubscribeOptions>& options) override;
    ::android::hardware::Return<StatusCode> unsubscribe(const ::android::sp<IVehicleCallback>& callback, int32_t propId) override;
    ::android::hardware::Return<void> debugDump(debugDump_cb _hidl_cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> setHALInstrumentation() override;
    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;
    ::android::hardware::Return<void> ping() override;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;
    ::android::hardware::Return<void> notifySyspropsChanged() override;
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

private:
    std::mutex _hidl_mMutex;
    std::vector<::android::sp<::android::hardware::hidl_binder_death_recipient>> _hidl_mDeathRecipients;
};

}  // namespace V2_0
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BPHWVEHICLE_H
