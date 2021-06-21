#include "university.hpp"

int main() {
  std::unique_ptr<University> university(new University());
  university->addStudent(new Student("Jan", "Kowalski", "Warszawa", 1001,
                                     22111555666, Gender::Male));
  university->addStudent(new Student("Anna", "Nowak", "Wrocław", 1002,
                                     12345678903, Gender::Female));
  university->addStudent(new Student("Andrzej", "Skowroński", "Gdańsk", 1003,
                                     11223344558, Gender::Male));
  university->saveRecords("university.json");
  university->sortByPesel();
  university->printAllDatabase();

  for  (auto* p : university->getStudents()) {
      auto* student = dynamic_cast<Student*>(p);
      std::cout<<student->getPesel()<< ": "<<(student->peselIsCorrect()?"poprawny":"niepoprawny")<<std::endl;
  }

  return 0;
}