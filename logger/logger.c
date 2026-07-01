#include "logger.h"

void Logger_init(Logger* logger, const char* logs_folder) {
    printf("[+] [%s] Logger initialised with: \nPATH_LOGS_FOLDER: %s \n", Timestamp_format(time(NULL)), logs_folder);
}
void Logger_log(Logger* logger, const char* message) {
    printf("Aegis log: TEST");
}
void Logger_destroy(Logger* logger) {
    printf("Aegis logger destroyed");
}