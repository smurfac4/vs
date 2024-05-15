#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <iostream>

class Project {
public:
    Project(const std::string& name, int hoursWorked) : name(name), hoursWorked(hoursWorked) {}

    void printDetails() const {
        std::cout << "Название проекта: " << name << ", Затраченные часы: " << hoursWorked << std::endl;
    }

private:
    std::string name;
    int hoursWorked;
};

class Employee {
public:
    Employee(const std::string& name, int id);

    virtual void printDetails() const;

    std::string getName() const { return name; }

    int getId() const { return id; }

protected:
    std::string name;
    int id;
    std::vector<Project> projects;
};

#endif // EMPLOYEE_H