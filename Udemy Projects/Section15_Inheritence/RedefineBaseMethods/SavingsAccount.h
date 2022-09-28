#pragma once
#include "Account.h"

class SavingsAccount : public Account
{
    friend std::ostream &operator<< (std::ostream &os, const SavingsAccount &account);
protected:
    double int_rate;
public:
    SavingsAccount();
    SavingsAccount(double balance, double int_rate);
    ~SavingsAccount();
    
    void deposit(double amount);
    // withdraw will be inherited

};

