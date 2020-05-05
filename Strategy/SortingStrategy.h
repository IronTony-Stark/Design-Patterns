//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_SORTINGSTRATEGY_H
#define STRATEGY_SORTINGSTRATEGY_H

template<typename T>
class SortingStrategy {
public:
    virtual void sort(AArray<T>& arr) = 0;
};

#endif //STRATEGY_SORTINGSTRATEGY_H
