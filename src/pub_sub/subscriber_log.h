/*

Log book of all application subscribers. Access point by publishers to all subscribers.

*/

#pragma once

#include <iterator>
#include <memory>
#include <vector>
#include "subscriber.h"

#ifndef SUBSCRIBER_LOG_H_
#define SUBSCRIBER_LOG_H_

namespace messenger {
namespace pub_sub {

class SubscriberLog {
private:

    std::shared_ptr<SubscriberLog> instance_;
    static std::vector<Subscriber> subscriberInstances_;

    SubscriberLog() {};

public:

    inline std::shared_ptr<SubscriberLog> GetInstance() { 
        if(!instance_)
            instance_ = std::make_shared<SubscriberLog>(new SubscriberLog());
            
        return instance_;
    }
	
    // notifies subscriber instances concerned that publisher has sent a message (with known content type)
    template<class T> 
    static void NotifySubscribers(Publisher *pub, Message &m) {
        
        for (std::vector<Subscriber>::iterator it = subscriberInstances_.begin(); it != subscriberInstances_.end(); ++it) {
            if(it->IsSubscribed(pub, m.GetContentType())) {
                it->Update(m);
            }
        
        }
    }

};

} // namespace pub_sub
} // namespace messenger

#endif // SUBSCRIBER_LOG_H_

