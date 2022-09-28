#pragma once
#include "Account.h"

class Trust_Account : public Account // solution: inherits savings account
{
    friend ostream &operator<< (ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int = 0.0;
    
protected:
    double int_rate;
    int count;
public:
    Trust_Account(string name = def_name, double balance = def_balance, double int_rate = def_int);
    ~Trust_Account();
    
    bool deposit(double amount);
    bool withdraw(double amount);

};

