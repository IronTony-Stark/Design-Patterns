//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_SHORTCUT_H
#define COMMAND_SHORTCUT_H

#include "ICommand.h"

class Shortcut {
public:
    explicit Shortcut(const ICommand& command) : mCommand(command) {}

    void onEnter() { mCommand.execute(); }

private:
    const ICommand& mCommand;
};

#endif //COMMAND_SHORTCUT_H
