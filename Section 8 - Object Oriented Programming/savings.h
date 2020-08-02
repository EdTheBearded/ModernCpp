#pragma once

#include "account.h"

class Savings : public Account{

    float m_Rate;

public:
    //constructors
    Savings(const std::string &name, float balance, float rate);
    ~Savings();

    //getters
    float GetInterestRate() const;

    //operations
    void AccumulateInterest();
};