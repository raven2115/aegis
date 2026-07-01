cmake_minimum_required(VERSION 4.2)
project(Aegis C)

set(CMAKE_C_STANDARD 11)

add_executable(Aegis
        main.c
        main.h
        daemon/daemon.c
        daemon/daemon.h
        daemon/event_bus.c
        daemon/event_bus.h
        shared/event.h
        shared/event.c
        shared/event_types.h
        shared/event_source.h
        shared/severity.h
        shared/config.h
        shared/common.h
        logger/logger.c
        logger/logger.h)