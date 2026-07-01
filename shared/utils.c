#include "utils.h"

char* Timestamp_format(time_t timestamp_raw) {
    struct tm *tm_info = localtime(&timestamp_raw);
    if (tm_info == NULL) return NULL;

    char *buffer = malloc(20);
    if (buffer == NULL) return NULL;

    strftime(buffer, 20, "%Y-%m-%d %H:%M:%S", tm_info);
    return buffer;
}

bool IsInArray_char(char* array[], int element_count, char target[]) {
    int matches = 0;
    for (int i=0; i<element_count; i++){
        if (strcmp(array[i], target) == 0) {
            matches = 1;
            break;
        }
    }
    if (matches == 0) {
        return false;
    } else {
        return true;
    }
}
