#include <iostream>
#include "Book.h"

int main()
{

    Book MyBook{};

    MyBook.AddContact(Contacts(
        "Mike",
        "Myers",
        "123456",
        "654321",
        "m@m.com",
        "M St.",
        "Film",
        EGroup::Acquaintance
    ));

    MyBook.AddContact(Contacts(
        "Mike",
        "Tyson",
        "123456",
        "654321",
        "m@m.com",
        "M St.",
        "Boxe",
        EGroup::Acquaintance
    ));

    MyBook.AddContact(Contacts(
        "Michael",
        "Jordan",
        "123456",
        "654321",
        "m@m.com",
        "M St.",
        "Film",
        EGroup::Coworker
    ));

    MyBook.AddContact(Contacts(
        "Philip",
        "Myers",
        "123456",
        "654321",
        "m@m.com",
        "M St.",
        "Film",
        EGroup::Family
    ));

    MyBook.AddContact(Contacts(
        "John",
        "Lo",
        "123456",
        "654321",
        "m@m.com",
        "M St.",
        "Film",
        EGroup::Family
    ));

    std::cout << "Sorted Name First" << std::endl;
    MyBook.DisplaySorted(NameType::First);

    std::cout << "Sorted Name Last" << std::endl;
    MyBook.DisplaySorted(NameType::Last);

    std::cout << "Show Name and Number" << std::endl;
    MyBook.DisplayNameNumber();

    std::cout << "Display by company: Film" << std::endl;
    MyBook.DisplayByCompany("Film");

    std::cout << "Display by company: Boxe" << std::endl;
    MyBook.DisplayByCompany("Boxe");

    std::cout << "Display bt group: Acquaintance" << std::endl;
    MyBook.DisplayByGroup(EGroup::Acquaintance);

    std::cout << "Display bt group: Coworker" << std::endl;
    MyBook.DisplayByGroup(EGroup::Coworker);

    std::cout << "Display bt group: Family" << std::endl;
    MyBook.DisplayByGroup(EGroup::Family);

    std::cout << "Search First Name: Mike" << std::endl;
    std::vector<Contacts> res { MyBook.Search("Mike", NameType::First) };
    for(auto i : res){
        i.PrintNames();
    }

    std::cout << "Search Last Name Myers" << std::endl;
    res = MyBook.Search("Myers", NameType::Last);
    for(auto i : res){
        i.PrintNames();
    }

    std::cout << "Count contacts from Film and Family" << std::endl;
    std::cout << MyBook.CountContacts("Film", EGroup::Family) << std::endl;

    return 0;
}