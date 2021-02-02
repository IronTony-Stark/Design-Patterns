//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_SQLINJECTIONHANDLER_H
#define CHAINOFRESPONSIBILITY_SQLINJECTIONHANDLER_H

#include <iostream>
#include "Handler.h"
#include "Request.h"

class SqlInjectionHandler : public Handler {
public:
    explicit SqlInjectionHandler(Handler* handler) : Handler(handler) {}

private:
    bool doHandle(Request& request) override{
        if (request.mContainsSqlInjection) {
            std::cout << "Request contains sql injection" << std::endl;
            return false;
        }
        return true;
    }
};


#endif //CHAINOFRESPONSIBILITY_SQLINJECTIONHANDLER_H
