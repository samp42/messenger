#include "event_types.h"

namespace messneger {
namespace event {

std::weak_ptr<EventTypes> EventTypes::GetInstance() {
    if(!this->instance_) {
        this->instance_ = std::make_unique<EventTypes>(new EventTypes());
    }

    return std::make_shared<EventTypes>(this->instance_.get());
}

std::weak_ptr<EventType>  EventTypes::GetEventTypeByName(std::string eventTypeName) const {
    int index = FindEventType(eventTypeName);

    if(index != -1) {
        return std::make_shared<EventType>(std::make_pair(eventTypes_[index], index));
    }

    return std::make_shared<EventType>(nullptr);
}

std::weak_ptr<EventType> EventTypes::GetEventTypeByIndex(int eventTypeIndex) const {
    if(eventTypeIndex >= 0 && eventTypeIndex < eventTypes_.size())
        return std::make_shared<EventType>(std::make_pair(eventTypes_[eventTypeIndex], eventTypeIndex));

    return std::make_shared<EventType>(nullptr);
}

void EventTypes::AddEventType(std::string eventType) {
    if(!IsPresentInEventTypes(eventType))
        this->eventTypes_.push_back(eventType);
}

// instantiate eventTypes_ with given event type names
EventTypes::EventTypes() {

}

inline bool EventTypes::IsPresentInEventTypes(std::string eventType) const {
    for(auto s : eventTypes_) {
        if(s == eventType)
            return true;
    }

    return false;
}

inline int EventTypes::FindEventType(std::string eventType) const {
    for(int i=0; i < eventTypes_.size(); i++) {
       if(eventTypes_[i] == eventType)
           return i;
    }

    return -1;
}

} // namespace event
} // namespace messneger
