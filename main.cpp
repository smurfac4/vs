#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"
#include "EmployeeDatabase.h"

int main() {
    // Создаем базу данных сотрудников
    EmployeeDatabase employeeDB;

    // Создаем несколько сотрудников разных типов
    Manager manager1("Alice", 1001, "Marketing");
    Manager manager2("Bob", 1002, "Sales");
    Engineer engineer1("Charlie", 2001, "Software");
    Engineer engineer2("David", 2002, "Hardware");

    // Добавляем сотрудников в базу данных
    employeeDB.addEmployee(&manager1);
    employeeDB.addEmployee(&manager2);
    employeeDB.addEmployee(&engineer1);
    employeeDB.addEmployee(&engineer2);

    // Выводим информацию о всех сотрудниках
    employeeDB.printAllEmployees();

    return 0;
}
