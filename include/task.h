#pragma once
#include <string>

enum priority{
    LOW,
    MEDIUM,
    HIGH
};

class Task{
private:
    int id;
    std::string description;
    bool isCompleted;
    std::string dateCreated;
    priority priority;
    
    std::string currTime();
public:
    Task(std::string& desc, int lastID, priority pr);


};
