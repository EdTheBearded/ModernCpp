#include <iostream>
#include "savings.h"
#include "checking.h"

int main()
{

    Checking acc("Bob", 1000);
    std::cout << "Initial balance " << acc.GetBalance() << std::endl;

    acc.Deposit(200);
    acc.AccumulateInterest();
    acc.Withdraw(380);

    std::cout << "Balance " << acc.GetBalance() << std::endl;

    Checking bcc("Alice", 100);
    bcc.Withdraw(80);

    return 0;
}