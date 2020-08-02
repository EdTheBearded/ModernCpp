#include <iostream>
#include "checking.h"

Checking::Checking(const std::string &name, float balance) :
Account(name, balance)
{
}

Checking::~Checking()
{
}


void Checking::Withdraw(float amount)
{
    if(amount < (m_Balance - 50))
        m_Balance -= amount;
    else
    {
        std::cout << "Insufficient funds!" << std::endl;
    }
    
}