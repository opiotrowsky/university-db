#pragma once
#include "student.hpp"
#include "vector"
class Command {
public:
    Command();
    virtual void execute() = 0;

private:
    std::vector<Person*> personVec_;
};
