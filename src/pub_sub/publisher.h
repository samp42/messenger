/*
Publisher for pub-sub design pattern

Use this to describe an publisher - or the object being suberved, for example:
- a sensor's value is suberved over time
- the commands queue being suberved for commands to execute
- etc.

The publisher has the option of having a strong reference to the subscriber, meaning that
it makes sure the subscriber has acknowledged the message. If not needed, a weak reference
can be used.

Use the publisher by making a class inherit from the actor class

*/

#pragma once

#include <future>
#include <memory>
#include <unordered_set>

#include "eventpp/eventdispatcher.h"

#include "messenger_event.h"
#include "subscription.h"

#ifndef PUBLISHER_H_
#define PUBLISHER_H_

namespace messenger {
namespace pub_sub {

class Publisher {
private:

    std::unordered_set<Subscription> subscriptions_;

public:
    Publisher();
	
    // enqueues the event callback in CallbackList for all specified subscribers
    void Notify(const event::MessengerEvent &event) const;

    // add subscription to subscription list with specified reference
    // this is intended to be used by Subscription only (friend struct) therefore the private
    void AddSubscription(const Subscription *subscription);

    // removes subscription
    void RemoveSubscription(const Subscription *subscription);

private:
    bool SubscriptionMatch(const Subscription *subscription);

    bool IsSubscribed(const Subscriber *subscriber, event::EventType eventType);
};

} // namespace pub_sub
} // namespace messenger

#endif

