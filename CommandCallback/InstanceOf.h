//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#ifndef COMMANDCALLBACK_INSTANCEOF_H
#define COMMANDCALLBACK_INSTANCEOF_H

#include <type_traits>

template<typename Base, typename T>
inline bool instanceof(const T*) {
    return std::is_base_of<Base, T>::value;
}

#include <iostream>
#include "ICommand.h"

#endif //COMMANDCALLBACK_INSTANCEOF_H
