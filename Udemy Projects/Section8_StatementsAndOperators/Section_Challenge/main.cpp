#include <iostream>

using namespace std;

int main()
{
    /* 
     * 1 dollar is 100 cents
     * 1 quarter is 25 cents 
     * 1 dime is 10 cents
     * 1 nickel is 5 cents
     * 1 penny is 1 cent
     */
     int cents {0}, dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0};
     
     cout << "Welcome to the change converter!" << endl;
     cout << "Please enter your amount in cents: ";
     cin >> cents;
     
     if (cents >= 100)
     {
         dollars = cents / 100; 
         cents -= (100 * dollars); 
     }
     
     if (cents >= 25)
     {
         quarters = cents / 25; 
         cents -= (25 * quarters);
     }
     
     if (cents >= 10)
     {
         dimes = cents / 10; 
         cents -= (10 * dimes);
     }
     
     if (cents >= 5)
     {
         nickels = cents / 5; 
         cents -= (5 * nickels);
     }
     
     if (cents > 0)
     {
         pennies = cents;
     }
     
     cout << "Dollars  : " << dollars << endl;
     cout << "Quarters : " << quarters << endl;
     cout << "Dimes    : " << dimes << endl;
     cout << "Nickels  : " << nickels << endl;
     cout << "Pennies  : " << pennies << endl;
     
     return 0;
}
