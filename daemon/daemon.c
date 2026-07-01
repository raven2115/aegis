#include "daemon.h"

void Daemon_init(Daemon *daemon) {
    //inicjalizacja modulow
    Logger_init(&daemon->logger, PATH_LOGS_FOLDER);
    EventBus_init(&daemon->bus);
    EventQueue_init(&daemon->event_queue);
    //subskrybowanie event busa
    EventBus_Subscribe(&daemon->bus, &daemon->logger.subscriber);
    printf("[+] [%s] Daemon initialised", Timestamp_format(time(NULL)));
}

void Daemon_run() {
    printf("Aegis daemon started");
}

void Daemon_destroy() {
    printf("Aegis daemon stopped");
}