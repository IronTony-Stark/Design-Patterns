//
// Created by Iron Tony on 09/05/2020.
//

#ifndef PROXY_AUTHUTILS_H
#define PROXY_AUTHUTILS_H

#include <string>

class AuthUtils {
public:
    std::string getUserRole() const {
        return "Admin";
    }
};

#endif //PROXY_AUTHUTILS_H
