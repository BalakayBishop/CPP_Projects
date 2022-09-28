#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
    : interest_rate{3.0}
{
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount :: deposit(double amount)
{
    cout << "Savings Account deposit: " << amount << endl;
}
void SavingsAccount :: withdraw(double amount)
{
    cout << "Savings Account withdraw: " << amount << endl;
}
