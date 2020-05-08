cmake_minimum_required(VERSION 3.16)
project(Command)

set(CMAKE_CXX_STANDARD 14)

add_executable(Command main.cpp UI.h BusinessLogic.h Button.h ICommand.h Shortcut.h CopyCommand.h PasteCommand.h)