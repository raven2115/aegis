#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

typedef struct {
    char name[32];
    void (*callback)(Event* event);
} Subscriber;

#endif /* SUBSCRIBER_H */