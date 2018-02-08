#define LOG_TAG "android.hidl.token@1.0::TokenManager"

#include <android/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <android/hidl/manager/1.0/IServiceManager.h>
#include <hidl/LegacySupport.h>
#include <android/hidl/token/1.0/BpHwTokenManager.h>
#include <android/hidl/token/1.0/BnHwTokenManager.h>
#include <android/hidl/token/1.0/BsTokenManager.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hidl {
namespace token {
namespace V1_0 {

std::string toString(const ::android::sp<ITokenManager>& o) {
    std::string os = "[class or subclass of ";
    os += ITokenManager::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}

const char* ITokenManager::descriptor("android.hidl.token@1.0::ITokenManager");

__attribute__((constructor))static void static_constructor() {
    ::android::hardware::details::gBnConstructorMap.set(ITokenManager::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwTokenManager(static_cast<ITokenManager *>(iIntf));
            });
    ::android::hardware::details::gBsConstructorMap.set(ITokenManager::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsTokenManager(static_cast<ITokenManager *>(iIntf));
            });
};

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::gBnConstructorMap.erase(ITokenManager::descriptor);
    ::android::hardware::details::gBsConstructorMap.erase(ITokenManager::descriptor);
};

// Methods from ITokenManager follow.
// no default implementation for: ::android::hardware::Return<void> ITokenManager::createToken(const ::android::sp<::android::hidl::base::V1_0::IBase>& store, createToken_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<bool> ITokenManager::unregister(const ::android::hardware::hidl_vec<uint8_t>& token)
// no default implementation for: ::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>> ITokenManager::get(const ::android::hardware::hidl_vec<uint8_t>& token)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> ITokenManager::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ITokenManager::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> ITokenManager::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();}

::android::hardware::Return<void> ITokenManager::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(ITokenManager::descriptor);
    return ::android::hardware::Void();}

::android::hardware::Return<void> ITokenManager::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){124,159,227,82,175,4,175,101,155,213,26,182,245,73,81,21,87,91,192,99,221,246,132,252,109,13,236,31,74,75,75,124} /* 7c9fe352af04af659bd51ab6f5495115575bc063ddf684fc6d0dec1f4a4b4b7c */,
        (uint8_t[32]){189,218,182,24,77,122,52,109,166,160,125,192,130,140,241,154,105,111,76,170,54,17,197,31,46,20,86,90,20,180,15,217} /* bddab6184d7a346da6a07dc0828cf19a696f4caa3611c51f2e14565a14b40fd9 */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> ITokenManager::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> ITokenManager::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> ITokenManager::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> ITokenManager::getDebugInfo(getDebugInfo_cb _hidl_cb){
    _hidl_cb({ -1 /* pid */, 0 /* ptr */, 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> ITokenManager::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();}

::android::hardware::Return<bool> ITokenManager::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


// static 
::android::hardware::Return<::android::sp<ITokenManager>> ITokenManager::castFrom(const ::android::sp<ITokenManager>& parent, bool /* emitError */) {
    return parent;
}

// static 
::android::hardware::Return<::android::sp<ITokenManager>> ITokenManager::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<ITokenManager, ::android::hidl::base::V1_0::IBase, BpHwTokenManager, ::android::hidl::base::V1_0::BpHwBase>(
            parent, "android.hidl.token@1.0::ITokenManager", emitError);
}

BpHwTokenManager::BpHwTokenManager(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<ITokenManager>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hidl.token@1.0", "ITokenManager") {
}

// Methods from ITokenManager follow.
::android::hardware::Return<void> BpHwTokenManager::createToken(const ::android::sp<::android::hidl::base::V1_0::IBase>& store, createToken_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::createToken::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&store);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "createToken", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    const ::android::hardware::hidl_vec<uint8_t>* _hidl_out_token;

    _hidl_err = _hidl_data.writeInterfaceToken(ITokenManager::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (store == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::toBinder<
                ::android::hidl::base::V1_0::IBase, ::android::hidl::base::V1_0::BpHwBase>(store);
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_err = remote()->transact(1 /* createToken */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    size_t _hidl__hidl_out_token_parent;

    _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_token), &_hidl__hidl_out_token_parent,  reinterpret_cast<const void **>(&_hidl_out_token));

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl__hidl_out_token_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<uint8_t> &>(*_hidl_out_token),
            _hidl_reply,
            _hidl__hidl_out_token_parent,
            0 /* parentOffset */, &_hidl__hidl_out_token_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_cb(*_hidl_out_token);

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_token);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "createToken", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwTokenManager::unregister(const ::android::hardware::hidl_vec<uint8_t>& token) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::unregister::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&token);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "unregister", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    bool _hidl_out_success;

    _hidl_err = _hidl_data.writeInterfaceToken(ITokenManager::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_token_parent;

    _hidl_err = _hidl_data.writeBuffer(&token, sizeof(token), &_hidl_token_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_token_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            token,
            &_hidl_data,
            _hidl_token_parent,
            0 /* parentOffset */, &_hidl_token_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(2 /* unregister */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    _hidl_err = _hidl_reply.readBool(&_hidl_out_success);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_success);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "unregister", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<bool>(_hidl_out_success);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<bool>(_hidl_status);
}

::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>> BpHwTokenManager::get(const ::android::hardware::hidl_vec<uint8_t>& token) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::get::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&token);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "get", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    ::android::sp<::android::hidl::base::V1_0::IBase> _hidl_out_store;

    _hidl_err = _hidl_data.writeInterfaceToken(ITokenManager::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_token_parent;

    _hidl_err = _hidl_data.writeBuffer(&token, sizeof(token), &_hidl_token_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_token_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            token,
            &_hidl_data,
            _hidl_token_parent,
            0 /* parentOffset */, &_hidl_token_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(3 /* get */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    {
        ::android::sp<::android::hardware::IBinder> _hidl__hidl_out_store_binder;
        _hidl_err = _hidl_reply.readNullableStrongBinder(&_hidl__hidl_out_store_binder);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_out_store = ::android::hardware::fromBinder<::android::hidl::base::V1_0::IBase,::android::hidl::base::V1_0::BpHwBase,::android::hidl::base::V1_0::BnHwBase>(_hidl__hidl_out_store_binder);
    }

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_store);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "get", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>>(_hidl_out_store);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>>(_hidl_status);
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwTokenManager::interfaceChain(interfaceChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::interfaceChain::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "interfaceChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_descriptors);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "interfaceChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::debug::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&fd);
        _hidl_args.push_back((void *)&options);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "debug", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "debug", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::interfaceDescriptor::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "interfaceDescriptor", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_descriptor);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "interfaceDescriptor", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::getHashChain(getHashChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::getHashChain::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "getHashChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_hashchain);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "getHashChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::setHALInstrumentation() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::setHALInstrumentation::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "setHALInstrumentation", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(256462420 /* setHALInstrumentation */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "setHALInstrumentation", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwTokenManager::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwTokenManager::ping() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::ping::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "ping", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "ping", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::getDebugInfo::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "getDebugInfo", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

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
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)_hidl_out_info);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "getDebugInfo", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwTokenManager::notifySyspropsChanged() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::notifySyspropsChanged::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "notifySyspropsChanged", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(::android::hidl::base::V1_0::IBase::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(257120595 /* notifySyspropsChanged */, _hidl_data, &_hidl_reply, ::android::hardware::IBinder::FLAG_ONEWAY);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "notifySyspropsChanged", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwTokenManager::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.begin();it != _hidl_mDeathRecipients.end();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it);
            return status == ::android::OK;
        }}
    return false;
}


BnHwTokenManager::BnHwTokenManager(const ::android::sp<ITokenManager> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hidl.token@1.0", "ITokenManager") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::details::gServicePrioMap.get(_hidl_impl, {SCHED_NORMAL, 0});
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
}

// Methods from ITokenManager follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwTokenManager::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwTokenManager::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwTokenManager::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* createToken */:
        {
            if (!_hidl_data.enforceInterface(ITokenManager::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            ::android::sp<::android::hidl::base::V1_0::IBase> store;

            {
                ::android::sp<::android::hardware::IBinder> _hidl_store_binder;
                _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_store_binder);
                if (_hidl_err != ::android::OK) { break; }

                store = ::android::hardware::fromBinder<::android::hidl::base::V1_0::IBase,::android::hidl::base::V1_0::BpHwBase,::android::hidl::base::V1_0::BnHwBase>(_hidl_store_binder);
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::createToken::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&store);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "createToken", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            bool _hidl_callbackCalled = false;

            _hidl_mImpl->createToken(store, [&](const auto &_hidl_out_token) {
                if (_hidl_callbackCalled) {
                    LOG_ALWAYS_FATAL("createToken: _hidl_cb called a second time, but must be called once.");
                }
                _hidl_callbackCalled = true;

                ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

                size_t _hidl__hidl_out_token_parent;

                _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_token, sizeof(_hidl_out_token), &_hidl__hidl_out_token_parent);
                /* _hidl_err ignored! */

                size_t _hidl__hidl_out_token_child;

                _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                        _hidl_out_token,
                        _hidl_reply,
                        _hidl__hidl_out_token_parent,
                        0 /* parentOffset */, &_hidl__hidl_out_token_child);

                /* _hidl_err ignored! */

                atrace_end(ATRACE_TAG_HAL);
                #ifdef __ANDROID_DEBUGGABLE__
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_token);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "createToken", &_hidl_args);
                    }
                }
                #endif // __ANDROID_DEBUGGABLE__

                _hidl_cb(*_hidl_reply);
            });

            if (!_hidl_callbackCalled) {
                LOG_ALWAYS_FATAL("createToken: _hidl_cb not called, but must be called once.");
            }

            break;
        }

        case 2 /* unregister */:
        {
            if (!_hidl_data.enforceInterface(ITokenManager::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const ::android::hardware::hidl_vec<uint8_t>* token;

            size_t _hidl_token_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*token), &_hidl_token_parent,  reinterpret_cast<const void **>(&token));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_token_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<uint8_t> &>(*token),
                    _hidl_data,
                    _hidl_token_parent,
                    0 /* parentOffset */, &_hidl_token_child);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::unregister::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)token);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "unregister", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            bool _hidl_out_success = _hidl_mImpl->unregister(*token);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            _hidl_err = _hidl_reply->writeBool(_hidl_out_success);
            /* _hidl_err ignored! */

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_success);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "unregister", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(*_hidl_reply);
            break;
        }

        case 3 /* get */:
        {
            if (!_hidl_data.enforceInterface(ITokenManager::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const ::android::hardware::hidl_vec<uint8_t>* token;

            size_t _hidl_token_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*token), &_hidl_token_parent,  reinterpret_cast<const void **>(&token));

            if (_hidl_err != ::android::OK) { break; }

            size_t _hidl_token_child;

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_vec<uint8_t> &>(*token),
                    _hidl_data,
                    _hidl_token_parent,
                    0 /* parentOffset */, &_hidl_token_child);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::get::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)token);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "get", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            ::android::sp<::android::hidl::base::V1_0::IBase> _hidl_out_store = _hidl_mImpl->get(*token);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            if (_hidl_out_store == nullptr) {
                _hidl_err = _hidl_reply->writeStrongBinder(nullptr);
            } else {
                ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::toBinder<
                        ::android::hidl::base::V1_0::IBase, ::android::hidl::base::V1_0::BpHwBase>(_hidl_out_store);
                if (_hidl_binder.get() != nullptr) {
                    _hidl_err = _hidl_reply->writeStrongBinder(_hidl_binder);
                } else {
                    _hidl_err = ::android::UNKNOWN_ERROR;
                }
            }
            /* _hidl_err ignored! */

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_store);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "get", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(*_hidl_reply);
            break;
        }

        case 256067662 /* interfaceChain */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::interfaceChain::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "interfaceChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

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
                #ifdef __ANDROID_DEBUGGABLE__
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_descriptors);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "interfaceChain", &_hidl_args);
                    }
                }
                #endif // __ANDROID_DEBUGGABLE__

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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::debug::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&fd);
                _hidl_args.push_back((void *)options);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "debug", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_mImpl->debug(fd, *options);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "debug", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 256136003 /* interfaceDescriptor */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::interfaceDescriptor::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "interfaceDescriptor", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

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
                #ifdef __ANDROID_DEBUGGABLE__
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_descriptor);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "interfaceDescriptor", &_hidl_args);
                    }
                }
                #endif // __ANDROID_DEBUGGABLE__

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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::getHashChain::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "getHashChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

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
                #ifdef __ANDROID_DEBUGGABLE__
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_hashchain);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "getHashChain", &_hidl_args);
                    }
                }
                #endif // __ANDROID_DEBUGGABLE__

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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::ping::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "ping", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            this->ping();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "ping", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 257049926 /* getDebugInfo */:
        {
            if (!_hidl_data.enforceInterface(::android::hidl::base::V1_0::IBase::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::getDebugInfo::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "getDebugInfo", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

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
                #ifdef __ANDROID_DEBUGGABLE__
                if (UNLIKELY(mEnableInstrumentation)) {
                    std::vector<void *> _hidl_args;
                    _hidl_args.push_back((void *)&_hidl_out_info);
                    for (const auto &callback: mInstrumentationCallbacks) {
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "getDebugInfo", &_hidl_args);
                    }
                }
                #endif // __ANDROID_DEBUGGABLE__

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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::ITokenManager::notifySyspropsChanged::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.token", "1.0", "ITokenManager", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.token", "1.0", "ITokenManager", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            break;
        }

        case 257250372 /* unlinkToDeath */:
        {
            break;
        }

        default:
        {
            return ::android::hidl::base::V1_0::BnHwBase::onTransact(
                    _hidl_code, _hidl_data, _hidl_reply, _hidl_flags, _hidl_cb);
        }
    }

    if (_hidl_err == ::android::UNEXPECTED_NULL) {
        _hidl_err = ::android::hardware::writeToParcel(
                ::android::hardware::Status::fromExceptionCode(::android::hardware::Status::EX_NULL_POINTER),
                _hidl_reply);
    }return _hidl_err;
}

BsTokenManager::BsTokenManager(const ::android::sp<ITokenManager> impl) : ::android::hardware::details::HidlInstrumentor("android.hidl.token@1.0", "ITokenManager"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsTokenManager::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED);
    }
    return ::android::hardware::Status();
}

// static
::android::sp<ITokenManager> ITokenManager::tryGetService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<ITokenManager> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(ITokenManager::descriptor, serviceName);

    if (!transportRet.isOk()) {
        ALOGE("getService: defaultServiceManager()->getTransport returns %s", transportRet.description().c_str());
        return nullptr;
    }
    Transport transport = transportRet;
    const bool vintfHwbinder = (transport == Transport::HWBINDER);
    const bool vintfPassthru = (transport == Transport::PASSTHROUGH);

    #ifdef __ANDROID_TREBLE__

    #ifdef __ANDROID_DEBUGGABLE__
    const char* env = std::getenv("TREBLE_TESTING_OVERRIDE");
    const bool vintfLegacy = (transport == Transport::EMPTY) && env && !strcmp(env, "true");
    #else // __ANDROID_TREBLE__ but not __ANDROID_DEBUGGABLE__
    const bool vintfLegacy = false;
    #endif // __ANDROID_DEBUGGABLE__

    #else // not __ANDROID_TREBLE__
    const bool vintfLegacy = (transport == Transport::EMPTY);

    #endif // __ANDROID_TREBLE__

    for (int tries = 0; !getStub && (vintfHwbinder || (vintfLegacy && tries == 0)); tries++) {
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(ITokenManager::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("ITokenManager: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            if (tries > 0) {
                ALOGW("ITokenManager: found null hwbinder interface");
            }break;
        }
        Return<sp<ITokenManager>> castRet = ITokenManager::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("ITokenManager: found dead hwbinder service");
                break;
            } else {
                ALOGW("ITokenManager: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("ITokenManager: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfLegacy) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(ITokenManager::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsTokenManager(ITokenManager::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

// static
::android::sp<ITokenManager> ITokenManager::getService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<ITokenManager> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(ITokenManager::descriptor, serviceName);

    if (!transportRet.isOk()) {
        ALOGE("getService: defaultServiceManager()->getTransport returns %s", transportRet.description().c_str());
        return nullptr;
    }
    Transport transport = transportRet;
    const bool vintfHwbinder = (transport == Transport::HWBINDER);
    const bool vintfPassthru = (transport == Transport::PASSTHROUGH);

    #ifdef __ANDROID_TREBLE__

    #ifdef __ANDROID_DEBUGGABLE__
    const char* env = std::getenv("TREBLE_TESTING_OVERRIDE");
    const bool vintfLegacy = (transport == Transport::EMPTY) && env && !strcmp(env, "true");
    #else // __ANDROID_TREBLE__ but not __ANDROID_DEBUGGABLE__
    const bool vintfLegacy = false;
    #endif // __ANDROID_DEBUGGABLE__

    #else // not __ANDROID_TREBLE__
    const bool vintfLegacy = (transport == Transport::EMPTY);

    #endif // __ANDROID_TREBLE__

    for (int tries = 0; !getStub && (vintfHwbinder || (vintfLegacy && tries == 0)); tries++) {
        if (tries > 1) {
            ALOGI("getService: Will do try %d for %s/%s in 1s...", tries, ITokenManager::descriptor, serviceName.c_str());
            sleep(1);
        }
        if (vintfHwbinder && tries > 0) {
            waitForHwService(ITokenManager::descriptor, serviceName);
        }
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(ITokenManager::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("ITokenManager: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            if (tries > 0) {
                ALOGW("ITokenManager: found null hwbinder interface");
            }continue;
        }
        Return<sp<ITokenManager>> castRet = ITokenManager::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("ITokenManager: found dead hwbinder service");
                continue;
            } else {
                ALOGW("ITokenManager: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("ITokenManager: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfLegacy) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(ITokenManager::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsTokenManager(ITokenManager::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

::android::status_t ITokenManager::registerAsService(const std::string &serviceName) {
    ::android::hardware::details::onRegistration("android.hidl.token@1.0", "ITokenManager", serviceName);

    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return ::android::INVALID_OPERATION;
    }
    ::android::hardware::Return<bool> ret = sm->add(serviceName.c_str(), this);
    return ret.isOk() && ret ? ::android::OK : ::android::UNKNOWN_ERROR;
}

bool ITokenManager::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hidl.token@1.0::ITokenManager",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V1_0
}  // namespace token
}  // namespace hidl
}  // namespace android
