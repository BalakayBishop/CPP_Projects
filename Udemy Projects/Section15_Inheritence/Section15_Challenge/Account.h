#pragma once
#include <iostream>

using std::ostream;
using std::string;

class Account
{
    friend ostream &operator<< (ostream &os, const Account &account);
private:
    // const defaults
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    string account_name;
    double balance;
public:
    Account(string name = def_name, double balance = def_balance); // default params
    ~Account();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
    double get_balance() const;

};

