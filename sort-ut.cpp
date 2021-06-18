// TODO: include
#include "gtest/gtest.h"
#include "sort.hpp"
#include "TestNumber.hpp"
#include "ObjectsTest.hpp"


//TEST(sortTests, ShouldSort3NumbersDescending) {
//  auto numbers = new TestNumbers();
//  auto fn = [](int l, int p){
//    return l > p;
//  };
//  auto sort = new Sort(numbers, fn);
//
//  sort->execute();
//
//  ASSERT_EQ(numbers->size(), 3);
//  ASSERT_EQ(numbers->at(0), 3);
//  ASSERT_EQ(numbers->at(1), 2);
//  ASSERT_EQ(numbers->at(2), 1);
//}

TEST(sortTests, ShouldSortObjectsAscending) {
  auto objects = new ObjectsTest();
  auto fn = [](PersonTest* l, PersonTest*  p){
    return l->getName() < p->getName();
  };
  auto sort = new Sort(objects, fn);

  sort->execute();

  ASSERT_EQ(objects->size(), 2);
  ASSERT_EQ(objects->at(0)->getName(), "Adam");
  ASSERT_EQ(objects->at(1)->getName(), "Eva");

}