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
    explicit SqlInjectionHandler(Handler* handler) : mNext(handler) {}

    void handle(Request& request) override {
        if (request.mContainsSqlInjection) {
            std::cout << "Request contains sql injection" << std::endl;
            return;
        }

        if (mNext != nullptr)
            mNext->handle(request);
    }

private:
    Handler* mNext;
};


#endif //CHAINOFRESPONSIBILITY_SQLINJECTIONHANDLER_H
