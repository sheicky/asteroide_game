cmake_minimum_required(VERSION 3.0.0)
project(object VERSION 0.1.0 LANGUAGES C CXX)


set(SRCS
    Vector2D.cpp
    main.cpp
    )

SET(HEADER
    Vector2D.hpp
    )

add_executable(object ${SRCS} ${HEADERS})