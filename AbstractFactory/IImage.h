//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_IIMAGE_H
#define ABSTRACTFACTORY_IIMAGE_H

#include <iostream>
#include "IUIElement.h"

class IImage : public IUIElement {
public:
    virtual void load() = 0;
};

#endif //ABSTRACTFACTORY_IIMAGE_H
