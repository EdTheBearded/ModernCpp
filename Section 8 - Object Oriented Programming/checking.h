#pragma once

#include "account.h"

class Checking : public Account{

public:
    //constructors
    Checking(const std::string &name, float balance);
    ~Checking();

    //operations
    void Withdraw(float amount);

};