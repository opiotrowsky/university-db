#pragma once
#include "command.hpp"

class Print : public Command {
public:
    Print();
    virtual void execute() override;
};
