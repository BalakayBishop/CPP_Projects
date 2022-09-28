#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance)
    : Account {name, balance}
{
}

Checking_Account::~Checking_Account()
{
}

//bool Checking_Account :: deposit(double amount)
//{
//    if (amount >= 0)
//    {
//        return Account::deposit(amount);
//    }
//    return false;
//}

bool Checking_Account :: withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        amount += 1.5;
        return Account::withdraw(amount);
    }
    return false;
}

ostream &operator<< (ostream &os, const Checking_Account &account)
{
    os << "[Checking Account " << account.account_name << " : $" << account.balance << "]";
    return os;
}