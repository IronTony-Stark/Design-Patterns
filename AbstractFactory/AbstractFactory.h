//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H

#include "IImage.h"
#include "ITextField.h"
#include "IButton.h"

class AbstractFactory {
public:
    virtual IImage* createImage() = 0;
    virtual ITextField* createTextField() = 0;
    virtual IButton* createButton() = 0;

    virtual ~AbstractFactory() = default;
};

#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
