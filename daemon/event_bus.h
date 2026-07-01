#ifndef EVENT_BUS_H
#define EVENT_BUS_H

#include "../shared/event.h"
#include "../shared/common.h"
#include "event_queue.h"
#include "../shared/config.h"
#include "../shared/subscriber.h"

typedef struct {
    Subscriber subscribers[MAX_SUBSCRIBERS_COUNT];
    EventQueue event_queue;
    size_t subscriber_count;
} EventBus;

void EventBus_init(EventBus* bus);
void Publish(EventBus* bus, EventQueue event_queue);
void EventBus_Subscribe(EventBus* bus, Subscriber* subscriber);

#endif /* EVENT_BUS_H */
