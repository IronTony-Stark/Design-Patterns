//
// Created by Iron Tony on 25/01/2021.
//

#ifndef CHAINOFRESPONSIBILITY_REQUEST_H
#define CHAINOFRESPONSIBILITY_REQUEST_H

#include <iostream>
#include <string>

struct Request {
    std::string mLogin;
    std::string mPassword;
    bool mContainsSqlInjection;
    std::string mIpAddress;
};

inline std::ostream& operator<<(std::ostream& os, const Request& request) {
    std::cout <<
         request.mLogin << " " <<
         request.mPassword << " " <<
         (request.mContainsSqlInjection ? "malicious" : "safe") << " " <<
         request.mIpAddress;

    return os;
}

#endif //CHAINOFRESPONSIBILITY_REQUEST_H
