#include "sort.hpp"
#include <algorithm>

Sort::Sort(University* university, const std::function<bool(Person*,Person*)>& fn)
: university_(university), fn_(fn) {

}
void Sort::execute() {
  std::sort(university_->begin(), university_->end(), fn_);
}
