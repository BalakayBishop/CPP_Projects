#include "Savings.h"

Savings::Savings(string name, double balance, double int_rate)
    : Account {name, balance}, int_rate {int_rate} {}
 
 bool Savings:: deposit(double amount)
 {
    return Account::deposit(amount);
 } 
 
 bool Savings:: withdraw(double amount)
 {
    return Account::withdraw(amount);
 }
 
 void Savings :: print(ostream &os) const
 {
     os.precision(2);
     os<< std::fixed;
     os << "[Savings Account " << name << ": $" << balance << ", " << int_rate << "%]";
 }