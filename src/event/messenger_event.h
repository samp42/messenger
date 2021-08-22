/**
 * Event inteface to be used by publishers and subscribers.
 * Subscribers (ex.: control loops) subscribe to events from publishers (ex.: subsystems, commands)
 */

#pragma once

#include <functional>
#include <memory>
#include <vector>

#include "subscriber.h"
#include "event_types.h"
#include "event_callback.h"

#ifndef EVENT_H_
#define EVENT_H_

namespace messenger {
namespace event {

struct MessengerEvent{
    const EventType eventType_;
    const std::shared_ptr<const void> message_;
    const std::shared_ptr<EventCallback> callback_;

    MessengerEvent(EventType type, void *message, EventCallback *callback) :
        eventType_(type),
        message_(std::make_shared<void>(message)),
        callback_(std::make_shared<EventCallback>(callback)) {}
};

} // namespace event
} // namespace messenger

#endif // EVENT_H_
