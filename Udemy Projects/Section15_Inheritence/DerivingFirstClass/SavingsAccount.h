#pragma once
#include "Account.h"

class SavingsAccount: public Account
{
public:
    SavingsAccount();
    ~SavingsAccount();
    
    void deposit(double amount);
    void withdraw(double amount);
    
    double interest_rate {};
    

};

