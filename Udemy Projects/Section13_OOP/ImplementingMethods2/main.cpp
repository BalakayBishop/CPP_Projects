#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_acct;
    frank_acct.set_name("Frank");
    frank_acct.set_bal(1'000.00);
    
    if (frank_acct.deposit(200.00))
    {
        cout << "Deposit OK" << endl;
    }
    else 
    {
        cout << "Deposit not allowed" << endl;
    }
    
    if (frank_acct.withdraw(500.00))
    {
        cout << "Withdraw OK" << endl;
    }
    else 
    {
        cout << "Withdraw not allowed" << endl;
    }
    if (frank_acct.withdraw(1'500.00))
    {
        cout << "Withdraw OK" << endl;
    }
    else 
    {
        cout << "Withdraw not allowed" << endl;
    }
    
    cout << endl;
    return 0;
}
