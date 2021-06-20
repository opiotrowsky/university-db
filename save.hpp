#pragma once
#include "command.hpp"
#include <fstream>
#include <string>

class Save : public Command {
public:
    Save(University *university, const std::string& filename);
    ~Save();
    void execute() override;

private:
    std::ofstream ofs;
};
