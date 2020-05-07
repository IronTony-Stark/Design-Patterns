//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_MATERIALBUTTON_H
#define FACTORY_METHOD_MATERIALBUTTON_H

#include <iostream>
#include "IButton.h"

class MaterialButton : public IButton {
public:
    void onClick(void (* event)()) override {
        event();
    }

    void render() override {
        std::cout << "Creating Material Button\n";
    }
};

#endif //FACTORY_METHOD_MATERIALBUTTON_H
