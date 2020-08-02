#include "Case.h"
#include <cstring>

std::string ToUpper(const std::string &str)
{
    std::string s{};

    for(auto i : str)
    {
        s += static_cast<char>(toupper(static_cast<int>(i)));
    }

    return s;
}

std::string ToLower(const std::string &str)
{
    std::string s{};

    for(auto i : str)
    {
        s += static_cast<char>(tolower(static_cast<int>(i)));
    }

    return s;
}