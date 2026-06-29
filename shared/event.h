#ifndef EVENT_H
#define EVENT_H

#include <stdint.h>
#include <unistd.h>

#include "severity.h"
#include "event_source.h"
#include "event_types.h"

/* Informacje o evencie */

typedef struct {
    EventHeader event_header; //naglowek eventu
    EventTime event_time; //czas wystapienia eventu
    ProcessInfo process_info; //informacje o procesie
    Payload payload; //payload
} Event;

typedef struct {
    EventType event_type; // Typ eventu (EXEC, OPEN, CONNECT itd.) - co się wydarzyło?
    Severity severity_level; // Poziom ważności (INFO, LOW, MEDIUM, HIGH, CRITICAL)
    EventSource event_source; // Źródło eventu (kernel, network, sandbox itd.)
} EventHeader;

/* Czas wystąpienia eventu */
typedef struct {
    uint64_t unix_sec; // Liczba sekund od 1.01.1970 (Unix timestamp)
} EventTime;

/* Podstawowe informacje o procesie */
typedef struct {
    pid_t pid; // PID procesu
    pid_t ppid; // PID procesu rodzica
    uid_t uid; // UID użytkownika
} ProcessInfo;

/* Dane charakterystyczne dla konkretnego eventu */
typedef struct {
    int change_this;
} Payload;

#endif /* EVENT_H */