/**
 * Some time utilities from std::chrono
 */

#pragma once

#include <chrono>

#ifndef TIME_UTIL_H_
#define TIME_UTIL_H

namespace messenger {
namespace time_util {

// durations
namespace {
    // don't use this outside this file, would be hella dangerous
    template<class T>
    using Duration = std::chrono::duration<int64_t, T>>;
}

typedef Duration<std::ratio<1, 1000000000>> nanoseconds;
typedef Duration<std::ratio<1, 1000000>> microseconds;
typedef Duration<std::ratio<1, 1000>> milliseconds;
typedef Duration<std::ratio<1, 1>> seconds;

// clocks
using Clock = std::chrono::steady_clock;
using TimePoint_f = Clock::time_point<float>;
using TimePoint_d = Clock::time_point<double>;

// time casts
template<class T>
inline T TimeCast<T>(Duration d) { return std::chrono::duration_cast<T>(d); }}

} // namespace time
} // namespace messenger

#endif // TIME_UTIL_H__
