/**
 * Runner
 *
 * Initializes components and start when the start method is invoked.
 * Will start processing events and starts publishing to subscribers.
 *
 * Initializes event types
 */

#pragma once

#include <chrono>
#include <memory>

#include "eventpp/eventqueue.h"

#include "event_callback.h"
#include "event_type.h"
#include "event_types.h"
#include "publisher.h"
#include "subscriber.h"

#ifndef RUNNER_H_
#define RUNNER_H_

using namespace eventpp;

namespace messenger {

typedef std::chrono::nanoseconds nanoseconds;
typedef std::chrono::milliseconds milliseconds;
typedef std::chrono::microseconds microseconds;
typedef std::chrono::seconds seconds;

class Runner {
    private:
	
        // define eventpp::EventQueue
        // see https://github.com/wqking/eventpp/blob/master/doc/tutorial_eventqueue.md
        EventQueue<EventType, EventCallback> queue_;
	
        // time interval between eventqueue processing
        // nanoseconds, but will just be a big number if interval is in another order
        // of magnitude
        nanoseconds processInterval_;

        // singleton instance
        static std::shared_ptr<Runner> instance_;
	
        // private singleton constructor
	Runner() {}

    public:
	
	Runner(const Runner &runner) = delete;
        void operator=(const Runner &) = delete;
	
        inline std::shared_ptr<Runner> GetInstance() {
	    return this->instance_;
        }

        // so constructor isn't called outside
        static void Init(EventCallback callback, nanoseconds interval)

	// starts a thread and processes events
	void Start();

};

} // namespace messenger

#endif // RUNNER_H_

