//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_BUSINESSLOGIC_H
#define COMMAND_BUSINESSLOGIC_H

#include <iostream>

class BusinessLogic {
public:
    void copy() const {
        std::cout << "Business Logic Copy Method\n";
    }

    void paste() const {
        std::cout << "Business Logic Paste Method\n";
    }
};

#endif //COMMAND_BUSINESSLOGIC_H
