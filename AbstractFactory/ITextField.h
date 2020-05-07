//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_ITEXTFIELD_H
#define ABSTRACTFACTORY_ITEXTFIELD_H

#include <string>
#include "IUIElement.h"

class ITextField : public IUIElement {
public:
    virtual void text(const std::string&) = 0;
};

#endif //ABSTRACTFACTORY_ITEXTFIELD_H
