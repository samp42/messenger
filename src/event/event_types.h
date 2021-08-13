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

typedef std::pair<std::string, int> EventType;

class EventTypes {
private:
    // list of string (event type name)
    // index in array is event type index
    // ordered from highest priority (index 0) to lowest priority
    std::vector<std::string> eventTypes_;

    // public event type for "all event type"
    const EventType kAllEventTypes_ = std::make_pair<std::string, int>("ALL_EVENT_TYPE", -1);

public:
    // delete copy constructor
    EventTypes(const EventTypes &eventTypes) = delete;

    std::weak_ptr<EventTypes> GetInstance();

    std::weak_ptr<EventType>  GetEventTypeByName(std::string eventTypeName) const;

    std::weak_ptr<EventType>  GetEventTypeByIndex(int eventTypeIndex) const;

    // can only add event types
    // should be done on init with no possibility to change further
    void AddEventType(std::string eventType);
    
private:
    EventTypes();
    
    std::unique_ptr<EventTypes> instance_;

    inline bool IsPresentInEventTypes(std::string eventType) const;

    inline int FindEventType(std::string eventType) const;
};

} // namespace event
} // namespace messenger

#endif // EVENT_TYPES_H_
