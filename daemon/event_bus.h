#ifndef EVENT_BUS_H
#define EVENT_BUS_H

#include "../shared/event.h"
#include "../shared/common.h"
#include "../shared/utils.h"
#include "event_queue.h"
#include "../shared/config.h"
#include "daemon.h"

typedef struct {
    char name[16]; //nazwa subskrybenta
    int callback; //do zmiany - funkcja wywolywana kiedy bedzie nowy event
} Subscribers;

typedef struct {
    Subscribers subscribers;
    EventQueue event_queue;
} EventBus;

void EventBus_init(EventBus* bus);
void Publish(EventQueue event_queue);
void Subscribe();

#endif /* EVENT_BUS_H */