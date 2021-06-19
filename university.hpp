#pragma once
#include "person.hpp"
#include "student.hpp"
#include <vector>


class University {
public:
  University() = default;
  void addStudent(Student *);
  void removeStudents();
  void printAllDatabase();
  void saveRecords();
  void loadRecords();
  void searchBySurname();
  void searchByPesel();
  void sortByPesel();
  void sortBySurname();

  auto begin() { return students_.begin(); }
  auto end() { return students_.end(); }

private:
  std::vector<Person *> students_;
};