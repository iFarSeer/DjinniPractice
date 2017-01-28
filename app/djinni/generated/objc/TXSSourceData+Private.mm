// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from encrypt.djinni

#import "TXSSourceData+Private.h"
#import "DJIMarshal+Private.h"
#import "TXSAction+Private.h"
#include <cassert>

namespace djinni_generated {

auto SourceData::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Enum<::ifarseer::action, TXSAction>::toCpp(obj.actoinType),
            ::djinni::Binary::toCpp(obj.data),
            ::djinni::I32::toCpp(obj.length)};
}

auto SourceData::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[TXSSourceData alloc] initWithActoinType:(::djinni::Enum<::ifarseer::action, TXSAction>::fromCpp(cpp.actoin_type))
                                                data:(::djinni::Binary::fromCpp(cpp.data))
                                              length:(::djinni::I32::fromCpp(cpp.length))];
}

}  // namespace djinni_generated
