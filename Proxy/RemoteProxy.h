//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_REMOTEPROXY_H
#define PROXY_REMOTEPROXY_H

#include <iostream>
#include "Database.h"

class RemoteProxy : public IDatabase {
public:
    std::string getData() override {
        establishConnectionToDatabase();

        return mDatabase->getData();
    }

    ~RemoteProxy() override {
        delete mDatabase;
    }

private:
    IDatabase* mDatabase = new Database();

    void establishConnectionToDatabase() {
        std::cout << "Performing network operations...\n";
        std::cout << "Establishing secure connection to the database...\n";
        std::cout << "Connected successfully\n";
    }
};

#endif //PROXY_REMOTEPROXY_H
