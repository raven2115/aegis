#ifndef LOGGER_H
#define LOGGER_H
#include "../shared/config.h"
#include "../shared/event.h"

typedef struct {
    char log_path[PATH_LENGTH]; //sciezka do pliku loga gdzie bedziemy wpisywac (PATH_LENGTH = 256 z configu)
    Event event; //event ktory bedziemy wpisywac do loga
    FILE* log_file;
} Logger;

void Logger_init(Logger* logger, const char* log_path);
void Logger_log(Logger* logger, const char* message);
void Logger_destroy(Logger* logger);
void Timestamp_format(Logger* logger);

#endif /* LOGGER_H */