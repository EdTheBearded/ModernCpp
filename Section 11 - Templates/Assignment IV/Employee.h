#include <string>
#include <iostream>

class Employee
{
public:
    std::string Name;
    int Id;
    int Salary;

    template<typename T1, typename T2, typename T3>
    Employee(T1 &&cName, T2 &&cId, T3 &&cSalary) :
        Name{ std::forward<T1>(cName) },
        Id{ std::forward<T2>(cId) },
        Salary{ std::forward<T3>(cSalary) }
    {
        std::cout << "Employee constructor &&" << std::endl;
    }
};