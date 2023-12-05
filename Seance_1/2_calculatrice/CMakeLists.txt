cmake_minimum_required(VERSION 3.0.0)
project(calculatrice VERSION 0.1.0 LANGUAGES C)

set(SRCS
    main.c
    simpleOperation.c
    )

SET(HEADER
    simpleOperation.h
    )

add_executable(calculatrice ${SRCS} ${HEADERS})