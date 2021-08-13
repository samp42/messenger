/**
 * Runner
 *
 * Initializes components and start when the start method is invoked.
 * Will start processing events and starts publishing to subscribers.
 */

#pragma once

#include <chrono>
#include <memory>

#include "eventpp/eventqueue.h"

#include "event_callback.h"
#include "event_types.h"
#include "publisher.h"
#include "subscriber.h"

#ifndef MESSENGER_H_
#define MESSENGER_H_

using namespace eventpp;

namespace messenger {

EventQueue<EventType, EventCallback

class Runner {
private:
	
	static std::shared_ptr<Runner> instance_;
	
	Runner() {}

public:
	
	Runner(const Runner &runner) = delete;

	inline std::shared_ptr<Runner> GetInstance() {
		if(!intance_) {
			this->instance_ = std::make_shared<Runner>(new Runner());
		}

		return this->instance_;

	// starts a thread and processes events
	void Start();

};

} // namespace messenger

#endif // MESSENGER_H_

