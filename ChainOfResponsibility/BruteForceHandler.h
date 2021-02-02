//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_BRUTEFORCEHANDLER_H
#define CHAINOFRESPONSIBILITY_BRUTEFORCEHANDLER_H

#include <iostream>
#include "Handler.h"
#include "Request.h"

class BruteForceHandler : public Handler {
public:
    explicit BruteForceHandler(Handler *handler) : Handler(handler), mCount(0) {};

private:
    unsigned mCount;

    bool doHandle(Request &request) override {
        if (++mCount > 5) {
            std::cout << "Brute Force Handler Blocked Request" << std::endl;
            return false;
        }

        std::cout << "Brute Force Count: " << mCount << std::endl;

        return true;
    }
};

#endif //CHAINOFRESPONSIBILITY_BRUTEFORCEHANDLER_H
