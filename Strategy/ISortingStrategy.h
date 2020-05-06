//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_ISORTINGSTRATEGY_H
#define STRATEGY_ISORTINGSTRATEGY_H

template<typename T>
class ISortingStrategy {
public:
    virtual void sort(AArray<T>& arr) = 0;
};

#endif //STRATEGY_ISORTINGSTRATEGY_H