#ifndef UTILS_H
#define UTILS_H

#include "common.h"

char* Timestamp_format(time_t timestamp_raw);
bool IsInArray_char(char* array[], int element_count, char target[]);

#endif /* UTILS_H */