//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_IBUTTON_H
#define FACTORY_METHOD_IBUTTON_H

#include "IUIElement.h"

class IButton : public IUIElement {
public:
    virtual void onClick(void (* event)()) = 0;
};

#endif //FACTORY_METHOD_IBUTTON_H
