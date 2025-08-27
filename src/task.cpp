#include "../include/task.h"
#include <chrono>
#include <sys/types.h>
#include <sstream>

Task::Task(std::string& desc, int lastID)
    : description(desc), isCompleted(false), id(++lastID) {
    
    dateCreated = currTime();

}

priority

std::string Task::currTime(){
    auto now = std::chrono::system_clock::now();
    auto time_t = std::chrono::system_clock::to_time_t(now);

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&time_t), "%Y-%m-%d %H:%M:%S");
    return oss.str();
}
