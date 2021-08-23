/**
 * Event callback inteface.
 */

#pragma once

#include <functional>

#include "subscriber.h"

#ifndef EVENT_CALLBACK_H_
#define EVENT_CALLBACK_H_

namespace messenger {
namespace event {

struct EventCallback{
    std::function<void(pubsub::Subscriber *, void *)> callback_;

    EventCallback(std::function<void(pubsub::Subscriber *, void *)> callback) :
        callback_(callback) {}

    operator()() {
        callback_();
    }
};

} // namespace event
} // namespace messenger

#endif // EVENT_CALLBACK_H_
