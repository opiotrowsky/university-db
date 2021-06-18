#pragma once
#include "iostream"
#include "person.hpp"
#include "string"

class Student : public Person {
public:
    virtual void print() override;

private:
    std::string name_;
    std::string surname_;
    std::string adress_;
    size_t index_;
    size_t pesel_;
    gender sex_;
};