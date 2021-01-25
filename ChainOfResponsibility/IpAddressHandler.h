//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_IPADDRESSHANDLER_H
#define CHAINOFRESPONSIBILITY_IPADDRESSHANDLER_H

#include <iostream>
#include "Handler.h"
#include "Request.h"

class IpAddressHandler : public Handler {
public:
    explicit IpAddressHandler(Handler* handler) : mNext(handler) {}

    void handle(Request& request) override {
        if (request.mIpAddress != "127.0.0.1") {
            std::cout << "Ip Address is different from the one user usually uses. "
                         "Sending security notification to user email..." << std::endl;
        }

        if (mNext != nullptr)
            mNext->handle(request);
    }

private:
    Handler* mNext;
};

#endif //CHAINOFRESPONSIBILITY_IPADDRESSHANDLER_H
