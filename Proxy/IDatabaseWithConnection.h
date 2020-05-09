//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_IDATABASEWITHCONNECTION_H
#define PROXY_IDATABASEWITHCONNECTION_H

#include <string>

class IDatabaseWithConnection {
public:
    virtual void connect() = 0;

    virtual void disconnect() = 0;

    virtual std::string getData() = 0;

    virtual ~IDatabaseWithConnection() = default;
};

#endif //PROXY_IDATABASEWITHCONNECTION_H
