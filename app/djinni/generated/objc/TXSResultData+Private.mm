// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from encrypt.djinni

#import "TXSResultData+Private.h"
#import "DJIMarshal+Private.h"
#import "TXSResultCode+Private.h"
#include <cassert>

namespace djinni_generated {

auto ResultData::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Enum<::ifarseer::result_code, TXSResultCode>::toCpp(obj.code),
            ::djinni::Binary::toCpp(obj.data),
            ::djinni::I32::toCpp(obj.length)};
}

auto ResultData::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[TXSResultData alloc] initWithCode:(::djinni::Enum<::ifarseer::result_code, TXSResultCode>::fromCpp(cpp.code))
                                          data:(::djinni::Binary::fromCpp(cpp.data))
                                        length:(::djinni::I32::fromCpp(cpp.length))];
}

}  // namespace djinni_generated
