#include "Engineer.h"
#include <iostream>

Engineer::Engineer(const std::string& name, int id, const std::string& specialization)
        : Employee(name, id), specialization(specialization) {}

void Engineer::printDetails() const {
    std::cout << "Name: " << getName() << ", ID: " << getId() << ", Specialization: " << specialization << std::endl;
}