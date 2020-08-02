#include <iostream>
#include "FindAll.h"

int main()
{
    std::vector<int> offset{};
    std::string src{};
    std::string search{};

    src = "I want you to find me!";
    search = "you";
    offset = FindAll(src, search, Case::INSENSITIVE);

    src = "I want you to find me!";
    search = "you";
    offset = FindAll(src, search, Case::SENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = FindAll(src, search, Case::INSENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = FindAll(src, search, Case::SENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = FindAll(src, search, Case::INSENSITIVE, 3);

    src = "I Want you to want to find me!";
    search = "want";
    offset = FindAll(src, search, Case::INSENSITIVE, 15);

    return 0;
}