//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_INSERTIONSORT_H
#define STRATEGY_INSERTIONSORT_H

#include "ISortingStrategy.h"
#include "Utils.h"

template<typename T,
        template<typename> class TypeStrategy,
        class Comparator>
class InsertionSort : public ISortingStrategy<T> {
public:
    void sort(AArray<T>& arr) override {
        for (int i = 1; i < arr.size(); i++) {
            for (int j = i; j > 0; j--) {
                auto a = TypeStrategy<T>::view(arr[j]);
                auto b = TypeStrategy<T>::view(arr[j - 1]);

                if (b != nullptr && (a == nullptr || Comparator::compareTo(*a, *b) < 0))
                    swap(arr, j, j - 1);
                else break;
            }
        }
    }
};

#endif //STRATEGY_INSERTIONSORT_H
