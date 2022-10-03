#include "Checking.h"

Checking :: Checking(string name, double balance)
    : Account{name, balance} {}

bool Checking :: deposit(double amount)
{
    if (amount > 0)
    {
        return Account::deposit(amount);
    }
    return false;
};

bool Checking :: withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        return Account::withdraw(amount + per_checkFee);
    }
    return false;
}

void Checking :: print(ostream &os) const
{
    os.precision(2);
    os<< std::fixed;
    os << "[Checking Account " << name << ": $" << balance << "]";
}