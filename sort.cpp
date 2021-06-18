#include "sort.hpp"
#include <algorithm>

Sort::Sort(ObjectsTest* objects, const std::function<bool(PersonTest*,PersonTest*)>& fn)
: objects_(objects), fn_(fn) {

}
void Sort::execute() {
  std::sort(objects_->begin(), objects_->end(), fn_);
}
