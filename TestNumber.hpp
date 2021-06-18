#pragma once
#include <vector>

class TestNumbers {
public:
  TestNumbers() {
  }
  auto begin() {
    return numbers.begin();
  }
  auto end() {
    return numbers.end();
  }
  auto size() {
    return numbers.size();
  }
  auto at(size_t index) {
    return numbers.at(index);
  }
private:
  std::vector<int> numbers{3,1,2};
};