//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_BUSINESSLOGIC_H
#define COMMAND_BUSINESSLOGIC_H

#include <iostream>
#include "Result.h"

class BusinessLogic {
public:
    const Result* getResource() const {
        std::cout << "Business Logic getResource Method\n";

        return new Result(new std::string ("Was loaded successfully."));
    }

    void sendResource() const {
        std::cout << "Business Logic sendResource Method\n";

        throw std::exception("Something went wrong while loading");
    }
};

#endif //COMMAND_BUSINESSLOGIC_H
