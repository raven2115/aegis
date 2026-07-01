#include "event_bus.h"

void EventBus_init(EventBus* bus) {
    printf("[+] [%s] Event bus initialised \n", Timestamp_format(time(NULL)));
}

void EventBus_Subscribe(EventBus* bus, Subscriber* subscriber) {
    printf("[+] [%s] New event bus subscriber: %s \n", Timestamp_format(time(NULL)), subscriber->name);
}