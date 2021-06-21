#include "search.hpp"
#include <algorithm>

Search::Search(University *university, const std::function<bool(Person *, Person *)> &fn, int64_t pesel = 0, std::string surname = "")
    : Command(university), fn_(fn), pesel_(pesel), surname_(surname) {
}
void Search::execute() {
    if (!(pesel_ == 0)) {
        for (auto &person : *university_)
            if (person->getPesel() == pesel_) {
                resVec_.push_back(person);
            }
    }

    if (surname_.length() > 0) {
        for (auto &person : *university_)
            if (person->getSurname().compare(surname_) == 0) {
                resVec_.push_back(person);
            }
    }
}
