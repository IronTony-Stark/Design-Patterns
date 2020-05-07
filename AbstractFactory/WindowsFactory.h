//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_WINDOWSFACTORY_H
#define ABSTRACTFACTORY_WINDOWSFACTORY_H

#include "AbstractFactory.h"
#include "WindowsImage.h"
#include "WindowsTextField.h"
#include "WindowsButton.h"

class WindowsFactory : public AbstractFactory {
public:
    IImage* createImage() override {
        auto* windowsImage = new WindowsImage();
        windowsImage->load();
        return windowsImage;
    }

    ITextField* createTextField() override {
        auto* windowsTextField = new WindowsTextField();
        windowsTextField->text("Cool Text");
        return windowsTextField;
    }

    IButton* createButton() override {
        auto* windowsButton = new WindowsButton();
        windowsButton->onClick([]() { std::cout << "Setting Button callback\n"; });
        return windowsButton;
    }
};

#endif //ABSTRACTFACTORY_WINDOWSFACTORY_H
