//
// Created by Iron Tony on 11/05/2020.
//

#ifndef COMPOSITE_PROJECT_H
#define COMPOSITE_PROJECT_H

#include <list>
#include "ATodo.h"

class Project : public ATodo {
public:
    explicit Project(const std::string& todo) :
            ATodo(todo) {}

    void markAsDone() override {
        ATodo::markAsDone();

        auto iterator = mTodos.begin();
        while (iterator != mTodos.end())
            (*iterator++)->markAsDone();
    }

    std::string getTodo() override {
        std::string res = "\n" + ATodo::getTodo() + "\n    ";

        auto iterator = mTodos.begin();
        while (iterator != mTodos.end())
            res += (*iterator++)->getTodo() + "\n    ";

        return res;
    }

    void addTodo(ATodo* todo) {
        mTodos.push_back(todo);
    }

    void removeTodo(ATodo* todo) {
        mTodos.remove(todo);
    }

    bool checkIfDone() {
        auto iterator = mTodos.begin();
        while (iterator != mTodos.end())
            if (!(*iterator)->isDone())
                return false;
        return true;
    }

    ~Project() override {
        auto iterator = mTodos.begin();
        while (iterator != mTodos.end())
            delete *iterator++;
    }

private:
    std::list<ATodo*> mTodos;
};

#endif //COMPOSITE_PROJECT_H
