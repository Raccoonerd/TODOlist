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
 
public:
    Task(std::string& desc);


};
