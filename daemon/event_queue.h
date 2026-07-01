#ifndef EVENT_QUEUE_H
#define EVENT_QUEUE_H

#include "../shared/common.h"
#include "../shared/event.h"
#include "../shared/config.h"

typedef struct {
    Event queue[QUEUE_MAX_SIZE];
    int head;
    int tail;
    int count;
} EventQueue;

void EventQueue_init(EventQueue *event_queue);
void Push_event(EventQueue *event_queue, Event event);
void Pop_event(EventQueue *event_queue, Event event);
bool Is_queue_empty(EventQueue *event_queue);
int Queue_size(EventQueue *event_queue);
void Queue_clear(EventQueue *event_queue);

#endif /* EVENT_QUEUE_H */