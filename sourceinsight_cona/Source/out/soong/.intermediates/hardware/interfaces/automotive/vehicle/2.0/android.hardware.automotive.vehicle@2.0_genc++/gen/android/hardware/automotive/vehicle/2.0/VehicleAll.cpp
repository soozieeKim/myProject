#define LOG_TAG "android.hardware.automotive.vehicle@2.0::Vehicle"

#include <android/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <android/hidl/manager/1.0/IServiceManager.h>
#include <hidl/LegacySupport.h>
#include <android/hardware/automotive/vehicle/2.0/BpHwVehicle.h>
#include <android/hardware/automotive/vehicle/2.0/BnHwVehicle.h>
#include <android/hardware/automotive/vehicle/2.0/BsVehicle.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

std::string toString(const ::android::sp<IVehicle>& o) {
    std::string os;
    auto ret = o->interfaceDescriptor([&os] (const auto &name) {
        os += name.c_str();
    });
    if (!ret.isOk()) {
        os += "[class or subclass of ";
        os += IVehicle::descriptor;
        os += "]";
    }
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}

const char* IVehicle::descriptor("android.hardware.automotive.vehicle@2.0::IVehicle");

__attribute__((constructor))static void static_constructor() {
    ::android::hardware::details::gBnConstructorMap.set(IVehicle::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwVehicle(static_cast<IVehicle *>(iIntf));
            });
    ::android::hardware::details::gBsConstructorMap.set(IVehicle::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsVehicle(static_cast<IVehicle *>(iIntf));
            });
};

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::gBnConstructorMap.erase(IVehicle::descriptor);
    ::android::hardware::details::gBsConstructorMap.erase(IVehicle::descriptor);
};

// Methods from IVehicle follow.
// no default implementation for: ::android::hardware::Return<void> IVehicle::getAllPropConfigs(getAllPropConfigs_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IVehicle::getPropConfigs(const ::android::hardware::hidl_vec<int32_t>& props, getPropConfigs_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IVehicle::get(const VehiclePropValue& requestedPropValue, get_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<StatusCode> IVehicle::set(const VehiclePropValue& propValue)
// no default implementation for: ::android::hardware::Return<StatusCode> IVehicle::subscribe(const ::android::sp<IVehicleCallback>& callback, const ::android::hardware::hidl_vec<SubscribeOptions>& options)
// no default implementation for: ::android::hardware::Return<StatusCode> IVehicle::unsubscribe(const ::android::sp<IVehicleCallback>& callback, int32_t propId)
// no default implementation for: ::android::hardware::Return<void> IVehicle::debugDump(debugDump_cb _hidl_cb)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IVehicle::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        IVehicle::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicle::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicle::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(IVehicle::descriptor);
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicle::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){205,224,120,126,75,244,180,80,169,206,185,1,29,38,152,192,6,19,34,235,136,38,33,232,155,112,89,75,11,124,101,197} /* cde0787e4bf4b450a9ceb9011d2698c0061322eb882621e89b70594b0b7c65c5 */,
        (uint8_t[32]){189,218,182,24,77,122,52,109,166,160,125,192,130,140,241,154,105,111,76,170,54,17,197,31,46,20,86,90,20,180,15,217} /* bddab6184d7a346da6a07dc0828cf19a696f4caa3611c51f2e14565a14b40fd9 */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IVehicle::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IVehicle::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IVehicle::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IVehicle::getDebugInfo(getDebugInfo_cb _hidl_cb){
    _hidl_cb({ -1 /* pid */, 0 /* ptr */, 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IVehicle::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();}

::android::hardware::Return<bool> IVehicle::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


// static 
::android::hardware::Return<::android::sp<IVehicle>> IVehicle::castFrom(const ::android::sp<IVehicle>& parent, bool /* emitError */) {
    return parent;
}

// static 
::android::hardware::Return<::android::sp<IVehicle>> IVehicle::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IVehicle, ::android::hidl::base::V1_0::IBase, BpHwVehicle, ::android::hidl::base::V1_0::BpHwBase>(
            parent, "android.hardware.automotive.vehicle@2.0::IVehicle", emitError);
}

BpHwVehicle::BpHwVehicle(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IVehicle>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hardware.automotive.vehicle@2.0", "IVehicle") {
}

// Methods from IVehicle follow.
::android::hardware::Return<void> BpHwVehicle::getAllPropConfigs(getAllPropConfigs_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getAllPropConfigs::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_vec<VehiclePropConfig>* _hidl_out_propConfigs;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(1 /* getAllPropConfigs */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_propConfigs_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_propConfigs), &_hidl__hidl_out_propConfigs_parent,  reinterpret_cast<const void **>(&_hidl_out_propConfigs));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_propConfigs_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<VehiclePropConfig> &>(*_hidl_out_propConfigs),
            _hidl_reply,
            _hidl__hidl_out_propConfigs_parent,
            0 /* parentOffset */, &_hidl__hidl_out_propConfigs_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_propConfigs->size(); ++_hidl_index_0) {
        _hidl_err = readEmbeddedFromParcel(
                const_cast<VehiclePropConfig &>((*_hidl_out_propConfigs)[_hidl_index_0]),
                _hidl_reply,
                _hidl__hidl_out_propConfigs_child,
                _hidl_index_0 * sizeof(VehiclePropConfig));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_cb(*_hidl_out_propConfigs);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_propConfigs);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::getPropConfigs(const ::android::hardware::hidl_vec<int32_t>& props, getPropConfigs_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getPropConfigs::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&props);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    StatusCode _hidl_out_status;
    const ::android::hardware::hidl_vec<VehiclePropConfig>* _hidl_out_propConfigs;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_props_parent;

    _hidl_err = _hidl_data.writeBuffer(&props, sizeof(props), &_hidl_props_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_props_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            props,
            &_hidl_data,
            _hidl_props_parent,
            0 /* parentOffset */, &_hidl_props_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(2 /* getPropConfigs */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_propConfigs_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_propConfigs), &_hidl__hidl_out_propConfigs_parent,  reinterpret_cast<const void **>(&_hidl_out_propConfigs));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_propConfigs_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<VehiclePropConfig> &>(*_hidl_out_propConfigs),
            _hidl_reply,
            _hidl__hidl_out_propConfigs_parent,
            0 /* parentOffset */, &_hidl__hidl_out_propConfigs_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_propConfigs->size(); ++_hidl_index_0) {
        _hidl_err = readEmbeddedFromParcel(
                const_cast<VehiclePropConfig &>((*_hidl_out_propConfigs)[_hidl_index_0]),
                _hidl_reply,
                _hidl__hidl_out_propConfigs_child,
                _hidl_index_0 * sizeof(VehiclePropConfig));

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    }

    _hidl_cb(_hidl_out_status, *_hidl_out_propConfigs);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        _hidl_args.push_back((void *)_hidl_out_propConfigs);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::get(const VehiclePropValue& requestedPropValue, get_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::get::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&requestedPropValue);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    StatusCode _hidl_out_status;
    const VehiclePropValue* _hidl_out_propValue;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_requestedPropValue_parent;

    _hidl_err = _hidl_data.writeBuffer(&requestedPropValue, sizeof(requestedPropValue), &_hidl_requestedPropValue_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = writeEmbeddedToParcel(
            requestedPropValue,
            &_hidl_data,
            _hidl_requestedPropValue_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(3 /* get */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_propValue_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_propValue), &_hidl__hidl_out_propValue_parent,  reinterpret_cast<const void **>(&_hidl_out_propValue));
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = readEmbeddedFromParcel(
            const_cast<VehiclePropValue &>(*_hidl_out_propValue),
            _hidl_reply,
            _hidl__hidl_out_propValue_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(_hidl_out_status, *_hidl_out_propValue);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        _hidl_args.push_back((void *)_hidl_out_propValue);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<StatusCode> BpHwVehicle::set(const VehiclePropValue& propValue) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::set::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&propValue);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    StatusCode _hidl_out_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
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

    _hidl_err = remote()->transact(4 /* set */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_out_status);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_status);
}

::android::hardware::Return<StatusCode> BpHwVehicle::subscribe(const ::android::sp<IVehicleCallback>& callback, const ::android::hardware::hidl_vec<SubscribeOptions>& options) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::subscribe::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&callback);
        _hidl_args.push_back((void *)&options);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    StatusCode _hidl_out_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (callback == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::toBinder<
                IVehicleCallback, BpHwVehicleCallback>(callback);
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
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

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_err = remote()->transact(5 /* subscribe */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_out_status);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_status);
}

::android::hardware::Return<StatusCode> BpHwVehicle::unsubscribe(const ::android::sp<IVehicleCallback>& callback, int32_t propId) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::unsubscribe::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&callback);
        _hidl_args.push_back((void *)&propId);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    StatusCode _hidl_out_status;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (callback == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::toBinder<
                IVehicleCallback, BpHwVehicleCallback>(callback);
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeInt32(propId);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_err = remote()->transact(6 /* unsubscribe */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readInt32((int32_t *)&_hidl_out_status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_out_status);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<StatusCode>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::debugDump(debugDump_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debugDump::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
        }
    }

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_string* _hidl_out_s;

    _hidl_err = _hidl_data.writeInterfaceToken(IVehicle::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(7 /* debugDump */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_s_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_s), &_hidl__hidl_out_s_parent,  reinterpret_cast<const void **>(&_hidl_out_s));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_string &>(*_hidl_out_s),
            _hidl_reply,
            _hidl__hidl_out_s_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(*_hidl_out_s);

    atrace_end(ATRACE_TAG_HAL);
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_s);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwVehicle::interfaceChain(interfaceChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceChain::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debug::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&fd);
        _hidl_args.push_back((void *)&options);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceDescriptor::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::getHashChain(getHashChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getHashChain::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::setHALInstrumentation() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::setHALInstrumentation::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "setHALInstrumentation", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "setHALInstrumentation", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwVehicle::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwVehicle::ping() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::ping::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getDebugInfo::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwVehicle::notifySyspropsChanged() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::notifySyspropsChanged::client");
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
        }
    }

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwVehicle::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.begin();it != _hidl_mDeathRecipients.end();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it);
            return status == ::android::OK;
        }}
    return false;
}


BnHwVehicle::BnHwVehicle(const ::android::sp<IVehicle> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hardware.automotive.vehicle@2.0", "IVehicle") { 
            _hidl_mImpl = _hidl_impl;
}

// Methods from IVehicle follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwVehicle::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwVehicle::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwVehicle::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* getAllPropConfigs */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getAllPropConfigs::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->getAllPropConfigs([&](const auto &_hidl_out_propConfigs) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("getAllPropConfigs: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_propConfigs_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_propConfigs, sizeof(_hidl_out_propConfigs), &_hidl__hidl_out_propConfigs_parent);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_propConfigs_child;

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_propConfigs,
                        _hidl_reply,
                        _hidl__hidl_out_propConfigs_parent,
                        0 /* parentOffset */, &_hidl__hidl_out_propConfigs_child);

                /* _hidl_err ignored! */

                for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_propConfigs.size(); ++_hidl_index_0) {
                    _hidl_err = writeEmbeddedToParcel(
                            _hidl_out_propConfigs[_hidl_index_0],
                            _hidl_reply,
                            _hidl__hidl_out_propConfigs_child,
                            _hidl_index_0 * sizeof(VehiclePropConfig));

                    /* _hidl_err ignored! */

                }

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_propConfigs);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("getAllPropConfigs: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 2 /* getPropConfigs */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const ::android::hardware::hidl_vec<int32_t>* props;

            size_t _hidl_props_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*props), &_hidl_props_parent,  reinterpret_cast<const void **>(&props));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_props_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<int32_t> &>(*props),
                    _hidl_data,
                    _hidl_props_parent,
                    0 /* parentOffset */, &_hidl_props_child);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getPropConfigs::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)props);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->getPropConfigs(*props, [&](const auto &_hidl_out_status, const auto &_hidl_out_propConfigs) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("getPropConfigs: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_propConfigs_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_propConfigs, sizeof(_hidl_out_propConfigs), &_hidl__hidl_out_propConfigs_parent);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_propConfigs_child;

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_propConfigs,
                        _hidl_reply,
                        _hidl__hidl_out_propConfigs_parent,
                        0 /* parentOffset */, &_hidl__hidl_out_propConfigs_child);

                /* _hidl_err ignored! */

                for (size_t _hidl_index_0 = 0; _hidl_index_0 < _hidl_out_propConfigs.size(); ++_hidl_index_0) {
                    _hidl_err = writeEmbeddedToParcel(
                            _hidl_out_propConfigs[_hidl_index_0],
                            _hidl_reply,
                            _hidl__hidl_out_propConfigs_child,
                            _hidl_index_0 * sizeof(VehiclePropConfig));

                    /* _hidl_err ignored! */

                }

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_status);
                    _hidl_args.push_back((void *)&_hidl_out_propConfigs);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("getPropConfigs: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 3 /* get */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const VehiclePropValue* requestedPropValue;

            size_t _hidl_requestedPropValue_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*requestedPropValue), &_hidl_requestedPropValue_parent,  reinterpret_cast<const void **>(&requestedPropValue));
            if (_hidl_err != ::android::OK) { break; }

            _hidl_err = readEmbeddedFromParcel(
                    const_cast<VehiclePropValue &>(*requestedPropValue),
                    _hidl_data,
                    _hidl_requestedPropValue_parent,
                    0 /* parentOffset */);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::get::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)requestedPropValue);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->get(*requestedPropValue, [&](const auto &_hidl_out_status, const auto &_hidl_out_propValue) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("get: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_propValue_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_propValue, sizeof(_hidl_out_propValue), &_hidl__hidl_out_propValue_parent);
                /* _hidl_err ignored! */

                _hidl_err = writeEmbeddedToParcel(
                        _hidl_out_propValue,
                        _hidl_reply,
                        _hidl__hidl_out_propValue_parent,
                        0 /* parentOffset */);

                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_status);
                    _hidl_args.push_back((void *)&_hidl_out_propValue);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("get: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 4 /* set */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::set::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)propValue);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
                }
            }

            StatusCode _hidl_out_status = _hidl_mImpl->set(*propValue);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
            /* _hidl_err ignored! */

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
                }
            }

            _hidl_cb(*_hidl_reply);
            break;
        }

        case 5 /* subscribe */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            ::android::sp<IVehicleCallback> callback;
            const ::android::hardware::hidl_vec<SubscribeOptions>* options;

            {
                ::android::sp<::android::hardware::IBinder> _hidl_callback_binder;
                _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_callback_binder);
                if (_hidl_err != ::android::OK) { break; }

                callback = ::android::hardware::fromBinder<IVehicleCallback,BpHwVehicleCallback,BnHwVehicleCallback>(_hidl_callback_binder);
            }

            size_t _hidl_options_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*options), &_hidl_options_parent,  reinterpret_cast<const void **>(&options));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_options_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<SubscribeOptions> &>(*options),
                    _hidl_data,
                    _hidl_options_parent,
                    0 /* parentOffset */, &_hidl_options_child);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::subscribe::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&callback);
                _hidl_args.push_back((void *)options);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
                }
            }

            StatusCode _hidl_out_status = _hidl_mImpl->subscribe(callback, *options);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
            /* _hidl_err ignored! */

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
                }
            }

            _hidl_cb(*_hidl_reply);
            break;
        }

        case 6 /* unsubscribe */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            ::android::sp<IVehicleCallback> callback;
            int32_t propId;

            {
                ::android::sp<::android::hardware::IBinder> _hidl_callback_binder;
                _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_callback_binder);
                if (_hidl_err != ::android::OK) { break; }

                callback = ::android::hardware::fromBinder<IVehicleCallback,BpHwVehicleCallback,BnHwVehicleCallback>(_hidl_callback_binder);
            }

            _hidl_err = _hidl_data.readInt32(&propId);
            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::unsubscribe::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&callback);
                _hidl_args.push_back((void *)&propId);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
                }
            }

            StatusCode _hidl_out_status = _hidl_mImpl->unsubscribe(callback, propId);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            _hidl_err = _hidl_reply->writeInt32((int32_t)_hidl_out_status);
            /* _hidl_err ignored! */

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
                }
            }

            _hidl_cb(*_hidl_reply);
            break;
        }

        case 7 /* debugDump */:
        {
            if (!_hidl_data.enforceInterface(IVehicle::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debugDump::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
                }
            }

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->debugDump([&](const auto &_hidl_out_s) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("debugDump: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_s_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_s, sizeof(_hidl_out_s), &_hidl__hidl_out_s_parent);
                /* _hidl_err ignored! */

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_s,
                        _hidl_reply,
                        _hidl__hidl_out_s_parent,
                        0 /* parentOffset */);

                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_s);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
                    }
                }

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("debugDump: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 256067662 /* interfaceChain */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceChain::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debug::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&fd);
                _hidl_args.push_back((void *)options);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
                }
            }

            _hidl_mImpl->debug(fd, *options);

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceDescriptor::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getHashChain::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::ping::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
                }
            }

            this->ping();

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getDebugInfo::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::notifySyspropsChanged::server");
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
                }
            }

            _hidl_mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
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

BsVehicle::BsVehicle(const ::android::sp<IVehicle> impl) : ::android::hardware::details::HidlInstrumentor("android.hardware.automotive.vehicle@2.0", "IVehicle"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsVehicle::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED);
    }
    return ::android::hardware::Status();
}

// static
::android::sp<IVehicle> IVehicle::tryGetService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IVehicle> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IVehicle::descriptor, serviceName);

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
                sm->get(IVehicle::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("getService: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            ALOGW("getService: found null hwbinder interface");
            break;
        }
        Return<sp<IVehicle>> castRet = IVehicle::castFrom(base, true /* emitError */);
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
                    pm->get(IVehicle::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsVehicle(IVehicle::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

// static
::android::sp<IVehicle> IVehicle::getService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IVehicle> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IVehicle::descriptor, serviceName);

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
            waitForHwService(IVehicle::descriptor, serviceName);
        }
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(IVehicle::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("getService: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            ALOGW("getService: found null hwbinder interface");
            continue;
        }
        Return<sp<IVehicle>> castRet = IVehicle::castFrom(base, true /* emitError */);
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
                    pm->get(IVehicle::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsVehicle(IVehicle::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

::android::status_t IVehicle::registerAsService(const std::string &serviceName) {
    ::android::hardware::details::onRegistration("android.hardware.automotive.vehicle@2.0", "IVehicle", serviceName);

    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return ::android::INVALID_OPERATION;
    }
    ::android::hardware::Return<bool> ret = sm->add(serviceName.c_str(), this);
    return ret.isOk() && ret ? ::android::OK : ::android::UNKNOWN_ERROR;
}

bool IVehicle::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hardware.automotive.vehicle@2.0::IVehicle",
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
