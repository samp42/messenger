/**
 * Message template to be sent by a publisher to its subscribers
 */

#include 

#pragma once

#ifndef MESSAGE_H_
#define MESSAGE_H_

namespace messenger {
namespace message {

template<class T>
struct Message {
	const T content_;
	const EventType eventSubscription_; 

	Message(T content, EventType eventType) : content_(content), eventType_(eventType) {}

}

}
} // namespace messenger

#endif // MESSAGE_H_
