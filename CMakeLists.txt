cmake_minimum_required(VERSION 3.27)
project(Lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab1 main.cpp
        lexer.cpp
        lexer.h
        parser.cpp
        parser.h
        node.cpp
        node.h)
