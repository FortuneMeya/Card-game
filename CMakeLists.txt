cmake_minimum_required(VERSION 3.30)
project(Prog1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prog1 war.cpp
        deck.cpp
        deck.h
        Card.cpp
        Card.h)
