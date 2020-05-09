//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_DATABASEWITHCONNECTION_H
#define PROXY_DATABASEWITHCONNECTION_H

#include <iostream>
#include "IDatabaseWithConnection.h"

class DatabaseWithConnection : public IDatabaseWithConnection {
public:
    void connect() override {
        std::cout << "Connected\n";
    }

    void disconnect() override {
        std::cout << "Disconnected\n";
    }

    std::string getData() override {
        return "data";
    }
};

#endif //PROXY_DATABASEWITHCONNECTION_H
