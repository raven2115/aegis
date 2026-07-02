#include "event_queue.h"

//ring buffer jest FIFO

void EventQueue_init(EventQueue *event_queue) {
    printf("[+] [%s] Event queue initialised (QUEUE_MAX_SIZE: %d)\n", Timestamp_format(time(NULL)), QUEUE_MAX_SIZE);
}

void Push_event(EventQueue *event_queue, Event event) {
    if (event_queue->count < QUEUE_MAX_SIZE) {
        event_queue->queue[event_queue->tail] = event;
        event_queue->tail = (event_queue->tail + 1) % QUEUE_MAX_SIZE;
        event_queue->count = event_queue->count + 1;
    } else {
        event_queue->queue[event_queue->tail] = event;
        event_queue->tail = (event_queue->tail + 1) % QUEUE_MAX_SIZE;
        event_queue->head = event_queue->tail;
    }
}

Event Read_event(EventQueue *event_queue) { //control flow bedzie taki ze Read_event moze byc callowane jesli IsQueueEmpty = false (inne moduly moga to sprawdzac)
    event_queue->count = event_queue->count - 1;
    event_queue->head = (event_queue->head + 1) % QUEUE_MAX_SIZE;
    return event_queue->queue[(event_queue->head - 1)];
}

int Queue_size(EventQueue *event_queue) {
    return event_queue->count;
}

bool IsQueueEmpty(EventQueue *event_queue) {
    if (event_queue->count == 0) {
        return true;
    } else {
        return false;
    }
}