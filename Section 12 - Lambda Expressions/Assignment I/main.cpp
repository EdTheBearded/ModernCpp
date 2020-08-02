#include <iostream>
#include <vector>
#include "FunctionObjects.h"
#include "LambdaFunctions.h"

int main()
{
    std::cout << "## Function Objects:" << std::endl;
    FMax<float> FMaxF;
    std::cout << "Max 2.5 and 5.8 = " << FMaxF(2.5, 5.8) << std::endl;

    FMax<int> FMaxI;
    std::cout << "Max 6 and 4 = " << FMaxI(6, 4) << std::endl;

    FGreater<float> FGreaterF;
    std::cout << std::boolalpha << "7.3 > 7.2 ? " << FGreaterF(7.3, 7.2) << std::endl;
    std::cout << std::boolalpha << "7.3 > 7.4 ? " << FGreaterF(7.3, 7.4) << std::endl;

    FGreater<int> FGreaterI;
    std::cout << std::boolalpha << "2 > 5 ? " << FGreaterI(2, 5) << std::endl;
    std::cout << std::boolalpha << "6 > 5 ? " << FGreaterI(6, 5) << std::endl;

    FLess<float> FLessF;
    std::cout << std::boolalpha << "7.3 < 7.2 ? " << FLessF(7.3, 7.2) << std::endl;
    std::cout << std::boolalpha << "7.3 < 7.4 ? " << FLessF(7.3, 7.4) << std::endl;

    FLess<int> FLessI;
    std::cout << std::boolalpha << "2 < 5 ? " << FLessI(2, 5) << std::endl;
    std::cout << std::boolalpha << "6 < 5 ? " << FLessI(6, 5) << std::endl;

    std::vector<float> VecFloat{ 2.2, 4.5, 65.2, -12.3, 44.23 };
    FMinMax<float> FMinMaxF;
    std::cout << "MinMax of { 2.2, 4.5, 65.2, -12.3, 44.23 } = {" << FMinMaxF(VecFloat.begin(), VecFloat.end()).first
                << ", " << FMinMaxF(VecFloat.begin(), VecFloat.end()).second << "}" << std::endl;
    
    std::vector<int> VecInt{ 8, 18, 43, 2, -2, 20 };
    FMinMax<int> FMinMaxI;
    std::cout << "MinMax of { 8, 18, 43, 2, -2, 20 } = {" << FMinMaxI(VecInt.begin(), VecInt.end()).first
                << ", " << FMinMaxI(VecInt.begin(), VecInt.end()).second << "}" << std::endl;


    std::cout << std::endl << std::endl << "## Lambda Functions:" << std::endl;
    std::cout << "Max 2.5 and 5.8 = " << LMax(2.5, 5.8) << std::endl;

    std::cout << "Max 6 and 4 = " << LMax(6, 4) << std::endl;

    std::cout << std::boolalpha << "7.3 > 7.2 ? " << LGreater(7.3, 7.2) << std::endl;
    std::cout << std::boolalpha << "7.3 > 7.4 ? " << LGreater(7.3, 7.4) << std::endl;

    std::cout << std::boolalpha << "2 > 5 ? " << LGreater(2, 5) << std::endl;
    std::cout << std::boolalpha << "6 > 5 ? " << LGreater(6, 5) << std::endl;

    std::cout << std::boolalpha << "7.3 < 7.2 ? " << LLess(7.3, 7.2) << std::endl;
    std::cout << std::boolalpha << "7.3 < 7.4 ? " << LLess(7.3, 7.4) << std::endl;

    std::cout << std::boolalpha << "2 < 5 ? " << LLess(2, 5) << std::endl;
    std::cout << std::boolalpha << "6 < 5 ? " << LLess(6, 5) << std::endl;

    std::cout << "MinMax of { 2.2, 4.5, 65.2, -12.3, 44.23 } = {" << FMinMaxF(VecFloat.begin(), VecFloat.end()).first
                << ", " << FMinMaxF(VecFloat.begin(), VecFloat.end()).second << "}" << std::endl;
    
    std::cout << "MinMax of { 8, 18, 43, 2, -2, 20 } = {" << FMinMaxI(VecInt.begin(), VecInt.end()).first
                << ", " << FMinMaxI(VecInt.begin(), VecInt.end()).second << "}" << std::endl;

    return 0;
}
