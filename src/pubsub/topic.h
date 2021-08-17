/**
 * Subscribers subscribe to a topic.
 * The topic class handles updating subscriber (i.e.: invoking event callback).
 * The topic class also logs the events published to the topic.
 */

#pragma once

#ifndef TOPIC_H_
#define TOPIC_H_

namespace messenger {
namespace pubsub {

class Topic {
	private:
		

	public:
		Topic() {}

		// 
		void UpdateSubscriber();
};

} // namespace pubsub
} // namespace messenger

#endif // TOPIC_H_

