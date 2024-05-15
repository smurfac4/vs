#include "Employee.h"

Employee::Employee(const std::string& name, int id) : name(name), id(id) {}

void Employee::printDetails() const {
    std::cout << "Name: " << name << ", ID: " << id << std::endl;
}