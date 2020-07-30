cmake_minimum_required(VERSION 3.16)
project(Builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(Builder main.cpp IHouseBuilder.h CastleBuilder.h House.h PalaceBuilder.h Director.h)