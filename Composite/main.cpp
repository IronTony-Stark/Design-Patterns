#include <iostream>
#include "Project.h"
#include "Todo.h"

int main() {
    auto* project = new Project("Root");
    project->addTodo(new Todo("First", project));
    project->addTodo(new Todo("Second", project));

    // Creating inner project --------------------------------------
    auto* todoAppProject = new Project("Project \"ToDo App\"");

    auto* frontendTodo = new Todo("FrontEnd", todoAppProject);
    auto* backendTodo = new Todo("BackEnd", todoAppProject);

    backendTodo->markAsDone();
    frontendTodo->markAsDone();

    todoAppProject->addTodo(frontendTodo);
    todoAppProject->addTodo(backendTodo);

    project->addTodo(todoAppProject);
    // --------------------------------------------------------------

    project->addTodo(new Todo("Third", project));

    std::cout << project->getTodo();

    delete project;
}
