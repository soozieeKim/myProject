#define LOG_TAG "android.hidl.memory@1.0::Mapper"

#include <android/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <android/hidl/manager/1.0/IServiceManager.h>
#include <hidl/LegacySupport.h>
#include <android/hidl/memory/1.0/BpHwMapper.h>
#include <android/hidl/memory/1.0/BnHwMapper.h>
#include <android/hidl/memory/1.0/BsMapper.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace android {
namespace hidl {
namespace memory {
namespace V1_0 {

std::string toString(const ::android::sp<IMapper>& o) {
    std::string os = "[class or subclass of ";
    os += IMapper::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}

const char* IMapper::descriptor("android.hidl.memory@1.0::IMapper");

__attribute__((constructor))static void static_constructor() {
    ::android::hardware::details::gBnConstructorMap.set(IMapper::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwMapper(static_cast<IMapper *>(iIntf));
            });
    ::android::hardware::details::gBsConstructorMap.set(IMapper::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsMapper(static_cast<IMapper *>(iIntf));
            });
};

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::gBnConstructorMap.erase(IMapper::descriptor);
    ::android::hardware::details::gBsConstructorMap.erase(IMapper::descriptor);
};

// Methods from IMapper follow.
// no default implementation for: ::android::hardware::Return<::android::sp<IMemory>> IMapper::mapMemory(const ::android::hardware::hidl_memory& mem)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IMapper::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        IMapper::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IMapper::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();}

::android::hardware::Return<void> IMapper::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(IMapper::descriptor);
    return ::android::hardware::Void();}

::android::hardware::Return<void> IMapper::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){43,136,91,93,236,151,57,28,130,243,94,100,24,6,134,220,76,143,120,178,176,160,23,50,248,83,99,133,101,79,39,200} /* 2b885b5dec97391c82f35e64180686dc4c8f78b2b0a01732f8536385654f27c8 */,
        (uint8_t[32]){189,218,182,24,77,122,52,109,166,160,125,192,130,140,241,154,105,111,76,170,54,17,197,31,46,20,86,90,20,180,15,217} /* bddab6184d7a346da6a07dc0828cf19a696f4caa3611c51f2e14565a14b40fd9 */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IMapper::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IMapper::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IMapper::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IMapper::getDebugInfo(getDebugInfo_cb _hidl_cb){
    _hidl_cb({ -1 /* pid */, 0 /* ptr */, 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    });
    return ::android::hardware::Void();}

::android::hardware::Return<void> IMapper::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();}

::android::hardware::Return<bool> IMapper::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


// static 
::android::hardware::Return<::android::sp<IMapper>> IMapper::castFrom(const ::android::sp<IMapper>& parent, bool /* emitError */) {
    return parent;
}

// static 
::android::hardware::Return<::android::sp<IMapper>> IMapper::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IMapper, ::android::hidl::base::V1_0::IBase, BpHwMapper, ::android::hidl::base::V1_0::BpHwBase>(
            parent, "android.hidl.memory@1.0::IMapper", emitError);
}

BpHwMapper::BpHwMapper(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IMapper>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("android.hidl.memory@1.0", "IMapper") {
}

// Methods from IMapper follow.
::android::hardware::Return<::android::sp<IMemory>> BpHwMapper::mapMemory(const ::android::hardware::hidl_memory& mem) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::mapMemory::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&mem);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "mapMemory", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::hardware::Status _hidl_status;

    ::android::sp<IMemory> _hidl_out_mappedMemory;

    _hidl_err = _hidl_data.writeInterfaceToken(IMapper::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_mem_parent;

    _hidl_err = _hidl_data.writeBuffer(&mem, sizeof(mem), &_hidl_mem_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            mem,
            &_hidl_data,
            _hidl_mem_parent,
            0 /* parentOffset */);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = remote()->transact(1 /* mapMemory */, _hidl_data, &_hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    {
        ::android::sp<::android::hardware::IBinder> _hidl__hidl_out_mappedMemory_binder;
        _hidl_err = _hidl_reply.readNullableStrongBinder(&_hidl__hidl_out_mappedMemory_binder);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_out_mappedMemory = ::android::hardware::fromBinder<IMemory,BpHwMemory,BnHwMemory>(_hidl__hidl_out_mappedMemory_binder);
    }

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&_hidl_out_mappedMemory);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "mapMemory", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::sp<IMemory>>(_hidl_out_mappedMemory);

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<::android::sp<IMemory>>(_hidl_status);
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwMapper::interfaceChain(interfaceChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::interfaceChain::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "interfaceChain", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "interfaceChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::debug::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&fd);
        _hidl_args.push_back((void *)&options);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "debug", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "debug", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::interfaceDescriptor::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "interfaceDescriptor", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "interfaceDescriptor", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::getHashChain(getHashChain_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::getHashChain::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "getHashChain", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "getHashChain", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::setHALInstrumentation() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::setHALInstrumentation::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "setHALInstrumentation", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "setHALInstrumentation", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwMapper::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwMapper::ping() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::ping::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "ping", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "ping", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    if (_hidl_cb == nullptr) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::getDebugInfo::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "getDebugInfo", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "getDebugInfo", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwMapper::notifySyspropsChanged() {
    atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::notifySyspropsChanged::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "notifySyspropsChanged", &_hidl_args);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "notifySyspropsChanged", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<bool> BpHwMapper::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.begin();it != _hidl_mDeathRecipients.end();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it);
            return status == ::android::OK;
        }}
    return false;
}


BnHwMapper::BnHwMapper(const ::android::sp<IMapper> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "android.hidl.memory@1.0", "IMapper") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::details::gServicePrioMap.get(_hidl_impl, {SCHED_NORMAL, 0});
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
}

// Methods from IMapper follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwMapper::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwMapper::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwMapper::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* mapMemory */:
        {
            if (!_hidl_data.enforceInterface(IMapper::descriptor)) {
                _hidl_err = ::android::BAD_TYPE;
                break;
            }

            const ::android::hardware::hidl_memory* mem;

            size_t _hidl_mem_parent;

            _hidl_err = _hidl_data.readBuffer(sizeof(*mem), &_hidl_mem_parent,  reinterpret_cast<const void **>(&mem));

            if (_hidl_err != ::android::OK) { break; }

            _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                    const_cast<::android::hardware::hidl_memory &>(*mem),
                    _hidl_data,
                    _hidl_mem_parent,
                    0 /* parentOffset */);

            if (_hidl_err != ::android::OK) { break; }

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::mapMemory::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)mem);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "mapMemory", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            ::android::sp<IMemory> _hidl_out_mappedMemory = _hidl_mImpl->mapMemory(*mem);

            ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

            if (_hidl_out_mappedMemory == nullptr) {
                _hidl_err = _hidl_reply->writeStrongBinder(nullptr);
            } else {
                ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::toBinder<
                        IMemory, BpHwMemory>(_hidl_out_mappedMemory);
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
                _hidl_args.push_back((void *)&_hidl_out_mappedMemory);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "mapMemory", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::interfaceChain::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "interfaceChain", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "interfaceChain", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::debug::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&fd);
                _hidl_args.push_back((void *)options);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "debug", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_mImpl->debug(fd, *options);

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "debug", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::interfaceDescriptor::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "interfaceDescriptor", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "interfaceDescriptor", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::getHashChain::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "getHashChain", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "getHashChain", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::ping::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "ping", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            this->ping();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "ping", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::getDebugInfo::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "getDebugInfo", &_hidl_args);
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
                        callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "getDebugInfo", &_hidl_args);
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

            atrace_begin(ATRACE_TAG_HAL, "HIDL::IMapper::notifySyspropsChanged::server");
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_ENTRY, "android.hidl.memory", "1.0", "IMapper", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::SERVER_API_EXIT, "android.hidl.memory", "1.0", "IMapper", "notifySyspropsChanged", &_hidl_args);
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

BsMapper::BsMapper(const ::android::sp<IMapper> impl) : ::android::hardware::details::HidlInstrumentor("android.hidl.memory@1.0", "IMapper"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsMapper::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED);
    }
    return ::android::hardware::Status();
}

// static
::android::sp<IMapper> IMapper::tryGetService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IMapper> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IMapper::descriptor, serviceName);

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
                sm->get(IMapper::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("IMapper: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            if (tries > 0) {
                ALOGW("IMapper: found null hwbinder interface");
            }break;
        }
        Return<sp<IMapper>> castRet = IMapper::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("IMapper: found dead hwbinder service");
                break;
            } else {
                ALOGW("IMapper: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("IMapper: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfLegacy) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(IMapper::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsMapper(IMapper::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

// static
::android::sp<IMapper> IMapper::getService(const std::string &serviceName, const bool getStub) {
    using ::android::hardware::defaultServiceManager;
    using ::android::hardware::details::waitForHwService;
    using ::android::hardware::getPassthroughServiceManager;
    using ::android::hardware::Return;
    using ::android::sp;
    using Transport = ::android::hidl::manager::V1_0::IServiceManager::Transport;

    sp<IMapper> iface = nullptr;

    const sp<::android::hidl::manager::V1_0::IServiceManager> sm = defaultServiceManager();
    if (sm == nullptr) {
        ALOGE("getService: defaultServiceManager() is null");
        return nullptr;
    }

    Return<Transport> transportRet = sm->getTransport(IMapper::descriptor, serviceName);

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
            ALOGI("getService: Will do try %d for %s/%s in 1s...", tries, IMapper::descriptor, serviceName.c_str());
            sleep(1);
        }
        if (vintfHwbinder && tries > 0) {
            waitForHwService(IMapper::descriptor, serviceName);
        }
        Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                sm->get(IMapper::descriptor, serviceName);
        if (!ret.isOk()) {
            ALOGE("IMapper: defaultServiceManager()->get returns %s", ret.description().c_str());
            break;
        }
        sp<::android::hidl::base::V1_0::IBase> base = ret;
        if (base == nullptr) {
            if (tries > 0) {
                ALOGW("IMapper: found null hwbinder interface");
            }continue;
        }
        Return<sp<IMapper>> castRet = IMapper::castFrom(base, true /* emitError */);
        if (!castRet.isOk()) {
            if (castRet.isDeadObject()) {
                ALOGW("IMapper: found dead hwbinder service");
                continue;
            } else {
                ALOGW("IMapper: cannot call into hwbinder service: %s; No permission? Check for selinux denials.", castRet.description().c_str());
                break;
            }
        }
        iface = castRet;
        if (iface == nullptr) {
            ALOGW("IMapper: received incompatible service; bug in hwservicemanager?");
            break;
        }
        return iface;
    }
    if (getStub || vintfPassthru || vintfLegacy) {
        const sp<::android::hidl::manager::V1_0::IServiceManager> pm = getPassthroughServiceManager();
        if (pm != nullptr) {
            Return<sp<::android::hidl::base::V1_0::IBase>> ret = 
                    pm->get(IMapper::descriptor, serviceName);
            if (ret.isOk()) {
                sp<::android::hidl::base::V1_0::IBase> baseInterface = ret;
                if (baseInterface != nullptr) {
                    iface = new BsMapper(IMapper::castFrom(baseInterface));
                }
            }
        }
    }
    return iface;
}

::android::status_t IMapper::registerAsService(const std::string &serviceName) {
    ::android::hardware::details::onRegistration("android.hidl.memory@1.0", "IMapper", serviceName);

    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return ::android::INVALID_OPERATION;
    }
    ::android::hardware::Return<bool> ret = sm->add(serviceName.c_str(), this);
    return ret.isOk() && ret ? ::android::OK : ::android::UNKNOWN_ERROR;
}

bool IMapper::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("android.hidl.memory@1.0::IMapper",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V1_0
}  // namespace memory
}  // namespace hidl
}  // namespace android
