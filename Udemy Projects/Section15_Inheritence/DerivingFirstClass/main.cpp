#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main()
{
    cout << "----- Account -----" << endl;
    Account acc {};
    acc.deposit(200.00);
    acc.withdraw(100.00);
    
    cout << endl;
    
    cout << "----- Savings Account -----" << endl;
    SavingsAccount s_acct {};
    s_acct.deposit(200.00);
    s_acct.withdraw(100.00);
    
    return 0;
}
