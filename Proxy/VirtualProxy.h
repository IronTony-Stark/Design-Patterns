//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_VIRTUALPROXY_H
#define PROXY_VIRTUALPROXY_H

#include <iostream>
#include "Database.h"

class VirtualProxy : public IDatabase {
public:
    std::string getData() override {
        if (mDatabase == nullptr) { // Lazy Initialization
            mDatabase = new Database();
            std::cout << "Database initialized\n";
        }

        return mDatabase->getData();
    }

    ~VirtualProxy() override {
        delete mDatabase;
    }

private:
    IDatabase* mDatabase;
};

#endif //PROXY_VIRTUALPROXY_H
