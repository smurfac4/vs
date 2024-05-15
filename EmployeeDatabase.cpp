#include "EmployeeDatabase.h"
#include "Employee.h"
#include <iostream>

void EmployeeDatabase::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void EmployeeDatabase::printAllEmployees() const {
    std::cout << "Employees in the database:" << std::endl;
    for (const auto& employee : employees) {
        // Call the printDetails function of each Employee
        employee->printDetails();
    }
}
