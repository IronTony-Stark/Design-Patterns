//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_WINDOWSTEXTFIELD_H
#define ABSTRACTFACTORY_WINDOWSTEXTFIELD_H

#include <iostream>
#include "ITextField.h"

class WindowsTextField : public ITextField {
public:
    void text(const std::string& string) override {
        std::cout << "Setting TextField's text: '" << string << "'\n";
    }

    void render() override {
        std::cout << "Creating Windows TextField\n";
    }
};

#endif //ABSTRACTFACTORY_WINDOWSTEXTFIELD_H
