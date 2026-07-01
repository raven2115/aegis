#ifndef DAEMON_H
#define DAEMON_H

#include "../shared/common.h"
#include "../shared/event.h"
#include "../logger/logger.h"
#include "../shared/utils.h"
#include "event_bus.h"
#include "event_queue.h"
#include "../shared/subscriber.h"

typedef struct {
    Logger logger;
    EventBus bus;
    EventQueue event_queue;
} Daemon;

void Daemon_init(Daemon *daemon);
void Daemon_run();
void Daemon_destroy();

#endif /* DAEMON_H */
