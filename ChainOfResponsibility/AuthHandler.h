//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_AUTHHANDLER_H
#define CHAINOFRESPONSIBILITY_AUTHHANDLER_H

#include <iostream>
#include "Handler.h"
#include "Request.h"

class AuthHandler : public Handler {
public:
    explicit AuthHandler(Handler* handler) : mNext(handler) {}

    void handle(Request& request) override {
        if (request.mLogin == "irontony" && request.mPassword == "password") {
            std::cout << "Auth Completed Successfully" << std::endl;

            if (mNext != nullptr)
                mNext->handle(request);
        } else {
            std::cout << "Wrong login or password" << std::endl;
        }
    }

private:
    Handler* mNext;
};

#endif //CHAINOFRESPONSIBILITY_AUTHHANDLER_H
