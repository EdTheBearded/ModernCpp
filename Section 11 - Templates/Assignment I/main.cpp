#include <iostream>
#include "templates.h"

int main()
{
    std::cout << "4 + 3 = " << Add(4, 3) << std::endl;
    std::cout << "4.3 + 3.7 = " << Add(4.3, 3.7) << std::endl;

    int Array[]{ 1, 2, 3, 4 };
    float FArray[]{ 1.1, 2.2, 3.3, 4.4 };
    std::cout << "Sum of [1, 2, 3, 4] = " << ArraySum(Array, 4) << std::endl;
    std::cout << "Sum of [1.1, 2.2, 3.3, 4.4] = " << ArraySum(FArray, 4) << std::endl;

    int MinMaxArray[]{ 7, 3, 10, 2 };
    std::cout << "Max of [7, 3, 10, 2] = " << Max(MinMaxArray, 4) << std::endl;
    std::cout << "MinMax of [7, 3, 10, 2] = (" << MinMax(MinMaxArray, 4).first << ", " << MinMax(MinMaxArray, 4).second << ")" << std::endl;

    return 0;
}