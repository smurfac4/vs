cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 Employee.h
        Manager.h
        Manager.h
        Engineer.h
        Employee.cpp
        Manager.cpp
        Engineer.cpp
        EmployeeDatabase.h
        EmployeeDatabase.cpp
        main.cpp)
