//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_AARRAY_H
#define STRATEGY_AARRAY_H

#include <iostream>

template<typename T>
class AArray
{
public:
    virtual const T& operator[](size_t) const = 0;
    virtual T& operator[](size_t) = 0;
    virtual size_t size() = 0;
    virtual void show() const = 0;
    virtual ~AArray() = default;
};

#endif //STRATEGY_AARRAY_H
