/*
Subscriber for Subscriber design pattern

Use this to describe an Subscriber to an other object (actor), for example:
- an actuator requiring a sensor's input
- an actuator listening to the commands queue
- typec.

Use the Subscriber by making a class inherit from the Subscriber class

*/

#pragma once

#include <optional>
#include <unordered_set>
// #include "message.h"
#include "publisher.h"

#ifndef SUBSCRIBER_H_
#define SUBSCRIBER_H_

// use this to subscribe to a certain content type from all publishers
// or all content from one publisher
#define ALL_PUBLISHERS  nullptr
#define ALL_TYPES 	    EventType::kAllEventTypes

using namespace botx::event;

namespace botx {
namespace util {

class Subscriber {
private:


public:

    Subscriber();

    // subscribe to content from publisher
    // given (pub, ALL_TYPES), will subscribe to all content from that publishers
    // given (ALL_PUBLISHERS, type), will subscribe to that content from all publishers
    // given (ALL_PUBLISHERS, ALL_TYPES), will subscribe to everything
    void Subscribe(Publisher *pub, EventType eventType);

    // unsubscribe to content from publisher
    // given (pub, ALL_TYPES), will unsubscribe to all content from that publishers
    // given (ALL_PUBLISHERS, type), will unsubscribe to that content from all publishers
    // given (ALL_PUBLISHERS, ALL_TYPES), will unsubscribe to everything
    void Unsubsribe(Publisher *pub, EventType eventType);


    void Update(EventCallback callback);

    ~Subscriber();
	
private:

    std::pair<Publisher*, EventType>
    MakeSubscription(Publisher *pub, EventType eventType);

};

} // namespace util
} // namespace botx

#endif // SUBSCRIBER_H_

