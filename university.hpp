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
  void saveRecords(const std::string& filename);
  void loadRecords(const std::string& filename);
  void searchBySurname();
  void searchByPesel();
  void sortByPesel();
  void sortBySurname();

  auto begin() { return students_.begin(); }
  auto end() { return students_.end(); }

  std::vector<Person*> getStudents() const;
  void clearStudents();
private:
  std::vector<Person *> students_;
};