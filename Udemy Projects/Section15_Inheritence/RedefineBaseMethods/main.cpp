#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main()
{
    cout << "----- Account Class -----" << endl;
    Account a {1'000.00};
    cout << a << endl;
    
    a.deposit(500.00);
    cout << a << endl;
    
    a.withdraw(1'000.00);
    cout << a << endl;
    
    a.withdraw(2'000.00);
    cout << a << endl;
    
    cout << "----- Savings Account Class -----" << endl;
    SavingsAccount s {1'000.00, 5.0};
    cout << s << endl;
    
    s.deposit(1'000);
    cout << s << endl;
    
    s.withdraw(2'000);
    cout << s << endl;
    
    s.withdraw(2'000);
    cout << s << endl;
    
    return 0;
}
/*
 * A derived class can invoke base class methods
 * derived class can override or redefine base class methods
 * 
 * Static Binding 
 *      the compiler will determine what method is called at compile time
 *      Base b; b.deposit; 
 *      Derived d; d.deposit
 *      Base *ptr = new Derived(); ptr->deposit(100.00); 
 * 
 */
