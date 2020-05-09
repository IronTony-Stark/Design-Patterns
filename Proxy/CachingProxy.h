//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_CACHINGPROXY_H
#define PROXY_CACHINGPROXY_H

#include "Database.h"

class CachingProxy : public IDatabase {
public:
    std::string getData() override {
        if (mCache == nullptr) {
            mCache = new std::string(mDatabase->getData());
            std::cout << "Result cached\n";
        }

        return *mCache;
    }

    ~CachingProxy() override {
        delete mDatabase;
        delete mCache;
    }

private:
    IDatabase* mDatabase = new Database();
    std::string* mCache;
};

#endif //PROXY_CACHINGPROXY_H
