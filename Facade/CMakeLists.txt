cmake_minimum_required(VERSION 3.16)
project(Facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(Facade main.cpp Hotel.h Restaurant.h CityTourAgency.h HistoryMuseum.h ScienceMuseum.h TravelAgencyFacade.h)