//
// Created by Iron Tony on 08/05/2020.
//

#ifndef SINGLETON_STATICMEMORYSINGLETON_H
#define SINGLETON_STATICMEMORYSINGLETON_H

#include <iostream>

class MeyersSingleton {
public:
    static MeyersSingleton& instance() {
        static MeyersSingleton s;
        return s;
    }

    MeyersSingleton(const MeyersSingleton&) = delete;

    MeyersSingleton& operator=(const MeyersSingleton&) = delete;

private:
    MeyersSingleton() {
        std::cout << "Static Memory Singleton was created!\n";
    }

    ~MeyersSingleton() = default;
};

#endif //SINGLETON_STATICMEMORYSINGLETON_H
