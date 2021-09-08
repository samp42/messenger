/**
 * hasher for unordered_set
 */

#pragma once

#include <functional>

#include "subscription.h"

#ifndef SUBSCRIPTION_HASHER_H_
#define SUBSCRIPTION_HASHER_H_

namespace messenger {
namespace pubsub {

struct SubscriptionHasher {

    size_t operator()(const Subscription &sub) {
        return std::hash<
    }

};

} // namespace pubsub
} // namespace messenger

#endif // SUBSCRIPTION_HASHER_H_
