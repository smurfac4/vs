#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"
#include "EmployeeDatabase.h"

int main() {
    // Создаем базу данных сотрудников
    EmployeeDatabase employeeDB;

    // Создаем несколько сотрудников разных типов
    Manager manager1("Алиса", 1001, "Маркетинг");
    Manager manager2("Боб", 1002, "Продажи");
    Engineer engineer1("Чарли", 2001, "Программное обеспечение");
    Engineer engineer2("Дэвид", 2002, "Аппаратное обеспечение");

    // Добавляем сотрудников в базу данных
    employeeDB.addEmployee(&manager1);
    employeeDB.addEmployee(&manager2);
    employeeDB.addEmployee(&engineer1);
    employeeDB.addEmployee(&engineer2);

    // Выводим информацию о всех сотрудниках
    employeeDB.printAllEmployees();

    return 0;
}
