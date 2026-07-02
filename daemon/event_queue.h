#ifndef EVENT_QUEUE_H
#define EVENT_QUEUE_H

#include "../shared/common.h"
#include "../shared/event.h"
#include "../shared/config.h"

typedef struct {
    Event queue[QUEUE_MAX_SIZE];
    int head; //miejsce nastepnego odczytu
    int tail; //miejsce nastepnego zapisu
    int count; //liczba elementow
} EventQueue;

void EventQueue_init(EventQueue *event_queue);
void Push_event(EventQueue *event_queue, Event event);
Event Read_event(EventQueue *event_queue);
bool IsQueueEmpty(EventQueue *event_queue);
int Queue_size(EventQueue *event_queue);


#endif /* EVENT_QUEUE_H */