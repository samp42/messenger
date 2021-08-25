/**
 * Message template to be sent by a publisher to its subscribers
 */

#pragma once

#include <memory>

#ifndef MESSAGE_H_
#define MESSAGE_H_

namespace messenger {
namespace message {

// class T is content type
// class A is action type (function, lambda, etc.)
template<class T, class A>
struct Message {
    // data
    // const pointer to const data makes it safe to read without lock
    const std::shared_ptr<const T> content;
    // action (function)
    const std::shared_ptr<const A> action;

    Message(T content, EventType eventType) :
        this->content(content),
        this->eventType(eventType) {}

};

} // namespace message
} // namespace messenger

#endif // MESSAGE_H_
