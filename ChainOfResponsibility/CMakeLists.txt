cmake_minimum_required(VERSION 3.16)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChainOfResponsibility main.cpp AuthSystem.h Request.h Handler.h AuthHandler.h SqlInjectionHandler.h BruteForceHandler.h LogHandler.h IpAddressHandler.h)