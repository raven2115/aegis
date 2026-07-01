#ifndef DAEMON_H
#define DAEMON_H

#include "../shared/common.h"
#include "../shared/event.h"
#include "../logger/logger.h"
#include "../shared/utils.h"
#include "../logger/logger.h"
#include "event_bus.h"
#include "event_queue.h"

void Daemon_init();
void Daemon_run();
void Daemon_destroy();

#endif /* DAEMON_H */