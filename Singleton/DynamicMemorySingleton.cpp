//
// Created by Iron Tony on 08/05/2020.
//

#include "DynamicMemorySingleton.h"

DynamicMemorySingleton* DynamicMemorySingleton::mPInstance = nullptr;
std::mutex DynamicMemorySingleton::mMutex;

DynamicMemorySingleton& DynamicMemorySingleton::instance() {
    if (mPInstance == nullptr) {
        std::lock_guard<std::mutex> lock(mMutex);
        if (mPInstance == nullptr) {
            mPInstance = new DynamicMemorySingleton();
        }
    }

    return *mPInstance;
}
