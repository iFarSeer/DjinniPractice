// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from encrypt.djinni

#pragma once

#include <functional>

namespace ifarseer {

enum class result_code : int {
    OK,
    ERROR,
};

}  // namespace ifarseer

namespace std {

template <>
struct hash<::ifarseer::result_code> {
    size_t operator()(::ifarseer::result_code type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
