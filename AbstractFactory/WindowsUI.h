//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_WINDOWSUI_H
#define ABSTRACTFACTORY_WINDOWSUI_H

#include "AUI.h"
#include "WindowsFactory.h"

class WindowsUI : public AUI {
public:
    AbstractFactory* createFactory() override {
        return new WindowsFactory();
    }
};

#endif //ABSTRACTFACTORY_WINDOWSUI_H
