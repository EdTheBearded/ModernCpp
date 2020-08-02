#include <iostream>

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument

int Add(int *a, int *b)
{
    return *a + *b;
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void Swap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}

void Factorial(int *a, int *result)
{
    *result = 1;
    for (int i = 1; i <= *a; i++)
    {
        *result *= i;
    }
}

int main()
{
    int a{}, b{}, c{};

    a = 5;
    b = 6;
    std::cout << a << " + " << b << " = " << Add(&a, &b) << std::endl << std::endl;

    a = 3;
    b = 7;
    AddVal(&a, &b, &c);
    std::cout << a << " + " << b << " = " << c << std::endl << std::endl;

    a = 10;
    b = 20;
    std::cout << "a =  " << a << ", b = " << b << std::endl;
    std::cout << "Swap" << std::endl;
    Swap(&a, &b);
    std::cout << "a =  " << a << ", b = " << b << std::endl << std::endl;

    a = 10;
    b = 0;
    Factorial(&a, &b);
    std::cout << a << "! =  " << b << std::endl << std::endl;

    return 0;
}