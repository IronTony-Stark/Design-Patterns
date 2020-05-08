//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_BUTTON_H
#define COMMAND_BUTTON_H

#include "ICommand.h"

class Button {
public:
    explicit Button(const ICommand& command) : mCommand(command) {}

    void onClick() { mCommand.execute(); }

private:
    const ICommand& mCommand;
};

#endif //COMMAND_BUTTON_H
