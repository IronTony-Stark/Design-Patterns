//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_IUIELEMENT_H
#define FACTORY_METHOD_IUIELEMENT_H

class IUIElement {
public:
    virtual void render() = 0;
    virtual ~IUIElement() = default;
};

#endif //FACTORY_METHOD_IUIELEMENT_H
