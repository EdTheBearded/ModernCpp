#include <vector>
#include "Contacts.h"

enum class NameType
{
    First,
    Last
};

class Book
{
    

    std::vector<Contacts> CBook{};

public:
    void AddContact(const Contacts &c);

    void DisplaySorted(const NameType &s) const;
    void DisplayNameNumber() const;
    void DisplayByCompany(const std::string &c) const;
    void DisplayByGroup(const EGroup &g) const;
    
    std::vector<Contacts> Search(const std::string &Name, const NameType &t) const; 
    
    int CountContacts(const std::string &c, const EGroup &g) const;
};