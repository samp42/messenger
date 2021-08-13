#include "subscriber.h"

namespace messenger {
namespace pub_sub {

void Subscriber::Subscribe(Publisher *pub, EventType eventType) { 
    pub->AddSubscriber(this, eventType);
}

void Subscriber::Unsubsribe(Publisher *pub, EventType eventType) {
    pub->RemoveSubscriber(this, eventType);
}

void Subscriber::Update(messenger::pub_sub::EventCallback callback) {
    callback();
}

Subscriber::~Subscriber() {
    // clear pointers in this->subscriptions_
}

std::pair<Publisher*, EventType> Subscriber::MakeSubscription(
    Publisher *pub, EventType type) {
    
    if(pub && type)
        return std::make_pair(pub, type);
    else if(pub && !type)
        return std::make_pair(pub, ALL_TYPES);
    else if(!pub && type)
        return std::make_pair(ALL_PUBLISHERS, type);
    else
        return std::make_pair(ALL_PUBLISHERS, ALL_TYPES);
    
}

} // namespace pub_sub    
} // namespace messenger
