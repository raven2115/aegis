#include "event_bus.h"

void EventBus_init(EventBus* bus) {
    printf("[+] [%s] Event bus initialised \n", Timestamp_format(time(NULL)));
}

void EventBus_Subscribe(EventBus* bus, Subscriber* subscriber, int id) {
    bus->subscribers[id] = *subscriber;
    printf("[+] [%s] New event bus subscriber (ID = %d): %s \n", Timestamp_format(time(NULL)), id, bus->subscribers[id].name);
}

void EventBus_Check(EventBus* bus) {
    printf("[*] [%s] Listing all event bus subscribers (sanity check):\n", Timestamp_format(time(NULL)));
    for (int i=0; i<CURRENT_SUBSCRIBER_COUNT; i++) {
        printf("[ID = %d] %s \n", i, bus->subscribers[i].name);
    }
}

void EventBus_Publish(EventBus* bus, EventQueue *event_queue) {
    if (event_queue->count > 0) {
        for (int i=0; i<event_queue->count; i++) {
            for (int j=0; j<CURRENT_SUBSCRIBER_COUNT; j++) {
                bus->subscribers[j].callback(&event_queue->queue[i]);
            }
        }
    } else {
        //time.sleep(x)
        printf("[!] [%s] Empty queue can't be published", Timestamp_format(time(NULL)));
    }
}