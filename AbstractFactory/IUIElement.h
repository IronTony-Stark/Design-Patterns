//
// Created by Iron Tony on 07/05/2020.
//

#ifndef ABSTRACTFACTORY_IUIELEMENT_H
#define ABSTRACTFACTORY_IUIELEMENT_H

class IUIElement {
public:
    virtual void render() = 0;
    virtual ~IUIElement() = default;
};

#endif //ABSTRACTFACTORY_IUIELEMENT_H
