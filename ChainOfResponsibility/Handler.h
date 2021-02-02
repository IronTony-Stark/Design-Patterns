//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_HANDLER_H
#define CHAINOFRESPONSIBILITY_HANDLER_H

#include "Request.h"

class Handler {
public:
    explicit Handler(Handler *handler) : mNext(handler) {}

    void handle(Request &request) {
        if (doHandle(request)) {
            if (mNext != nullptr)
                mNext->handle(request);
        }
    }

private:
    Handler *mNext;

    virtual bool doHandle(Request &) = 0;
};

#endif //CHAINOFRESPONSIBILITY_HANDLER_H
