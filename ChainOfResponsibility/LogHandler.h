//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_LOGHANDLER_H
#define CHAINOFRESPONSIBILITY_LOGHANDLER_H

#include <iostream>
#include "Handler.h"
#include "Request.h"

class LogHandler : public Handler {
public:
    explicit LogHandler(Handler* handler) : mNext(handler) {}

    void handle(Request& request) override {
        std::cout << request << std::endl;

        if (mNext != nullptr)
            mNext->handle(request);
    }

private:
    Handler* mNext;
};

#endif //CHAINOFRESPONSIBILITY_LOGHANDLER_H
