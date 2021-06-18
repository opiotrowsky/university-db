#pragma once
#include "command.hpp"

class Sort : public Command {
public:
    Sort();
    virtual void execute() override;
};
