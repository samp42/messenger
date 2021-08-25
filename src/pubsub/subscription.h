/**
 * describes a subscriptions composed of a subscriber and event type
 */

#pragma once

#include <memory>

#include "messenger_event.h"
#include "subscriber.h"

#ifndef SUBSCRIPTION_H_
#define SUBSCRIPTION_H_

namespace messenger {
namespace pubsub {

struct Subscription {
    // subscription always point to the same subscriber
    const std::shared_ptr<Subscriber> subscriber;
    // subscription contains a unique event type
    const event::EventType eventType;

    Subscription(const Subscriber *subscriber, event::EventType eventType) : subscriber_(std::make_shared<Subscriber>(subscriber)), eventType_(eventType) {}

    // necessary of insertion in set (see topic.h and subscription_comparator.h)
    bool operator ==(const Subscription &subscription) const {
        return this->(*subscriber) == subscription.(*subscriber)
            && this->eventType == subscription.eventType;
    }
};

} // namespace pub_sub
} // namespace messenger

#endif // SUBSCRIPTION_H_
