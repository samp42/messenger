#include "subscriber_log.h"

namespace messenger {
namespace pub_sub {

template<class T> 
static void SubscriberLog::NotifySubscribers(Publisher *pub, Message<T> &m, void *UpdateMethod(Message<T> &m)) {
    
}

} // namespace pub_sub    
} // namespace bot 
