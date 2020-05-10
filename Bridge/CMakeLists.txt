cmake_minimum_required(VERSION 3.16)
project(Bridge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bridge main.cpp IShape.h IColor.h RedColor.h GreenColor.h BlueColor.h RectangleShape.h CircleShape.h TriangleShape.h)