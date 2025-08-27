#pragma once
#include "task.h"
#include <vector>

class TaskManager{
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description);
    bool removeTask(int id);
    bool editTask(int id, const std::string& newDescription);
    void displayAllTasks() const;
};
