#define LOG_TAG "android.hardware.automotive.vehicle@2.0::VehicleCallback"

#include <android/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <android/hidl/manager/1.0/IServiceManager.h>
#include <hidl/LegacySupport.h>
#include <android/hardware/automotive/vehicle/2.0/BpHwVehicleCallback.h>
#include <android/hardware/automotive/vehicle/2.0/BnHwVehicleCallback.h>
#include <android/hardware/automotive/vehicle/2.0/BsVehicleCallback.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

std::string toString(const ::android::sp<IVehicleCallback>& o) {
    std::string os;
    auto ret = o->interfaceDescriptor([&os] (const auto &name) {
        os += name.c_str();
    });
    if (!ret.isOk()) {
        os += "[class or subclass of ";
        os += IVehicleCallback::descriptor;
        os += "]";
    }
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}

const char* IVehicleCallback::descriptor("android.hardware.automotive.vehicle@2.0::IVehicleCallback");

__attribute__((constructor))static void static_constructor() {
    ::android::hardware::details::gBnConstructorMap.set(IVehicleCallback::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwVehicleCallback(static_cast<IVehicleCallback *>(iIntf));
            });
    ::android::hardware::details::gBsConstructorMap.set(IVehicleCallback::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsVehicleCallback(static_cast<IVehicleCallback *>(iIntf));
            });
};

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::gBnConstructorMap.erase(IVehicleCallback::descriptor);
    ::android::hardware::details::gBsConstructorMap.erase(IVehicleCallback::descriptor);
};

// Methods from IVehicleCallback follow.
// no default implementation for: ::android::hardware::Return<void> IVehicleCallback::onPropertyEvent(const ::android::hardware::hidl_vec<VehiclePropValue>& propValues)
// no default implementation for: ::android::hardware::Return<void> IVehicleCallback::onPropertySet(const VehiclePropValue& propValue)
// no default implementation for: ::android::hardware::Return<void> IVehicleCallback::onPropertySetError(StatusCode errorCode, int32_t propId, int32_t areaId)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IVehicleCallback::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        IVehicleCallback::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicleCallback::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicleCallback::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(IVehicleCallback::descriptor);
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicleCallback::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){128,251,65,86,250,145,206,134,228,155,210,202,190,33,80,120,246,182,149,145,212,22,160,158,145,69,50,234,230,113,32,82} /* 80fb4156fa91ce86e49bd2cabe215078f6b69591d416a09e914532eae6712052 */,
        (uint8_t[32]){189,218,182,24,77,122,52,109,166,160,125,192,130,140,241,154,105,111,76,170,54,17,197,31,46,20,86,90,20,180,15,217} /* bddab6184d7a346da6a07dc0828cf19a696f4caa3611c51f2e14565a14b40fd9 */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IVehicleCallback::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IVehicleCallback::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IVehicleCallback::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IVehicleCallback::getDebugInfo(getDebugInfo_cb _hidl_cb){
    _hidl_cb({ -1 /* pid */, 0 /* ptr */, 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicleCallback::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();}

::android::hardware::Return<bool> IVehicleCallback::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


// static 
::android::hardware::Return<::android::sp<IVehicleCallback>> IVehicleCallback::castFrom(const ::android::sp<IVehicleCallback>& parent, bool /* emitError */) {
    return parent;
}

// static 
::android::hardware::Return<::android::sp<IVehicleCallback>> IVehicleCallback::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IVehicleCallback, ::android::hidl::base::V1_0::IBase, BpHwVehicleCallback, ::android::hidl::base::V1_0::BpHwBase>(
            parent, "android.hardware.automotive.vehicle@2.0::IVehicleCallback", emitError);
}

BpHwVehicleCallback::BpHwVehicleCallback(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IVehicleCallback>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.automotive.vehicle@2.0", "IVehicleCallback") {
}

// Methods from IVehicleCallback follow.
::android::hardware::Return<void> BpHwVehicleCallback::onPropertyEvent(const ::android::hardware::hidl_vec<VehiclePropValue>& propValues) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertyEvent::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&propValues);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertyEvent", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicleCallback::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_propValues_parent;

    _hidl_err = _hidl_data.writeBuffer(&propValues, sizeof(propValues), &_hidl_propValues_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_propValues_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            propValues,
            &_hidl_data,
            _hidl_propValues_parent,
            0 /* parentOffset */, &_hidl_propValues_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < propValues.size(); ++_hidl_index_0) {
        _hidl_err = writeEmbeddedToParcel(
                propValues[_hidl_index_0],
                &_hidl_data,
                _hidl_propValues_child,
                _hidl_index_0 * sizeof(VehiclePropValue));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_err = remote()->transact(1 /* onPropertyEvent */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertyEvent", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::onPropertySet(const VehiclePropValue& propValue) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertySet::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&propValue);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySet", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicleCallback::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_propValue_parent;

    _hidl_err = _hidl_data.writeBuffer(&propValue, sizeof(propValue), &_hidl_propValue_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = writeEmbeddedToParcel(
            propValue,
            &_hidl_data,
            _hidl_propValue_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(2 /* onPropertySet */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySet", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::onPropertySetError(StatusCode errorCode, int32_t propId, int32_t areaId) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertySetError::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&errorCode);
        _hidl_args.push_back((void *)&propId);
        _hidl_args.push_back((void *)&areaId);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySetError", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicleCallback::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32((int32_t)errorCode);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32(propId);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32(areaId);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(3 /* onPropertySetError */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySetError", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwVehicleCallback::interfaceChain(interfaceChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::interfaceChain::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceChain", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_vec<::android::hardware::hidl_string>* _hidl_out_descriptors;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256067662 /* interfaceChain */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_descriptors_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_descriptors), &_hidl__hidl_out_descriptors_parent,  reinterpret_cast<const void **>(&_hidl_out_descriptors));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_descriptors_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<::android::hardware::hidl_string> &>(*_hidl_out_descriptors),
            _hidl_reply,
            _hidl__hidl_out_descriptors_parent,
            0 /* parentOffset */, &_hidl__hidl_out_descriptors_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_descriptors->size(); ++_hidl_index_0) {
        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::hidl_string &>((*_hidl_out_descriptors)[_hidl_index_0]),
                _hidl_reply,
                _hidl__hidl_out_descriptors_child,
                _hidl_index_0 * sizeof(::android::hardware::hidl_string));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_cb(*_hidl_out_descriptors);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_descriptors);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceChain", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::debug::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&fd);
        _hidl_args.push_back((void *)&options);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "debug", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeNativeHandleNoDup(fd);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_options_parent;

    _hidl_err = _hidl_data.writeBuffer(&options, sizeof(options), &_hidl_options_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_options_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            options,
            &_hidl_data,
            _hidl_options_parent,
            0 /* parentOffset */, &_hidl_options_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < options.size(); ++_hidl_index_0) {
        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                options[_hidl_index_0],
                &_hidl_data,
                _hidl_options_child,
                _hidl_index_0 * sizeof(::android::hardware::hidl_string));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_err = remote()->transact(256131655 /* debug */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "debug", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::interfaceDescriptor::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceDescriptor", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_string* _hidl_out_descriptor;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256136003 /* interfaceDescriptor */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_descriptor_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_descriptor), &_hidl__hidl_out_descriptor_parent,  reinterpret_cast<const void **>(&_hidl_out_descriptor));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_string &>(*_hidl_out_descriptor),
            _hidl_reply,
            _hidl__hidl_out_descriptor_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(*_hidl_out_descriptor);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_descriptor);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceDescriptor", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::getHashChain(getHashChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::getHashChain::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getHashChain", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>* _hidl_out_hashchain;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256398152 /* getHashChain */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_hashchain_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_hashchain), &_hidl__hidl_out_hashchain_parent,  reinterpret_cast<const void **>(&_hidl_out_hashchain));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_hashchain_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>> &>(*_hidl_out_hashchain),
            _hidl_reply,
            _hidl__hidl_out_hashchain_parent,
            0 /* parentOffset */, &_hidl__hidl_out_hashchain_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(*_hidl_out_hashchain);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_hashchain);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getHashChain", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::setHALInstrumentation() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::setHALInstrumentation::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "setHALInstrumentation", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256462420 /* setHALInstrumentation */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "setHALInstrumentation", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwVehicleCallback::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwVehicleCallback::ping() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::ping::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "ping", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256921159 /* ping */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "ping", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::getDebugInfo::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getDebugInfo", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hidl::base::V1_0::DebugInfo* _hidl_out_info;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(257049926 /* getDebugInfo */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_info_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_info), &_hidl__hidl_out_info_parent,  reinterpret_cast<const void **>(&_hidl_out_info));
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(*_hidl_out_info);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_info);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getDebugInfo", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicleCallback::notifySyspropsChanged() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::notifySyspropsChanged::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "notifySyspropsChanged", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(257120595 /* notifySyspropsChanged */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "notifySyspropsChanged", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwVehicleCallback::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.begin();it != _hidl_mDeathRecipients.end();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it);
            return status == ::android::OK;
        }}
    return false;
}


BnHwVehicleCallback::BnHwVehicleCallback(const ::android::sp<IVehicleCallback> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.automotive.vehicle@2.0", "IVehicleCallback") { 
            _hidl_mImpl = _hidl_impl;
}

// Methods from IVehicleCallback follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwVehicleCallback::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwVehicleCallback::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    _hidl_cb({
        ::android::hardware::details::debuggable()? getpid() : -1 /* pid */,
        ::android::hardware::details::debuggable()? reinterpret_cast<uint64_t>(this) : 0 /* ptr */,
        #if defined(__LP64__)
        ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
        #else
        ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
        #endif

    });
    return ::android::hardware::Void();}

::android::status_t BnHwVehicleCallback::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* onPropertyEvent */:
        {
            if (!_hidl_data.enforceInterface(IVehicleCallback::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const ::android::hardware::hidl_vec<VehiclePropValue>* propValues;

            size_t _hidl_propValues_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*propValues), &_hidl_propValues_parent,  reinterpret_cast<const void **>(&propValues));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_propValues_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<VehiclePropValue> &>(*propValues),
                    _hidl_data,
                    _hidl_propValues_parent,
                    0 /* parentOffset */, &_hidl_propValues_child);

            if (_hidl_err != ::android::OK) { break; }

            for (size_t _hidl_index_0 = 0; _hidl_index_0 < propValues->size(); ++_hidl_index_0) {
                _hidl_err = readEmbeddedFromParcel(
                        const_cast<VehiclePropValue &>((*propValues)[_hidl_index_0]),
                        _hidl_data,
                        _hidl_propValues_child,
                        _hidl_index_0 * sizeof(VehiclePropValue));

                if (_hidl_err != ::android::OK) { break; }

            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertyEvent::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)propValues);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertyEvent", &_hidl_args);
                }
            }

            _hidl_mImpl->onPropertyEvent(*propValues);

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertyEvent", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 2 /* onPropertySet */:
        {
            if (!_hidl_data.enforceInterface(IVehicleCallback::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const VehiclePropValue* propValue;

            size_t _hidl_propValue_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*propValue), &_hidl_propValue_parent,  reinterpret_cast<const void **>(&propValue));
            if (_hidl_err != ::android::OK) { break; }

            _hidl_err = readEmbeddedFromParcel(
                    const_cast<VehiclePropValue &>(*propValue),
                    _hidl_data,
                    _hidl_propValue_parent,
                    0 /* parentOffset */);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertySet::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)propValue);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySet", &_hidl_args);
                }
            }

            _hidl_mImpl->onPropertySet(*propValue);

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySet", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 3 /* onPropertySetError */:
        {
            if (!_hidl_data.enforceInterface(IVehicleCallback::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            StatusCode errorCode;
            int32_t propId;
            int32_t areaId;

            _hidl_err = _hidl_data.readInt32((int32_t *)&errorCode);
            if (_hidl_err != ::android::OK) { break; }

            _hidl_err = _hidl_data.readInt32(&propId);
            if (_hidl_err != ::android::OK) { break; }

            _hidl_err = _hidl_data.readInt32(&areaId);
            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::onPropertySetError::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&errorCode);
                _hidl_args.push_back((void *)&propId);
                _hidl_args.push_back((void *)&areaId);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySetError", &_hidl_args);
                }
            }

            _hidl_mImpl->onPropertySetError(errorCode, propId, areaId);

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "onPropertySetError", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 256067662 /* interfaceChain */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::interfaceChain::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceChain", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->interfaceChain([&](const auto &_hidl_out_descriptors) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("interfaceChain: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_descriptors_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_descriptors, sizeof(_hidl_out_descriptors), &_hidl__hidl_out_descriptors_parent);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_descriptors_child;

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_descriptors,
                        _hidl_reply,
                        _hidl__hidl_out_descriptors_parent,
                        0 /* parentOffset */, &_hidl__hidl_out_descriptors_child);

                /* _hidl_err ignored! */

                for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_descriptors.size(); ++_hidl_index_0) {
                    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                            _hidl_out_descriptors[_hidl_index_0],
                            _hidl_reply,
                            _hidl__hidl_out_descriptors_child,
                            _hidl_index_0 * sizeof(::android::hardware::hidl_string));

                    /* _hidl_err ignored! */

                }

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_descriptors);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceChain", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("interfaceChain: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 256131655 /* debug */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            ::android::hardware::hidl_handle fd;
            const ::android::hardware::hidl_vec<::android::hardware::hidl_string>* options;

            const native_handle_t *fd_ptr;

            _hidl_err = _hidl_data.readNullableNativeHandleNoDup(&fd_ptr);

            if (_hidl_err != ::android::OK) { break; }

            fd = fd_ptr;
            size_t _hidl_options_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*options), &_hidl_options_parent,  reinterpret_cast<const void **>(&options));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_options_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<::android::hardware::hidl_string> &>(*options),
                    _hidl_data,
                    _hidl_options_parent,
                    0 /* parentOffset */, &_hidl_options_child);

            if (_hidl_err != ::android::OK) { break; }

            for (size_t _hidl_index_0 = 0; _hidl_index_0 < options->size(); ++_hidl_index_0) {
                _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                        const_cast<::android::hardware::hidl_string &>((*options)[_hidl_index_0]),
                        _hidl_data,
                        _hidl_options_child,
                        _hidl_index_0 * sizeof(::android::hardware::hidl_string));

                if (_hidl_err != ::android::OK) { break; }

            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::debug::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&fd);
                _hidl_args.push_back((void *)options);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "debug", &_hidl_args);
                }
            }

            _hidl_mImpl->debug(fd, *options);

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "debug", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 256136003 /* interfaceDescriptor */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::interfaceDescriptor::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceDescriptor", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->interfaceDescriptor([&](const auto &_hidl_out_descriptor) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("interfaceDescriptor: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_descriptor_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_descriptor, sizeof(_hidl_out_descriptor), &_hidl__hidl_out_descriptor_parent);
                /* _hidl_err ignored! */

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_descriptor,
                        _hidl_reply,
                        _hidl__hidl_out_descriptor_parent,
                        0 /* parentOffset */);

                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_descriptor);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "interfaceDescriptor", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("interfaceDescriptor: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 256398152 /* getHashChain */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::getHashChain::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getHashChain", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->getHashChain([&](const auto &_hidl_out_hashchain) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("getHashChain: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_hashchain_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_hashchain, sizeof(_hidl_out_hashchain), &_hidl__hidl_out_hashchain_parent);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_hashchain_child;

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_hashchain,
                        _hidl_reply,
                        _hidl__hidl_out_hashchain_parent,
                        0 /* parentOffset */, &_hidl__hidl_out_hashchain_child);

                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_hashchain);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getHashChain", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("getHashChain: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 256462420 /* setHALInstrumentation */:
        {
            configureInstrumentation();
            break;
        }

        case 256660548 /* linkToDeath */:
        {
            break;
        }

        case 256921159 /* ping */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::ping::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "ping", &_hidl_args);
                }
            }

            this->ping();

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "ping", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 257049926 /* getDebugInfo */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::getDebugInfo::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getDebugInfo", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            this->getDebugInfo([&](const auto &_hidl_out_info) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("getDebugInfo: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_info_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_info, sizeof(_hidl_out_info), &_hidl__hidl_out_info_parent);
                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_info);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "getDebugInfo", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("getDebugInfo: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 257120595 /* notifySyspropsChanged */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicleCallback::notifySyspropsChanged::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "notifySyspropsChanged", &_hidl_args);
                }
            }

            _hidl_mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicleCallback", "notifySyspropsChanged", &_hidl_args);
                }
            }

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 257250372 /* unlinkToDeath */:
        {
            break;
        }

        default:
        {
            return onTransact(
                    _hidl_code, _hidl_data, _hidl_reply, _hidl_flags, _hidl_cb);
        }
    }

    if (_hidl_err == ::android::UNEXPECTED_NULL) {
        _hidl_err = ::android::hardware::writeToParcel(
                ::android::hardware::Status::fromExceptionCode(::android::hardware::Status::EX_NULL_POINTER),
                _hidl_reply);
    }return _hidl_err;
}

BsVehicleCallback::BsVehicleCallback(const ::android::sp<IVehicleCallback> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.automotive.vehicle@2.0", "IVehicleCallback"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsVehicleCallback::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED);
    }
    return ::android::hardware::Status();
}

// static
::android::sp<IVehicleCallback> IVehicleCallback::tryGetService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IVehicleCallback> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IVehicleCallback::descriptor, serviceName);

    if (!transportRet.isOk()) {
        ALOGE("getService: defaultServiceManager()->getTransport returns %s", transportRet.description().c_str());
        return nullptr;
    }
    Transport transport = transportRet;
    const bool vintfHwbinder = (transport == Transport::HWBINDER);
    const bool vintfPassthru = (transport == Transport::PASSTHROUGH);
    const bool vintfEmpty    = (transport == Transport::EMPTY);

    bool tried = false;
    while (!getStub && (vintfHwbinder || (vintfEmpty && !tried))) {
        if (tried) {
            ALOGI("getService: retrying in 1s...");
            sleep(1);
        }
        tried = true;
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(IVehicleCallback::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("getService: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            ALOGW("getService: found null hwbinder interface");
            break;
        }
        Return<sp<IVehicleCallback>> castRet = IVehicleCallback::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("getService: found dead hwbinder service");
                break;
            } else {
                ALOGW("getService: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("getService: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfEmpty) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(IVehicleCallback::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsVehicleCallback(IVehicleCallback::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

// static
::android::sp<IVehicleCallback> IVehicleCallback::getService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IVehicleCallback> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IVehicleCallback::descriptor, serviceName);

    if (!transportRet.isOk()) {
        ALOGE("getService: defaultServiceManager()->getTransport returns %s", transportRet.description().c_str());
        return nullptr;
    }
    Transport transport = transportRet;
    const bool vintfHwbinder = (transport == Transport::HWBINDER);
    const bool vintfPassthru = (transport == Transport::PASSTHROUGH);
    const bool vintfEmpty    = (transport == Transport::EMPTY);

    bool tried = false;
    while (!getStub && (vintfHwbinder || (vintfEmpty && !tried))) {
        if (tried) {
            ALOGI("getService: retrying in 1s...");
            sleep(1);
        }
        tried = true;
        if (vintfHwbinder) {
            waitForHwService(IVehicleCallback::descriptor, serviceName);
        }
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(IVehicleCallback::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("getService: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            ALOGW("getService: found null hwbinder interface");
            continue;
        }
        Return<sp<IVehicleCallback>> castRet = IVehicleCallback::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("getService: found dead hwbinder service");
                continue;
            } else {
                ALOGW("getService: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("getService: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfEmpty) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(IVehicleCallback::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsVehicleCallback(IVehicleCallback::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

::android::status_t IVehicleCallback::registerAsService(const std::string &serviceName) {
    ::android::hardware::details::onRegistration("android.hardware.automotive.vehicle@2.0", "IVehicleCallback", serviceName);

    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return ::android::INVALID_OPERATION;
    }
    ::android::hardware::Return<bool> ret = sm->add(serviceName.c_str(), this);
    return ret.isOk() && ret ? ::android::OK : ::android::UNKNOWN_ERROR;
}

bool IVehicleCallback::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.automotive.vehicle@2.0::IVehicleCallback",
                    serviceName, notification);
    return success.isOk() && success;
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
