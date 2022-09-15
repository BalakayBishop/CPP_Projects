#include <iostream>
#include <string>

using namespace std;

class Account 
{
private:
    string name;
    double balance;
    
public:
    // inline
    void set_bal (double bal) {balance += bal;}
    double get_bal() {return balance;}
    
    // not inline 
    void set_name (string n);
    string get_name();
    
    bool deposit (double amount);
    bool withdraw (double amount);
};

void Account :: set_name (string n)
{
    name = n;
}

string Account :: get_name ()
{
    return name;
}

bool Account :: deposit (double amount)
{
    balance += amount;
    return true;
}

bool Account :: withdraw (double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    Account frank_acct;
    frank_acct.set_name("Frank");
    frank_acct.set_bal(1'000.00);
    
    if (frank_acct.deposit(200.00))
    {
        cout << "Deposit OK" << endl;
    }
    else 
    {
        cout << "Deposit not allowed" << endl;
    }
    
    if (frank_acct.withdraw(500.00))
    {
        cout << "Withdraw OK" << endl;
    }
    else 
    {
        cout << "Withdraw not allowed" << endl;
    }
    if (frank_acct.withdraw(1'500.00))
    {
        cout << "Withdraw OK" << endl;
    }
    else 
    {
        cout << "Withdraw not allowed" << endl;
    }
    
    return 0;
}
/*
 * Implementing methods is much like functions
 * Implementing inside the class declaration implicitly makes them inline
 * We can also implement outside the class declaration with the class name :: method name syntax
 * 
 * The other way in C++ is to separate the implementation and declaration files into separate files
 * A .h or .hpp and .cpp for header and implementation
 * 
 * Include guard to make sure it is not defined twice
 * syntax 
 *      #ifndef name
 *      #define
 *      #endif 
 * 
 * OR 
 * #pragma once for include guard 
 * 
 * Our CPP file will have #include "class_name.h"
 * Always include .h files but not .cpp files 
 * 
 * 
 * 
 */
