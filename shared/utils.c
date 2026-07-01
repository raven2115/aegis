#include "utils.h"

char* Timestamp_format(time_t timestamp_raw) {
    struct tm *tm_info = localtime(&timestamp_raw);
    if (tm_info == NULL) return NULL;

    char *buffer = malloc(20);
    if (buffer == NULL) return NULL;

    strftime(buffer, 20, "%Y-%m-%d %H:%M:%S", tm_info);
    return buffer;
}

