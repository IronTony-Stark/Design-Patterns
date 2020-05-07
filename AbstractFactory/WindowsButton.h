//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_WINDOWSBUTTON_H
#define ABSTRACTFACTORY_WINDOWSBUTTON_H

#include <iostream>
#include "IButton.h"

class WindowsButton : public IButton {
public:
    void onClick(void (* event)()) override {
        event();
    }

    void render() override {
        std::cout << "Creating Windows Button\n";
    }
};

#endif //ABSTRACTFACTORY_WINDOWSBUTTON_H
