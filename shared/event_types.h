#ifndef EVENT_TYPES_H
#define EVENT_TYPES_H

typedef enum {
    EVENT_OPEN,       // Otwarcie pliku
    EVENT_EXEC,       // Uruchomienie procesu
    EVENT_CONNECT,    // Połączenie sieciowe
    EVENT_SANDBOX     // Uruchomienie sandboxa
} EventType;

#endif /* EVENT_TYPES_H */
