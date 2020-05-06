//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_MERGESORT_H
#define STRATEGY_MERGESORT_H

#include "ISortingStrategy.h"
#include "Utils.h"

template<typename T,
        template<typename> class TypeStrategy,
        class Comparator>
class MergeSort : public ISortingStrategy<T> {
public:
    void sort(AArray<T>& arr) override {
        T* aux = new T[arr.size()];
        mergeSort(arr, aux, 0, arr.size() - 1);
        delete[] aux;
    }

    void mergeSort(AArray<T>& arr, T* aux, int lo, int hi) {
        if (lo == hi) return;

        int mid = lo + (hi - lo) / 2;
        mergeSort(arr, aux, lo, mid);
        mergeSort(arr, aux, mid + 1, hi);

        auto a = TypeStrategy<T>::view(arr[mid]);
        auto b = TypeStrategy<T>::view(arr[mid + 1]);
        if (b != nullptr && (a == nullptr || Comparator::compareTo(*a, *b) < 0))
            return;

        merge(arr, aux, lo, mid, hi);
    }

    void merge(AArray<T>& arr, T* aux, int lo, int mid, int hi) {
        for (int k = lo; k <= hi; k++)
            aux[k] = arr[k];

        int i = lo, j = mid + 1;
        for (int k = lo; k <= hi; k++) {
            auto a = TypeStrategy<T>::view(aux[i]);
            auto b = TypeStrategy<T>::view(aux[j]);

            if (i > mid) arr[k] = aux[j++];
            else if (j > hi) arr[k] = aux[i++];
            else if (b != nullptr && (a == nullptr || Comparator::compareTo(*a, *b) < 0))
                arr[k] = aux[i++];
            else arr[k] = aux[j++];
        }
    }
};

#endif //STRATEGY_MERGESORT_H
