#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "Trust.h"
#include "Account_Util.h"

#include <vector>
#include <string>

using namespace std;


int main()
{
    Checking frank {"Frank", 5000};
    cout << frank << endl;
    
    Account *trust = new Trust("James");
    cout << *trust << endl;
    
    Account *p1 = new Checking("Larry", 10'000);
    Account *p2 = new Savings("Moe", 1'000);
    Account *p3 = new Trust("Curly");
    
    vector<Account *> accounts {p1, p2, p3};
    
    display(accounts);
    deposit(accounts, 1'000);
    withdraw(accounts, 500);    // fails for Curly b/c of 20% constraint
    
    display(accounts);
    
    delete trust;
    delete p1;
    delete p2;
    delete p3;
    
    return 0;
}
