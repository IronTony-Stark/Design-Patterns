//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_MATERIALTEXTFIELD_H
#define FACTORY_METHOD_MATERIALTEXTFIELD_H

#include <iostream>
#include "ITextField.h"

class MaterialTextField : public ITextField {
public:
    void text(const std::string& string) override {
        std::cout << "Setting TextField's text: '" << string << "'\n";
    }

    void render() override {
        std::cout << "Creating Material TextField\n";
    }
};

#endif //FACTORY_METHOD_MATERIALTEXTFIELD_H
