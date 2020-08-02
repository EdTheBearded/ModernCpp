#include <iostream>
#include "Employee.h"
#include "Contact.h"

std::ostream& operator<<(std::ostream &os, const Employee *e)
{
    os << e->Name << " " << e->Id << " " << e->Salary;
    return os;
}

std::ostream& operator<<(std::ostream &os, const Contact *c)
{
    os << c->Name << " " << c->Phone << " " << c->Address << " " << c->Email;
    return os;
}

template<typename T, typename...Params>
T* CreateObject(Params...Args)
{
    return new T(Args...);
}

int main(){
    Employee *e = new Employee("Ed", 123, 5000);

    std::string Name{ "Ed" };
    Contact *c = new Contact(Name, 123456789, "Elm St.", "a@b.c");

    std::cout << e << std::endl;
    std::cout << c << std::endl;

    Employee *e1 = CreateObject<Employee>("Ed2", 456, 90000);
    Contact *c1 = CreateObject<Contact>("Ed2", 987654321, "This St.", "b@a.c");

    std::cout << e1 << std::endl;
    std::cout << c1 << std::endl;

    return 0;
}