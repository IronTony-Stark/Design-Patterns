//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_IIMAGE_H
#define FACTORY_METHOD_IIMAGE_H

#include <iostream>
#include "IUIElement.h"

class IImage : public IUIElement {
public:
    virtual void load() = 0;
};

#endif //FACTORY_METHOD_IIMAGE_H
