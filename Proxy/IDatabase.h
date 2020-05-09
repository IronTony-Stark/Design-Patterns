//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_IDATABASE_H
#define PROXY_IDATABASE_H

#include <string>

class IDatabase {
public:
    virtual std::string getData() = 0;

    virtual ~IDatabase() = default;
};

#endif //PROXY_IDATABASE_H
