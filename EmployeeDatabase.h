#ifndef EMPLOYEEDATABASE_H
#define EMPLOYEEDATABASE_H

#include "Employee.h"

class EmployeeDatabase {
public:
    void addEmployee(Employee* employee);

    void printAllEmployees() const;

private:
    std::vector<Employee*> employees;
};

#endif // EMPLOYEEDATABASE_H
