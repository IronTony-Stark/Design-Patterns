//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_AUI_H
#define ABSTRACTFACTORY_AUI_H

#include <iostream>
#include "AbstractFactory.h"

class AUI {
public:
    virtual void render() {
        createFrame();

        mAbstractFactory = createFactory();

        mImage = mAbstractFactory->createImage();
        mTextField = mAbstractFactory->createTextField();
        mButton = mAbstractFactory->createButton();

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

    virtual AbstractFactory* createFactory() = 0;

    virtual ~AUI() {
        delete mAbstractFactory;
        delete mImage;
        delete mTextField;
        delete mButton;
    }

private:
    AbstractFactory* mAbstractFactory = nullptr;

    IUIElement* mImage = nullptr;
    IUIElement* mTextField = nullptr;
    IUIElement* mButton = nullptr;
};

#endif //ABSTRACTFACTORY_AUI_H
