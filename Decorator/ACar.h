//
// Created by Iron Tony on 06/05/2020.
//

#ifndef DECORATOR_ACAR_H
#define DECORATOR_ACAR_H

class ACar {
public:
    virtual int speed() { return 30; }

    virtual int coolness() { return 10; }

    virtual ~ACar() = default;
};

#endif //DECORATOR_ACAR_H
