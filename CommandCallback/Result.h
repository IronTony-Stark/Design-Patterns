//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#ifndef COMMANDCALLBACK_RESULT_H
#define COMMANDCALLBACK_RESULT_H

#include <exception>

class Result {
public:
    explicit Result(const std::string* data): data(data), what(nullptr) {}
    explicit Result(const std::exception & exception): data(nullptr), what(new std::string (exception.what())) {}

    const std::string* data;
    const std::string* what;

};

//template<typename T>
//class Success: public Result {
//public:
//    const T data;
//
//    explicit Success(const T data): data(data) {}
//};
//
//
//class Error {
//public:
//    std::exception exception;
//
//    explicit Error(const std::exception& exception): exception(exception) {}
//};

#endif //COMMANDCALLBACK_RESULT_H
