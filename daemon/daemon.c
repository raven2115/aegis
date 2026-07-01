#include "daemon.h"

typedef struct {
    Logger logger;
    EventBus bus;
    EventQueue event_queue;
} Daemon;

void Daemon_init(Daemon *daemon) {
    Logger_init(&daemon->logger, PATH_LOGS_FOLDER);
    EventBus_init(&daemon->bus);
    EventQueue_init(&daemon->event_queue);
    printf("[+] [%s] Daemon initialised", Timestamp_format(time(NULL)));
}

void Daemon_start() {
    printf("Aegis daemon started");
}

void Daemon_stop() {
    printf("Aegis daemon stopped");
}