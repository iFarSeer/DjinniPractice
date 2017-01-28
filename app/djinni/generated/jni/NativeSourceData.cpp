// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from encrypt.djinni

#include "NativeSourceData.hpp"  // my header
#include "Marshal.hpp"
#include "NativeAction.hpp"

namespace djinni_generated {

NativeSourceData::NativeSourceData() = default;

NativeSourceData::~NativeSourceData() = default;

auto NativeSourceData::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeSourceData>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::NativeAction::fromCpp(jniEnv, c.actoin_type)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.data)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.length)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeSourceData::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeSourceData>::get();
    return {::djinni_generated::NativeAction::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mActoinType)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_mData)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mLength))};
}

}  // namespace djinni_generated
