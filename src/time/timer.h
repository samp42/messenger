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

class Timer {

	// start time
	// pointer to duration

	// end time (call declasor) or just call destructor outside or do nothing

	// conclass timer with given time resolution (units)
	Timer() {}
	
	// pointer to duration = timer duration
	~Timer{}

};

} // namespace time
} // namespace messenger

#endif // TIMER_H_
