cmake_minimum_required(VERSION 3.0.0)
project(SDLTEST VERSION 0.1.0 LANGUAGES C CXX)

file(COPY images/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)

set(
    SRCS
    main.cpp
    framework.cpp
)

set(
    HEADER
    framework.hpp
)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDLTEST ${SRCS} ${HEADER})
target_link_libraries(SDLTEST ${SDL2_LIBRARIES})
