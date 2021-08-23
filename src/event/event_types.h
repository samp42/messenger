/*
 * Event Type is used to describe what to do when certain types of event are detected.
 * New event type can be added by the end user. Each event-type is immutable at run-time.
 * EventTypes is a singleton.
 */

#pragma once

#include <memory>
#include <string>
#include <utility>
#include <vector>

#ifndef EVENT_TYPES_H_
#define EVENT_TYPES_H_

namespace messenger {
namespace event {

class EventTypes {
    private:
        // list of string (event type name)
        // index in array is event type index
        std::vector<std::string> eventTypes_;

        // public event type for "all event type"
        // callback is all callbacks
        const EventType kAllEventTypes_{"ALL_EVENT_TYPE", };

        // methods

        EventTypes() {}
    
        std::shared_ptr<EventTypes> instance_;

        inline bool IsPresentInEventTypes(std::string eventType) const;

        inline int FindEventType(std::string eventType) const;
    
    public:
        // delete copy constructor
        EventTypes(const EventTypes &eventTypes) = delete;

        std::shared_ptr<EventTypes> GetInstance();

        std::shared_ptr<EventType>  GetEventTypeByName(std::string eventTypeName) const;

        std::shared_ptr<EventType>  GetEventTypeByIndex(int eventTypeIndex) const;

        // can only add event types
        // should be done on init with no possibility to change further
        void AddEventType(EventType *eventType);
    
    private:
};

} // namespace event
} // namespace messenger

#endif // EVENT_TYPES_H_
