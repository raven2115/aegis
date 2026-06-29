cmake_minimum_required(VERSION 4.2)
project(Aegis C)

set(CMAKE_C_STANDARD 11)

add_executable(Aegis
        shared/event.h
        shared/event_types.h
        shared/event_source.h
        shared/severity.h
        logger/logger.c
        logger/logger.h)