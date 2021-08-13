/**
 * describes a subscriptions composed of a subscriber and event type
 */

#pragma once

#ifndef SUBSCRIPTION_H_
#define SUBSCRIPTION_H_

#include <memory>

#include "messenger_event.h"
#include "subscriber.h"

namespace messenger {
namespace pub_sub {

struct Subscription {
    // subscription always point to the same subscriber
    const std::shared_ptr<Subscriber> subscriber_;
    // subscription contains a unique event type
    const event::EventType eventType;

    Subscription(const Subscriber *subscriber, event::EventType eventType) : subscriber_(std::make_shared<Subscriber>(subscriber)), eventType_(eventType) {}
};

} // namespace pub_sub
} // namespace messenger

#endif // SUBSCRIPTION_H_
