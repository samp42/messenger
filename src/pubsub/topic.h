/**
 * Subscribers subscribe to a topic.
 * The topic class handles updating subscriber (i.e.: invoking event callback).
 * The topic class also logs the events published to the topic.
 */

#pragma once

#include <unordered_set>

#include "subscription.h"

#ifndef TOPIC_H_
#define TOPIC_H_

namespace messenger {
namespace pubsub {

class Topic {
    private:
        // list of subscriptions 
        std::unordered_set<Subscription> subscriptions_;

    public:
	Topic();

        // add subscription to subscriptions_
        void AddSubscription(const Subscription &subscription);

        // remove subscription
        // return if operation was succesful
        bool RemoveSubscription(const Subscription &subscription);

	// 
	void NotifySubscriber();
};

} // namespace pubsub
} // namespace messenger

#endif // TOPIC_H_

