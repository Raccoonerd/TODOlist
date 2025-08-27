#pragma once
#include <fstream>
#include "task.h"
#include <vector>

class FileHandler{
private:
    std::string filename;

public:
    bool saveTasksToFile(const std::vector<Task>& tasks);

    std::vector<Task> loadTasksFromFile();

    bool createBackup();
};
