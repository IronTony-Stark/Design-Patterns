//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_UTILS_H
#define STRATEGY_UTILS_H

#include "AArray.h"

template<typename T>
void swap(AArray<T>& arr, size_t i, size_t j) {
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

#endif //STRATEGY_UTILS_H
