cmake_minimum_required(VERSION 3.16)

project(Factory_Method)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory_Method main.cpp AUI.h IButton.h IImage.h ITextField.h IUIElement.h MaterialButton.h MaterialTextField.h MaterialImage.h MaterialUI.h)