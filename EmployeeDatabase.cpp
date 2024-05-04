#include "EmployeeDatabase.h"

void EmployeeDatabase::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void EmployeeDatabase::printAllEmployees() const {
    std::cout << "Employees in the database:" << std::endl;
    for (const auto& employee : employees) {
        employee->printProjects();
    }
}
