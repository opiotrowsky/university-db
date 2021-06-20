#pragma once
#include "university.hpp"

class Command {
public:
  explicit Command(University *university);
  virtual void execute() = 0;

protected:
  University* university_;
};
