#include <algorithm>
#include <iostream>
#include "Book.h"

void Book::AddContact(const Contacts &c)
{
    CBook.push_back(c);
}

void Book::DisplaySorted(const NameType &s) const
{
    std::vector<Contacts> SortedBook{ CBook };
    if(s == NameType::First)
    {
        std::sort(SortedBook.begin(), SortedBook.end(), [](const auto &e1, const auto &e2){
            return e1.GetFName() < e2.GetFName();
        });
    }
    else
    {
        std::sort(SortedBook.begin(), SortedBook.end(), [](const auto &e1, const auto &e2){
            return e1.GetLName() < e2.GetLName();
        });
    }

    for (auto &&i : SortedBook)
    {
        i.PrintNames();
    }
}

void Book::DisplayNameNumber() const
{
    std::for_each(CBook.begin(), CBook.end(), [](const auto &e){
        std::cout << "First Name: " << e.GetFName() << std::endl
                << "Primary Phone: " << e.GetPPhone() << std::endl << std::endl;
    });
}

void Book::DisplayByCompany(const std::string &c) const
{
    std::for_each(CBook.begin(), CBook.end(), [&c](const auto &e){
        if(e.GetCompany() == c){
            e.PrintContact();
        }
    });
}

void Book::DisplayByGroup(const EGroup &g) const
{
    std::for_each(CBook.begin(), CBook.end(), [&g](const auto &e){
        if(e.GetGroup() == g){
            e.PrintContact();
    }
    });
}

std::vector<Contacts> Book::Search(const std::string &Name, const NameType &t) const
{
    std::vector<Contacts> CFound{};

    if(t == NameType::First)
    {
        std::for_each(CBook.begin(), CBook.end(), [&CFound, &Name](const auto &e){
            if (e.GetFName() == Name)
            {
                CFound.push_back(e);
            }
        });
    }
    else
    {
        std::for_each(CBook.begin(), CBook.end(), [&CFound, &Name](const auto &e){
            if (e.GetLName() == Name)
            {
                CFound.push_back(e);
            }
        });
    }

    return CFound;
}

int Book::CountContacts(const std::string &c, const EGroup &g) const
{
    int count{};
    std::for_each(CBook.begin(), CBook.end(), [&count, &c, &g](const auto &e){
        if (e.GetCompany() == c && e.GetGroup() == g)
        {
            count++;
        }
    });

    return count;
}