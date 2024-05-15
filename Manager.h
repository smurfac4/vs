#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(const std::string& name, int id, const std::string& department);

    void printDetails() const override;

private:
    std::string department;
};

#endif // MANAGER_H
