#include <iostream>
#include "Case.h"

int main()
{

    std::string s{ "Ed" };

    std::cout << s << " ToUpper: " << ToUpper(s) << std::endl;
    std::cout << s << " ToLower: " << ToLower(s) << std::endl;

    return 0;
}