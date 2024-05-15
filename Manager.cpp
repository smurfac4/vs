#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& name, int id, const std::string& department)
        : Employee(name, id), department(department) {}

void Manager::printDetails() const {
    std::cout << "Name: " << getName() << ", ID: " << getId() << ", Department: " << department << std::endl;
}
