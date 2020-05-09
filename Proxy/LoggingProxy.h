//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_LOGGINGPROXY_H
#define PROXY_LOGGINGPROXY_H

#include <iostream>
#include "Database.h"
#include "Logger.h"

class LoggingProxy : public IDatabase {
public:
    explicit LoggingProxy(const Logger& logger) :
            mLogger(logger) {}

    std::string getData() override {
        mLogger.log("Log: Getting data from the Database");

        return mDatabase->getData();
    }

    ~LoggingProxy() override {
        delete mDatabase;
    }

private:
    IDatabase* mDatabase = new Database();
    const Logger& mLogger;
};

#endif //PROXY_LOGGINGPROXY_H
