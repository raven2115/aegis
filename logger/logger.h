#ifndef LOGGER_H
#define LOGGER_H
#include "../shared/config.h"

typedef struct {
    char log_path[PATH_LENGTH]; //definiujemy tablice o dlugosci 256 z configu
} Logger;

void Logger_init(Logger* logger, const char* path);
void Logger_log(Logger* logger, const char* message);
void Logger_destroy(Logger* logger);

#endif /* LOGGER_H */