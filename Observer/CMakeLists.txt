cmake_minimum_required(VERSION 3.16)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer main.cpp AYouTuber.h AChannel.h YouTuber.h YouTuber.cpp Channel.cpp Channel.h AChannel.cpp AYouTuber.cpp)