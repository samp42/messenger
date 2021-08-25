/**
 * call the () operator to compare 2 Subscription
 * necessary for unordred_set
 */

#pragma once

#include "subscription.h"

#ifndef SUBSCRIPTION_COMPARATOR_H_
#define SUBSCRIPTION_COMPARATOR_H_

namespace messenger {
namespace pubsub {

struct SubscriptionComparator {

    bool operator()(const Subscription &sub1, const Subscription &sub2) {
        return sub1==sub2;
    }

};

} // namespace pubsub
} // namespace messenger
    
#endif // SUBSCRIPTION_COMPARATOR_H_
