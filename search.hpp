#pragma once
#include "command.hpp"

class Search : public Command {
public:
    Search();
    virtual void execute() override;
};
