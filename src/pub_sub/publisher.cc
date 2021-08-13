/*
Publisher class definition
*/

#include "publisher.h"

namespace messenger {
namespace pub_sub {

void Publisher::Notify(const event::MessengerEvent &event) const {
    // for (const auto subscription : subscriptions_) {
    //     auto f = std::async(std::launch::async, &Subscriber::Update, event.callback_);
    // }
    for(const Subscription subscription : subscriptions_) {
        
    }
}

void Publisher::AddSubscription(const Subscription *subscription) {
    this->subscriptions_.emplace(std::make_shared<Subscription>(subscription));
}

void Publisher::RemoveSubscription(const Subscription *subscription) {
    subscriptions_.erase(Subscription(subscriber, eventType));
}


} // namespace pub_sub
} // namespace messenger
