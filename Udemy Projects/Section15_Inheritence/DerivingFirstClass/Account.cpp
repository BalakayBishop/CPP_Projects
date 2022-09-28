#include "Account.h"

Account::Account()
    : balance {0}, name {"Account"}
{
}

Account::~Account()
{
}

void Account :: deposit(double amount)
{
    cout << "Account deposit" << amount << endl;
}
void Account :: withdraw(double amount)
{
    cout << "Account deposit" << amount << endl;
}

