//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_BUTTON_H
#define COMMAND_BUTTON_H

#include <iostream>
#include "ICommand.h"
#include "InstanceOf.h"

class Button {
public:
    explicit Button(const ICommand &command) : mCommand(command) {}

    void onClick() {
        mCommand.execute(
                [](const Result *result) -> void {
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

#endif //COMMAND_BUTTON_H
