#include "Account.h"

Account::Account(string name, double balance)
    : account_name {name}, balance {balance}
{
    
}

Account::~Account()
{
    
}

bool Account :: deposit(double amount) 
{
    if (amount > 0)
    {
        balance += amount;
        return true;
    }
    return false;
}

bool Account :: withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    return false;
}

double Account :: get_balance() const
{
    return balance;
}

ostream &operator<< (ostream &os, const Account &account)
{
    os << "[Account " << account.account_name << " : $" << account.balance << "]";
    return os;
}