#pragma once
#include "command.hpp"
#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Load : public Command {
public:
  Load(University* university, const std::string& filename);
  ~Load();
  void execute() override;
private:
  json file;
};