//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_LOGGER_H
#define PROXY_LOGGER_H

#include <iostream>

class Logger {
public:
    void log(const std::string& message) const {
        std::cout << message << "\n";
    }
};

#endif //PROXY_LOGGER_H
