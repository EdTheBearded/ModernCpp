#include <iostream>

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments

void Add(int a, int b, int &result)
{
    result =  a + b;
}

void Factorial(int a, int &result)
{
    result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
}

void Swap(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

int main()
{
    int a{}, b{}, c{};

    a = 30;
    b = 25;
    c = 0;
    Add(a, b, c);
    std::cout << a << " + " << b << " = " << c << std::endl << std::endl;

    a = 7;
    b = 0;
    Factorial(a, b);
    std::cout << a << "! =  " << b << std::endl << std::endl;

    a = 4;
    b = 8;
    std::cout << "a =  " << a << ", b = " << b << std::endl;
    std::cout << "Swap" << std::endl;
    Swap(a, b);
    std::cout << "a =  " << a << ", b = " << b << std::endl << std::endl;

    return 0;
}