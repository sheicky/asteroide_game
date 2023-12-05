cmake_minimum_required(VERSION 3.0.0)
project(pointers VERSION 0.1.0 LANGUAGES C CXX)


set(SRCS
    main.cpp
    pointers.cpp
    dynamic.cpp
    structures.cpp
    )

SET(HEADER
    pointers.hpp
    dynamic.hpp
    structures.hpp
    )

add_executable(pointers ${SRCS} ${HEADERS})