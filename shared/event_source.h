#ifndef EVENT_SOURCE_H
#define EVENT_SOURCE_H

//enum z kazdym typem eventu
typedef enum {
    SOURCE_Kernel,
    SOURCE_Sandbox,
    SOURCE_Network,
    SOURCE_Memory,
    SOURCE_ELFParser,
    SOURCE_Plugin
} EventSource;
#endif
