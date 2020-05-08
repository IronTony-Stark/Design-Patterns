//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_ICOMMAND_H
#define COMMAND_ICOMMAND_H

class ICommand {
public:
    virtual void execute() const = 0;

    virtual ~ICommand() = default;
};

#endif //COMMAND_ICOMMAND_H
