#include "Savings_Account.h"

Savings_Account::Savings_Account(string name, double amount, double int_rate)
    : Account {name, amount}, int_rate {int_rate}
{
    
}

Savings_Account::~Savings_Account()
{
    
}

bool Savings_Account :: deposit (double amount)
{
    if (amount >= 0)
    {
        amount += amount * (int_rate/100);
        return Account::deposit(amount);
    }
    return false;
}

ostream &operator<< (ostream &os, const Savings_Account &account)
{
    os << "[Savings Account " << account.account_name << " : $" << account.balance 
        << ", " << account.int_rate << "%" << "]";
    return os;
}