//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_TYPESTRATEGY_H
#define STRATEGY_TYPESTRATEGY_H

#include <type_traits>

template<typename T>
class ValueStrategy {
public:
    static void doDelete(const T&) {}

    static const T* view(const T& val) { return &val; }

    static void assign(T& a, const T& b) { a = b; }

    static void setNullPointer(T& val) {}
};

template<typename T>
class PointerStrategy {
public:
    static void doDelete(T& ptr) {
        delete ptr;
        ptr = nullptr;
    }

    static const T view(const T t) { return t; }

    static void assign(T& a, const T& b) {
        delete a;
        if (b == nullptr) a = nullptr;
        else a = new typename std::remove_pointer<T>::type(*b);
    }

    static void setNullPointer(T& ptr) { ptr = nullptr; }
};

#endif //STRATEGY_TYPESTRATEGY_H
