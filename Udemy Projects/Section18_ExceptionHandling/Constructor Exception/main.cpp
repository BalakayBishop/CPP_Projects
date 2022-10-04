#include <iostream>
#include <memory>

#include "Account.h"
#include "Account_Util.h"
#include "Checking.h"
#include "Savings.h"
#include "Trust.h"
#include "IllegalBalanceExc.h"

using namespace std;
using std::unique_ptr;
using std::make_unique;

int main()
{
    try 
    {
        unique_ptr<Account> moe_acc = make_unique<Checking>("Moe", -100.00);
        cout << *moe_acc << endl;
    }
    catch (const IllegalBalanceExc &ex)
    {
        cerr << "Could not create account - negative balance" << endl;
    }
    
    cout << "Program successful" << endl;
    
    cout << endl;
    return 0;
}
/*
 * Class-level exceptions
 *      do not throw from a Dtor
 *      the original catch block will not be reached
 *      the only time is if the Dtor catches itsel
 * 
 * Methods
 *      work the same as fucntions
 * 
 * Ctor
 *      may fail
 *      they do not return any value
 *      throw an excpetion in the ctor if you cannot initialize an obj
 * 
 * 
 * 
 * 
 */
