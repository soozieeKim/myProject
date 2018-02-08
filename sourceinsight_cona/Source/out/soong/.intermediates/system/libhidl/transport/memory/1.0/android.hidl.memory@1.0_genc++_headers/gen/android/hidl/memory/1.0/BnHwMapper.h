#ifndef HIDL_GENERATED_ANDROID_HIDL_MEMORY_V1_0_BNHWMAPPER_H
#define HIDL_GENERATED_ANDROID_HIDL_MEMORY_V1_0_BNHWMAPPER_H

#include <android/hidl/memory/1.0/IHwMapper.h>

namespace android {
namespace hidl {
namespace memory {
namespace V1_0 {

struct BnHwMapper : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwMapper(const ::android::sp<IMapper> &_hidl_impl);
    explicit BnHwMapper(const ::android::sp<IMapper> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;

    ::android::sp<IMapper> getImpl() { return _hidl_mImpl; };
private:
    // Methods from IMapper follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IMapper> _hidl_mImpl;
};

}  // namespace V1_0
}  // namespace memory
}  // namespace hidl
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HIDL_MEMORY_V1_0_BNHWMAPPER_H
