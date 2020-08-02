#include <string>
#include <iostream>

class Contact
{
public:
    std::string Name;
    int Phone;
    std::string Address;
    std::string Email;

    template<typename T1, typename T2, typename T3, typename T4>
    Contact(T1 &&cName, T2 &&cPhone, T3 &&cAddress, T4 &&cEmail) :
        Name{ std::forward<T1>(cName) },
        Phone{ std::forward<T2>(cPhone) },
        Address{ std::forward<T3>(cAddress) },
        Email{ std::forward<T4>(cEmail) }
    {
        std::cout << "Contact constructor &&" << std::endl;
    }
};