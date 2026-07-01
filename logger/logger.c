#include "logger.h"

void Logger_init(Logger* logger, const char* path) {
    printf("Aegis logger initialised");
}
void Logger_log(Logger* logger, const char* message) {
    printf("Aegis log: TEST");
}
void Logger_destroy(Logger* logger) {
    printf("Aegis logger destroyed");
}
void Timestamp_format(Logger* logger) {
    printf("A");
}
