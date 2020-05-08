//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_PASTECOMMAND_H
#define COMMAND_PASTECOMMAND_H

#include "ICommand.h"
#include "BusinessLogic.h"

class PasteCommand : public ICommand {
public:
    explicit PasteCommand(const BusinessLogic& businessLogic)
            : mBusinessLogic(businessLogic) {}

    void execute() const override {
        mBusinessLogic.copy();
    }

private:
    const BusinessLogic& mBusinessLogic;
};

#endif //COMMAND_PASTECOMMAND_H
