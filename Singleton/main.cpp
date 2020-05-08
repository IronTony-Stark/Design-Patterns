#include <thread>
#include "StaticMemorySingleton.h"
#include "DynamicMemorySingleton.h"

const unsigned threadSleep = 1000;

void staticMemorySingleton() {
    std::this_thread::sleep_for(std::chrono::milliseconds(threadSleep));
//    MeyersSingleton copy = MeyersSingleton::instance(); // copying is forbidden
    MeyersSingleton& singleton = MeyersSingleton::instance();
}

void dynamicMemorySingleton() {
    std::this_thread::sleep_for(std::chrono::milliseconds(threadSleep));
//    DynamicMemorySingleton copy = DynamicMemorySingleton::instance(); // copying is forbidden
    DynamicMemorySingleton& singleton = DynamicMemorySingleton::instance();
}

void multithreadingTest(void (* singletonCreationFun)()) {
    std::thread t1(singletonCreationFun);
    std::thread t2(singletonCreationFun);
    std::thread t3(singletonCreationFun);

    t1.join();
    t2.join();
    t3.join();
}

// !!! if speed is important for you, then lock based solution is not the best choice
// !!! Check out https://www.modernescpp.com/index.php/thread-safe-initialization-of-a-singleton
int main() {
    multithreadingTest(staticMemorySingleton);
    multithreadingTest(dynamicMemorySingleton);
}