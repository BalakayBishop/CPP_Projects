#include <iostream>

using namespace std;

int main()
{
    
    
    return 0;
}
/*
 * this is reserved keyword 
 * contains the address of the object 
 *      pointer to the object
 * can only be used in a class scope
 * all member acces is done via the this pointer
 * 
 * Example: 
 * 
 * void Account::set_balance (double bal) {balance = bal; // this -> balance is implied}
 * 
 * If the param name is the same as the member name then it will be ambiguous
 * or we can use this -> balance = balance
 * 
 * 
 */
