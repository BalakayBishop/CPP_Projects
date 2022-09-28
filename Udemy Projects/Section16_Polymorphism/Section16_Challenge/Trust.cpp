#include "Trust.h"
using std::ostream;

Trust::Trust(string name, double balance, double intRate)
    : Savings{name, balance, intRate}, num_withdraws {0} {}
 
bool Trust :: deposit(double amount)
 {
    if (amount >= 5'000.00)
    {
        amount += 50.00;
    }
    return Savings::deposit(amount);
 }
 
bool Trust :: withdraw(double amount)
 {
    if (num_withdraws > 3 || (amount > balance * .20) )
    {
        return false;
    }
    else
        ++num_withdraws;
        
    return Savings::withdraw(amount);
 }
 
 void Trust :: print(ostream &os) const
 {
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account " << name << ": $" << balance << ", " 
        << int_rate << "%, withdraws: " << num_withdraws << "]";
 }