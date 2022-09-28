#include "Trust_Account.h"

Trust_Account::Trust_Account(string name, double balance, double int_rate)
    : Account {name, balance}, int_rate {int_rate}, count {0}
{
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account:: deposit(double amount)
{
    if (amount >= 0)
    {
        if (amount > 5'000.00)
        {
            amount += 50;
        }
    }
    return Account::deposit(amount);
}

bool Trust_Account:: withdraw(double amount)
{
    if (count >= 3 or (amount > balance * 20))
    {
        return false;
    }
    else
        ++count;
    return Account::withdraw(amount);
}

ostream &operator<< (ostream &os, const Trust_Account &account)
{
    os << "[Trust Account " << account.account_name << " : $" << account.balance 
        << ", " << account.int_rate << "%, number of withdraws: " << account.count << "]";
    return os;
}