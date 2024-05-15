#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer : public Employee {
public:
    Engineer(const std::string& name, int id, const std::string& specialization);

    void printDetails() const override;

private:
    std::string specialization;
};

#endif // ENGINEER_H