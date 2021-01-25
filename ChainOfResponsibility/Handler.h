//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_HANDLER_H
#define CHAINOFRESPONSIBILITY_HANDLER_H

#include "Request.h"

class Handler {
public:
    virtual void handle(Request&) = 0;
};

#endif //CHAINOFRESPONSIBILITY_HANDLER_H
