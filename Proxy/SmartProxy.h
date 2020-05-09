//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_SMARTPROXY_H
#define PROXY_SMARTPROXY_H

#include "DatabaseWithConnection.h"

class SmartProxy : public IDatabaseWithConnection {
public:
    void connect() override {
        if (mConnected == 0) {
            mDatabase = new DatabaseWithConnection();
            std::cout << "Database initialized\n";
        }
        ++mConnected;
    }

    void disconnect() override {
        --mConnected;
        if (mConnected == 0) {
            delete mDatabase;
            mDatabase = nullptr;
            std::cout << "Database deleted\n";
        }
    }

    std::string getData() override {
        if (mConnected == 0)
            throw std::exception();
        return mDatabase->getData();
    }

    ~SmartProxy() override {
        delete mDatabase;
    }

private:
    IDatabaseWithConnection* mDatabase;
    int mConnected;
};

#endif //PROXY_SMARTPROXY_H
