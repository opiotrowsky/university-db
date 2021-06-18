#pragma once
#include <string>
#include <vector>

class PersonTest {
public:
  PersonTest(std::string name)
      : name_(name) {

  }
  std::string getName() const {
    return name_;
  }
private:
  std::string name_;
};

class ObjectsTest {
public:
  ObjectsTest() {
    persons.push_back(new PersonTest("Eva"));
    persons.push_back(new PersonTest("Adam"));
  }
  ~ObjectsTest() {
    for(auto *p: persons) {
      delete p;
    }
    persons.clear();
  }

  auto begin() {
    return persons.begin();
  }
  auto end() {
    return persons.end();
  }
  auto size() {
    return persons.size();
  }
  auto at(size_t index) {
    return persons.at(index);
  }
private:
  std::vector<PersonTest *> persons;
};