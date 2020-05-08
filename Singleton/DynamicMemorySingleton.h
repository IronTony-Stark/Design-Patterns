//
// Created by Iron Tony on 08/05/2020.
//

#ifndef SINGLETON_DYNAMICMEMORYSINGLETON_H
#define SINGLETON_DYNAMICMEMORYSINGLETON_H

#include <iostream>
#include <mutex>

class DynamicMemorySingleton {
public:
    static DynamicMemorySingleton& instance();

    DynamicMemorySingleton(DynamicMemorySingleton& other) = delete;

    void operator=(const DynamicMemorySingleton&) = delete;

private:
    static DynamicMemorySingleton* mPInstance;
    static std::mutex mMutex;

    DynamicMemorySingleton() {
        std::cout << "Dynamic Memory Singleton was created!\n";
    }

    ~DynamicMemorySingleton() = default;
};

#endif //SINGLETON_DYNAMICMEMORYSINGLETON_H
