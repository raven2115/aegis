#ifndef EVENT_SOURCE_H
#define EVENT_SOURCE_H

//enum z kazdym typem eventu
typedef enum {
    SOURCE_Kernel,
    SOURCE_Sandbox,
    SOURCE_Network,
    SOMemory,
    ELFParser,
    Plugin
} EventSource;
#endif