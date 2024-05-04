#include "Employee.h"

Employee::Employee(const std::string& name, int id) : name(name), id(id) {}

void Employee::addProject(const std::string& projectName, int hoursWorked) {
    projects.emplace_back(projectName, hoursWorked);
}

void Employee::printProjects() const {
    std::cout << "Projects for " << name << " (ID: " << id << "):" << std::endl;
    for (const auto& project : projects) {
        project.printDetails();
    }
}
