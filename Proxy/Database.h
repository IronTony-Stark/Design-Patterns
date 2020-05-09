//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_DATABASE_H
#define PROXY_DATABASE_H

#include "IDatabase.h"

class Database : public IDatabase {
public:
    std::string getData() override {
        return "data";
    }
};

#endif //PROXY_DATABASE_H
