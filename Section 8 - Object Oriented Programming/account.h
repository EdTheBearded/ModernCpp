#pragma once

#include <string>

class Account {

    std::string m_Name;
    int m_AccNo;
    static int s_AccNoGenerator;

protected:
    float m_Balance;

public:
    //constructors
    Account(const std::string &name, float balance);
    ~Account();

    //getters
    const std::string GetName() const;
    float GetBalance() const;
    int GetAccountNo() const;
    float GetInterestRate() const;

    //operations
    void AccumulateInterest();
    void Withdraw(float amount);
    void Deposit(float amount);

};