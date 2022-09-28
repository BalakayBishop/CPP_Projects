#pragma once
#include "Account.h"

class Checking_Account : public Account
{
    friend ostream &operator<< (ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
protected:
    string account_name;
    double balance;
public:
    Checking_Account(string name = def_name, double balance = def_balance);
    ~Checking_Account();
    
    //bool deposit(double amount);
    // solution: inherits deposit method from Account
    bool withdraw(double amount);

};

