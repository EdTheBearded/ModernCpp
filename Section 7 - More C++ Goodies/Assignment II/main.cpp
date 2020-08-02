#include <iostream>
#include "Find.h"

int main()
{
    int offset{};
    std::string src{};
    std::string search{};

    src = "I want you to find me!";
    search = "you";
    offset = Find(src, search, Case::INSENSITIVE);

    src = "I want you to find me!";
    search = "you";
    offset = Find(src, search, Case::SENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = Find(src, search, Case::INSENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = Find(src, search, Case::SENSITIVE);

    src = "I Want you to want to find me!";
    search = "want";
    offset = Find(src, search, Case::INSENSITIVE, 3);

    src = "I Want you to want to find me!";
    search = "want";
    offset = Find(src, search, Case::INSENSITIVE, 15);

    return 0;
}