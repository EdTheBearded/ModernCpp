#include "Contacts.h"
#include <iostream>

Contacts::Contacts(std::string FirstName, std::string LastName, std::string PrimPhone, std::string SecPhone, std::string EmailId,
        std::string Addr, std::string Comp, EGroup Gr) : FName(FirstName), LName(LastName), PPhone(PrimPhone), SPhone(SecPhone),
        Email(EmailId), Address(Addr), Company(Comp), Group(Gr)
{}

std::string Contacts::GetFName() const
{
    return FName;
}

std::string Contacts::GetLName() const
{
    return LName;
}

std::string Contacts::GetPPhone() const
{
    return PPhone;
}

std::string Contacts::GetSPhone() const
{
    return SPhone;
}

std::string Contacts::GetEmail() const
{
    return Email;
}

std::string Contacts::GetAddress() const
{
    return Address;
}

std::string Contacts::GetCompany() const
{
    return Company;
}

EGroup Contacts::GetGroup() const
{
    return Group;
}

std::string Contacts::GetGroupName() const
{
    switch(Group)
    {
        case EGroup::Acquaintance:
            return "Acquantance";

        case EGroup::Coworker:
            return "Coworker";
            
        case EGroup::Family:
            return "Family";

        case EGroup::Friends:
            return "Friends";
        
        default:
            return "-";
    }
}

void Contacts::PrintContact() const
{
    std::cout << "First Name: " << FName << std::endl
        << "Last Name: " << LName << std::endl
        << "Primary Phone: " << PPhone << std::endl
        << "Secondary Phone: " << SPhone << std::endl
        << "Email: " << Email << std::endl
        << "Address: " << Address << std::endl
        << "Company: " << Company << std::endl
        << "Group: " << GetGroupName() << std::endl << std::endl;
}

void Contacts::PrintNames() const
{
    std::cout << "First Name: " << FName << std::endl
        << "Last Name: " << LName << std::endl << std::endl;
}