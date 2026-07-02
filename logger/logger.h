#ifndef LOGGER_H
#define LOGGER_H

#include "../shared/config.h"
#include "../shared/event.h"
#include "../shared/common.h"
#include "../shared/subscriber.h"

typedef struct {
    char log_path[PATH_LENGTH]; //sciezka do pliku loga gdzie bedziemy wpisywac (PATH_LENGTH = 256 z configu)
    Event event; //event ktory bedziemy wpisywac do loga
    FILE* log_file;
    Subscriber subscriber;
} Logger;

void Logger_init(Logger* logger, const char* logs_folder);
void Logger_log(Logger* logger, Event* event);
void Logger_destroy(Logger* logger);
void Logger_Callback(Event* event); //callback loggera jak dostanie event od event busa

#endif /* LOGGER_H */