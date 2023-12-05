cmake_minimum_required(VERSION 3.0.0)
project(object VERSION 0.1.0 LANGUAGES C CXX)


set(SRCS
    main.cpp
    Time.cpp
    )

SET(HEADER
    Time.hpp
    SwitchSummerTime.hpp
    TimeComparator.hpp
    )

add_executable(object ${SRCS} ${HEADERS})