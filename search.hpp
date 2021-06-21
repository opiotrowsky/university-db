#pragma once
#include "command.hpp"
#include "university.hpp"
#include <vector>

class Search : public Command {
public:
    explicit Search(University* university, const std::function<bool(Person*,Person*)>& fn, int64_t pesel, std::string surname);
    virtual void execute() override;
    std::vector<Person*> getresVec(){
        return resVec_;
    };
private:
  int64_t pesel_{0};
  std::string surname_{""};
  std::vector<Person*> resVec_{};
  std::function<bool(Person*, Person*)> fn_;

};