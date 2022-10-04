#include <iostream>
#include <memory>

#include "Account.h"
#include "Account_Util.h"
#include "Checking.h"
#include "Savings.h"
#include "Trust.h"
#include "IllegalBalance.h"
#include "InsufficientFunds.h"

using namespace std;
using std::unique_ptr;
using std::make_unique;

int main()
{
    unique_ptr<Account> acc1;
    unique_ptr<Account> acc2;
    
    try {
        acc1 = make_unique<Checking>("Larry", -2'000.00);
        cout << *acc1 << endl;
    }
    catch (const IllegalBalance &ex) {
        cout << ex.what() << endl;
    }
    
    try {
        acc2 = make_unique<Checking>("Moe", 100.00);
        cout << *acc2 << endl;
        acc2->withdraw(500.00);
    }
    catch (const IllegalBalance &ex) {
        cout << ex.what() << endl;
    }
    catch (const InsufficientFunds &ex) {
        cout << ex.what() << endl;
    }
    
    cout << "Goodbye!" << endl;
    
    cout << endl;
    return 0;
}
/*
 * Something added from the solution resource was a try-catch all block inside the Ctors for the accounts
 * 
 */
