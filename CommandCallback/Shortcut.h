//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_SHORTCUT_H
#define COMMAND_SHORTCUT_H

#include <iostream>
#include "ICommand.h"
#include "InstanceOf.h"

class Shortcut {
public:
    explicit Shortcut(const ICommand &command) : mCommand(command) {}

    void onEnter() {
        mCommand.execute(
                [](const Result* result) -> void {
                    if (result->data != nullptr) {
                        std::cout << *(result->data) << std::endl;
                    } else {
                        std::cout << *(result->what) << std::endl;
                    }
                }
        );
    }

private:
    const ICommand &mCommand;
};

#endif //COMMAND_SHORTCUT_H
