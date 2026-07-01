#include "event_queue.h"

void EventQueue_init(EventQueue *event_queue) {
    printf("[+] [%s] Event queue initialised\n", Timestamp_format(time(NULL)));
}