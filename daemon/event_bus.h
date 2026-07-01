#ifndef EVENT_BUS_H
#define EVENT_BUS_H

#include "../shared/event.h"
#include "daemon.h"

void publish(Event event);
void subscribe();

#endif /* EVENT_BUS_H */