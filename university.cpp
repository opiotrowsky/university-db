#include "university.hpp"
#include "sort.hpp"
#include "student.hpp"
#include <fstream>
#include <memory>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

void University::loadRecords() {
  std::ifstream ifs("university.json");
  json jf = json::parse(ifs);

  for (auto &object : jf) {
    students_.push_back(
        new Student(object["name"],
                    object["surname"],
                    object["address"],
                    object["index"]));
  }
}
void University::saveRecords() {
  std::ofstream ofs("university.json");

  json array = json::array();
  for (auto *person : students_) {
    auto *student = dynamic_cast<Student *>(person);
    if (student) {
      json object = json::object();
      object["name"] = student->getName();
      object["surname"] = student->getSurname();
      object["address"] = student->getAddress();
      object["index"] = student->getIndex();
      array.push_back(object);
    }
  }
  ofs << array;
}
void University::addStudent(Student *student) { students_.push_back(student); }
void University::printAllDatabase() {
  for (auto *student : students_)
    student->print();
}
void University::sortByPesel() {
  std::unique_ptr<Sort> sort(new Sort(this, [](Person *l, Person *p) {
    return l->getPesel() < p->getPesel();
  }));

  sort->execute();
}
