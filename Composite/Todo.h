//
// Created by Iron Tony on 11/05/2020.
//

#ifndef COMPOSITE_TODO_H
#define COMPOSITE_TODO_H

#include "ATodo.h"
#include "Project.h"

class Todo : public ATodo {
public:
    explicit Todo(const std::string& todo, Project* project) :
            ATodo(todo), mProject(project) {}

    void markAsDone() override {
        ATodo::markAsDone();
        if (mProject->checkIfDone())
            mProject->markAsDone();
    }

    void markAsNotDone() override {
        ATodo::markAsNotDone();
        mProject->markAsNotDone();
    }

private:
    Project* mProject;
};

#endif //COMPOSITE_TODO_H
