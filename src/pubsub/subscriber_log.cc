#include "subscriber_log.h"

namespace messenger {
namespace pub_sub {

template<class T> 
static void SubscriberLog::NotifySubscribers(Publisher *pub, Message<T> &m, std::function<void UpdateMethod(Message<T> &m)>) {

    for (std::vector<Subscriber>::iterator it = subscriberInstances_.begin(); it != subscriberInstances_.end(); ++it) {
        if(it->IsSubscribed(pub, m.eventSubscription_)) {
            it->Update(m);
        }
	} 
}

} // namespace pub_sub    
} // namespace bot 
