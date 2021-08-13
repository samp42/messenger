/**
 * Timer that returns time in given units
 */

#pragma once

#include <chrono>

#include "time_util.h"

#ifndef TIMER_H_
#define TIMER_H_

namespace messenger {
namespace time {

struct Timer {

	// start time
	// pointer to duration

	// end time (call destructor) or just call destructor outside or do nothing

	// constructs timer with given time resolution (units)
	Timer() {}
	
	// pointer to duration = timer duration
	~Timer{}

};

} // namespace time
} // namespace messenger

#endif // TIMER_H_
