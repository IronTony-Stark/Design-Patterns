//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_PROTECTIONPROXY_H
#define PROXY_PROTECTIONPROXY_H

#include "Database.h"
#include "AuthUtils.h"

class ProtectionProxy : public IDatabase {
public:
    explicit ProtectionProxy(const AuthUtils& authUtils) :
            mAuthUtils(authUtils) {}

    std::string getData() override {
        if (mAuthUtils.getUserRole() != "Admin")
            throw std::exception();

        std::cout << "Admin user. Db access granted\n";
        return mDatabase->getData();
    }

    ~ProtectionProxy() override {
        delete mDatabase;
    }

private:
    IDatabase* mDatabase = new Database();
    const AuthUtils& mAuthUtils;
};

#endif //PROXY_PROTECTIONPROXY_H
