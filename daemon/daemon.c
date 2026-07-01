#include "daemon.h"

typedef struct {
    Logger logger;
    Event event;
} Daemon;

void Daemon_init() {
    printf("Aegis daemon initialised");
}

void Daemon_start() {
    printf("Aegis daemon started");
}

void Daemon_stop() {
    printf("Aegis daemon stopped");
}