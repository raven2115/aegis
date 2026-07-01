#include "event_bus.h"

void EventBus_init(EventBus* bus) {
    printf("[+] [%s] Event bus initialised \n", Timestamp_format(time(NULL)));
}