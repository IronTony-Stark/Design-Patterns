//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#ifndef COMMANDCALLBACK_ICOMMAND_H
#define COMMANDCALLBACK_ICOMMAND_H

#include "Result.h"

using callback_function = void (*)(const Result*); // type for conciseness

class ICommand {
public:
    void execute(callback_function callback) const {
        const Result* result;
        try {
            result = doExecute();
        } catch (const std::exception& exception) {
            result = new Result(exception);
        }
        callback(result);
    }

    virtual ~ICommand() = default;

private:
    virtual const Result* doExecute() const = 0;
};

#endif //COMMANDCALLBACK_ICOMMAND_H
