#pragma once
#include "command.hpp"
#include "ObjectsTest.hpp"
#include <vector>

class Sort : public Command {
public:
    explicit Sort(ObjectsTest* numbers, const std::function<bool(PersonTest*,PersonTest*)>& fn);
    virtual void execute() override;
private:
  ObjectsTest* objects_;
  std::function<bool(PersonTest*,PersonTest*)> fn_;
};