#include "Savings.h"

Savings::Savings(string name, double balance, double int_rate)
    : Account {name, balance}, int_rate {int_rate} {}
 
 bool Savings:: deposit(double amount)
 {
    if (amount > 0)
    {
        amount += amount * (int_rate/100);
        return Account::deposit(amount);
    }
    return false;
 } 
 
 bool Savings:: withdraw(double amount)
 {
    if (balance - amount >= 0)
    {
        return Account::withdraw(amount);
    }
    return false;
 }
 
 void Savings :: print(ostream &os) const
 {
     os.precision(2);
     os<< std::fixed;
     os << "[Savings Account " << name << ": $" << balance << ", " << int_rate << "%]";
 }