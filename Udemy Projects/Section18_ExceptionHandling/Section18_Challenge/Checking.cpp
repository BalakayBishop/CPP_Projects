#include "Checking.h"

Checking :: Checking(string name, double balance)
    : Account{name, balance} {}

bool Checking :: deposit(double amount)
{
    return Account::deposit(amount);
};

bool Checking :: withdraw(double amount)
{
    return Account::withdraw(amount + per_checkFee);
}

void Checking :: print(ostream &os) const
{
    os.precision(2);
    os<< std::fixed;
    os << "[Checking Account " << name << ": $" << balance << "]";
}