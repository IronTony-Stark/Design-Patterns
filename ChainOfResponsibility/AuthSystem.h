//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_AUTHSYSTEM_H
#define CHAINOFRESPONSIBILITY_AUTHSYSTEM_H

#include "Handler.h"
#include "Request.h"

class AuthSystem {
public:
    explicit AuthSystem(Handler& handler) : mFirstHandler(handler) {}

    void auth(Request& request) {
        mFirstHandler.handle(request);
    }

private:
    Handler& mFirstHandler;
};

#endif //CHAINOFRESPONSIBILITY_AUTHSYSTEM_H
