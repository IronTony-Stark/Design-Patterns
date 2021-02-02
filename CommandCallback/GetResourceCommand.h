//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#ifndef COMMANDCALLBACK_GETRESOURCECOMMAND_H
#define COMMANDCALLBACK_GETRESOURCECOMMAND_H

#include "ICommand.h"
#include "BusinessLogic.h"

class GetResourceCommand: public ICommand{
public:
    explicit GetResourceCommand(const BusinessLogic& logic): _logic(logic){};

private:
    const BusinessLogic& _logic;

    const Result* doExecute() const override {
        return _logic.getResource();
    }
};

#endif //COMMANDCALLBACK_GETRESOURCECOMMAND_H
