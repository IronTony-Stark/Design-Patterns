cmake_minimum_required(VERSION 3.16)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp AUI.h IButton.h IImage.h ITextField.h IUIElement.h WindowsButton.h WindowsTextField.h WindowsImage.h WindowsUI.h AbstractFactory.h WindowsFactory.h)