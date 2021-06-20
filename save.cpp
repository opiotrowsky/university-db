#include "save.hpp"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

Save::Save(University *university, const std::string& filename)
    : Command(university) {
    ofs.open(filename);
}

void Save::execute() {
    json array = json::array();
    for (auto *person : university_->getStudents()) {
        auto *student = dynamic_cast<Student *>(person);
        if (student) {
            json object = json::object();
            object["name"] = student->getName();
            object["surname"] = student->getSurname();
            object["address"] = student->getAddress();
            object["index"] = student->getIndex();
            object["pesel"] = student->getPesel();
            object["sex"] = student->getSex();
            array.push_back(object);
        }
    }
    ofs << array;
}
Save::~Save() {
    ofs.close();
}

