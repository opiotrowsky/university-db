#include "gtest/gtest.h"
#include "student.hpp"

TEST(studentTests, ShouldReceiveStudentData) {
  auto student = new Student("John",
                         "Kowalski",
                         "New York",
                         1122334455,
                         12345678901,
                         Gender::Male);

  ASSERT_EQ(student->getName(), "John");
  ASSERT_EQ(student->getSurname(), "Kowalski");
  ASSERT_EQ(student->getAddress(), "New York");
  ASSERT_EQ(student->getPesel(), 12345678901);
  ASSERT_EQ(student->getSex(), Gender::Male);
  delete student;
}
