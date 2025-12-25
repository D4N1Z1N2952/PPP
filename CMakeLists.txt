cmake_minimum_required(VERSION 4.1)
project(PPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(PPP main.cpp
        PPPheaders.h
        PPP_support.h)
