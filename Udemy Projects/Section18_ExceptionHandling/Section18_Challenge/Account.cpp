#include "Account.h"

Account :: Account(string name, double balance)
    : name{name}, balance{balance} 
{
    if (balance < 0.0)
        throw IllegalBalance{};
}

bool Account :: deposit(double amount)
{
    if(amount < 0)
    {
        return false;
    }
    else 
    {
        balance += amount;
        return true;
    }
}

bool Account :: withdraw(double amount)
{
    if (balance - amount < 0)
    {
        throw InsufficientFunds{};
    }
    else {
        balance -= amount;
        return true;
    }
}

void Account :: print(ostream &os) const
{
    os.precision(2);
    os<< std::fixed;
    os << "[Account " << name << ": $" << balance << "]";
}