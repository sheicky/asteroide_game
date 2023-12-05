cmake_minimum_required(VERSION 3.0.0)
project(object VERSION 0.1.0 LANGUAGES C CXX)


set(SRCS
    main.cpp
    Human.cpp
    Student.cpp
    Teacher.cpp
    Computer.cpp
    )

SET(HEADER
    Human.hpp
    Student.hpp
    Teacher.hpp
    Computer.hpp
    )

add_executable(object ${SRCS} ${HEADERS})