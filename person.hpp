#pragma once

enum class gender {
    male,
    female
};

class Person {
public:
    virtual void print() = 0;
};