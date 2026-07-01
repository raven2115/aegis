#include "daemon.h"
#include "../logger/logger.h"
#include "event_bus.h"

typedef struct {
    Logger logger;
    EventBus bus;
    Event event;
} Daemon;

void Daemon_init(Daemon *daemon) {
    Logger_init(&daemon->logger, PATH_LOGS_FOLDER);
    EventBus_init(&daemon->bus);
    printf("[+] [%s] Daemon initialised", Timestamp_format(time(NULL)));
}

void Daemon_start() {
    printf("Aegis daemon started");
}

void Daemon_stop() {
    printf("Aegis daemon stopped");
}