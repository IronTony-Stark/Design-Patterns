//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_COPYCOMMAND_H
#define COMMAND_COPYCOMMAND_H

#include "ICommand.h"
#include "BusinessLogic.h"

class CopyCommand : public ICommand {
public:
    explicit CopyCommand(const BusinessLogic& businessLogic)
            : mBusinessLogic(businessLogic) {}

    void execute() const override {
        mBusinessLogic.paste();
    }

private:
    const BusinessLogic& mBusinessLogic;
};

#endif //COMMAND_COPYCOMMAND_H
