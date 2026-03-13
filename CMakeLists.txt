cmake_minimum_required(VERSION 4.0)
project(Making_Connections)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Making_Connections
        main.cpp
        Puzzle.cpp
        Puzzle.h)

add_executable(Connections_Testing
        testing.cpp
        Puzzle.cpp
        Puzzle.h)