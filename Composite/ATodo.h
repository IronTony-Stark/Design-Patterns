//
// Created by Iron Tony on 11/05/2020.
//

#ifndef COMPOSITE_ATODO_H
#define COMPOSITE_ATODO_H

#include <string>
#include <utility>

class ATodo {
public:
    explicit ATodo(std::string todo) :
            mTodo(std::move(todo)) {}

    virtual void markAsDone() {
        mIsDone = true;
    }

    virtual void markAsNotDone() {
        mIsDone = false;
    }

    virtual bool isDone() {
        return mIsDone;
    }

    virtual std::string getTodo() {
        return mTodo + " " + (isDone() ? " - Done!" : " - Not done yet");
    }

    virtual ~ATodo() = default;

private:
    std::string mTodo;
    bool mIsDone = false;
};

#endif //COMPOSITE_ATODO_H
