/**
 * Event policy for use with eventpp
 */

#pragma once

#include "messenger_event.h"

#ifndef EVENT_POLICY_H_
#define EVENT_POLICY_H_

namespace messenger {
namespace event {

struct EventPolicy {
    static inline EventType GetEvent(const BotxEvent &e) { return e.eventType_; }
};

} // namespace event
} // namespace messenger

#endif // EVENT_POLICY_H_

