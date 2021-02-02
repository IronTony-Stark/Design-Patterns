//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#ifndef COMMANDCALLBACK_SENDRESOURCECOMMAND_H
#define COMMANDCALLBACK_SENDRESOURCECOMMAND_H

#include "ICommand.h"
#include "BusinessLogic.h"

class SendResourceCommand : public ICommand {
public:
    explicit SendResourceCommand(const BusinessLogic &logic) : _logic(logic) {};

private:
    const BusinessLogic &_logic;

    const Result *doExecute() const override {
        try {
            _logic.sendResource();
            return new Result(new std::string(""));
        } catch (const std::exception& e) {
            return new Result(e);
        }
    }
};

#endif //COMMANDCALLBACK_SENDRESOURCECOMMAND_H
