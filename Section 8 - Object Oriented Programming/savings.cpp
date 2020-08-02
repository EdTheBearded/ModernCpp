#include "savings.h"

Savings::Savings(const std::string &name, float balance, float rate):
Account(name, balance), m_Rate(rate)
{

}

Savings::~Savings()
{
}

//getters
float Savings::GetInterestRate() const
{
    return m_Rate;
}

//operations
void Savings::AccumulateInterest()
{
    m_Balance += (m_Rate * m_Balance);
}