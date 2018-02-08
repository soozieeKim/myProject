#ifndef HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BSVEHICLE_H
#define HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BSVEHICLE_H

#include <cutils/trace.h>
#include <future>
#include <android/hardware/automotive/vehicle/2.0/IVehicle.h>

#include <hidl/HidlPassthroughSupport.h>
#include <hidl/TaskRunner.h>
namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {
namespace V2_0 {

struct BsVehicle : IVehicle, ::android::hardware::details::HidlInstrumentor {
    explicit BsVehicle(const ::android::sp<IVehicle> impl);
    // Methods from IVehicle follow.
    ::android::hardware::Return<void> getAllPropConfigs(getAllPropConfigs_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getAllPropConfigs::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getAllPropConfigs([&](const auto &_hidl_out_propConfigs) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_propConfigs);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getAllPropConfigs", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_propConfigs);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> getPropConfigs(const ::android::hardware::hidl_vec<int32_t>& props, getPropConfigs_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getPropConfigs::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&props);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getPropConfigs(props, [&](const auto &_hidl_out_status, const auto &_hidl_out_propConfigs) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_propConfigs);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getPropConfigs", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_status, _hidl_out_propConfigs);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> get(const VehiclePropValue& requestedPropValue, get_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::get::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&requestedPropValue);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->get(requestedPropValue, [&](const auto &_hidl_out_status, const auto &_hidl_out_propValue) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_propValue);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "get", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_status, _hidl_out_propValue);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<StatusCode> set(const VehiclePropValue& propValue) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::set::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&propValue);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->set(propValue);

        StatusCode _hidl_out_status = _hidl_return;
        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "set", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<StatusCode> subscribe(const ::android::sp<IVehicleCallback>& callback, const ::android::hardware::hidl_vec<SubscribeOptions>& options) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::subscribe::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&callback);
            _hidl_args.push_back((void *)&options);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
            }
        }

        ::android::sp<IVehicleCallback> _hidl_wrapped_callback;
        if (callback != nullptr && !callback->isRemote()) {
            _hidl_wrapped_callback = IVehicleCallback::castFrom(::android::hardware::details::wrapPassthrough<IVehicleCallback>(callback));
            if (_hidl_wrapped_callback == nullptr) {
                return ::android::hardware::Status::fromExceptionCode(
                        ::android::hardware::Status::EX_TRANSACTION_FAILED,
                        "Cannot wrap passthrough interface.");
            }
        } else {
            _hidl_wrapped_callback = callback;
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->subscribe(_hidl_wrapped_callback, options);

        StatusCode _hidl_out_status = _hidl_return;
        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "subscribe", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<StatusCode> unsubscribe(const ::android::sp<IVehicleCallback>& callback, int32_t propId) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::unsubscribe::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&callback);
            _hidl_args.push_back((void *)&propId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
            }
        }

        ::android::sp<IVehicleCallback> _hidl_wrapped_callback;
        if (callback != nullptr && !callback->isRemote()) {
            _hidl_wrapped_callback = IVehicleCallback::castFrom(::android::hardware::details::wrapPassthrough<IVehicleCallback>(callback));
            if (_hidl_wrapped_callback == nullptr) {
                return ::android::hardware::Status::fromExceptionCode(
                        ::android::hardware::Status::EX_TRANSACTION_FAILED,
                        "Cannot wrap passthrough interface.");
            }
        } else {
            _hidl_wrapped_callback = callback;
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->unsubscribe(_hidl_wrapped_callback, propId);

        StatusCode _hidl_out_status = _hidl_return;
        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unsubscribe", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<void> debugDump(debugDump_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debugDump::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->debugDump([&](const auto &_hidl_out_s) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_s);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debugDump", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_s);
        });

        return _hidl_return;
    }

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceChain::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceChain([&](const auto &_hidl_out_descriptors) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptors);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceChain", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_descriptors);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::debug::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&fd);
            _hidl_args.push_back((void *)&options);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->debug(fd, options);

        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "debug", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::interfaceDescriptor::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceDescriptor([&](const auto &_hidl_out_descriptor) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptor);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "interfaceDescriptor", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_descriptor);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getHashChain::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getHashChain([&](const auto &_hidl_out_hashchain) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_hashchain);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getHashChain", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_hashchain);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> setHALInstrumentation() {
        configureInstrumentation();
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::linkToDeath::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            _hidl_args.push_back((void *)&cookie);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "linkToDeath", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->linkToDeath(recipient, cookie);

        bool _hidl_out_success = _hidl_return;
        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "linkToDeath", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<void> ping() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::ping::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->ping();

        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "ping", &_hidl_args);
            }
        }

        return _hidl_return;
    }
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT);
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::getDebugInfo::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getDebugInfo([&](const auto &_hidl_out_info) {
            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_info);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "getDebugInfo", &_hidl_args);
                }
            }

            _hidl_cb(_hidl_out_info);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> notifySyspropsChanged() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::notifySyspropsChanged::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl, mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks, &_hidl_error] {
            mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "notifySyspropsChanged", &_hidl_args);
                }
            }

        });
        return _hidl_return;
    }
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IVehicle::unlinkToDeath::passthrough");
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unlinkToDeath", &_hidl_args);
            }
        }

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->unlinkToDeath(recipient);

        bool _hidl_out_success = _hidl_return;
        atrace_end(ATRACE_TAG_HAL);
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.automotive.vehicle", "2.0", "IVehicle", "unlinkToDeath", &_hidl_args);
            }
        }

        return _hidl_return;
    }

private:
    const ::android::sp<IVehicle> mImpl;
    ::android::hardware::details::TaskRunner mOnewayQueue;

    ::android::hardware::Return<void> addOnewayTask(std::function<void(void)>);

};

}  // namespace V2_0
}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_AUTOMOTIVE_VEHICLE_V2_0_BSVEHICLE_H
