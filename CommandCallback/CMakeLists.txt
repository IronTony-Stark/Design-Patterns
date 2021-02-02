cmake_minimum_required(VERSION 3.16)
project(CommandCallback)

set(CMAKE_CXX_STANDARD 14)

add_executable(CommandCallback main.cpp Result.h ICommand.h GetResourceCommand.h
        BusinessLogic.h SendResourceCommand.h UI.h Button.h Shortcut.h InstanceOf.h)