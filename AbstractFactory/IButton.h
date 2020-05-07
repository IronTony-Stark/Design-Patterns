//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_IBUTTON_H
#define ABSTRACTFACTORY_IBUTTON_H

#include "IUIElement.h"

class IButton : public IUIElement {
public:
    virtual void onClick(void (* event)()) = 0;
};

#endif //ABSTRACTFACTORY_IBUTTON_H
