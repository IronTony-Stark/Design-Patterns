//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_AUI_H
#define FACTORY_METHOD_AUI_H

#include <iostream>
#include "IButton.h"
#include "IImage.h"
#include "ITextField.h"

class AUI {
public:
    virtual void render() {
        createFrame();

        mImage = createImage();
        mTextField = createTextField();
        mButton = createButton();

        mImage->render();
        mTextField->render();
        mButton->render();

        createCookiesBanner();
    }

    virtual void createFrame() {
        std::cout << "Creating Frame\n";
    }

    virtual void createCookiesBanner() {
        std::cout << "Creating Cookies Banner\n";
    }

    virtual IUIElement* createImage() = 0;
    virtual IUIElement* createTextField() = 0;
    virtual IUIElement* createButton() = 0;

    virtual ~AUI() {
        delete mImage;
        delete mTextField;
        delete mButton;
    }

private:
    IUIElement* mImage = nullptr;
    IUIElement* mTextField = nullptr;
    IUIElement* mButton = nullptr;
};

#endif //FACTORY_METHOD_AUI_H
