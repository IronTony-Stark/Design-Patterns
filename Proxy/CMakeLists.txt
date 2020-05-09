cmake_minimum_required(VERSION 3.16)
project(Proxy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proxy main.cpp Database.h VirtualProxy.h IDatabase.h ProtectionProxy.h AuthUtils.h RemoteProxy.h LoggingProxy.h Logger.h CachingProxy.h SmartProxy.h IDatabaseWithConnection.h DatabaseWithConnection.h)