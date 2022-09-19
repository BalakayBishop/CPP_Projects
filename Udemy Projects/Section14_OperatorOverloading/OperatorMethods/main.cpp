#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;
    
    MyString larry {"Larry"};
    MyString moe {"Moe"};
    
    MyString stooge = larry;
    larry.display();
    moe.display();
    
    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;
    
    larry.display();
    MyString larry2 = -larry;
    larry2.display();
    
    MyString stooges = larry + "Moe";
    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display();
    
    MyString three_stooges = moe + " " + larry + " " + "Curly";
    
    cout << endl;
    return 0;
}
/*
 * Member methods to overload operators 
 * Unary 
 *      increment (++), decrement (--), negate (-), and bang (!)
 *      we could use the - operator to make a string lower case when used 
 * 
 * Binary 
 *      two operands
 *      +, -, ==, !=, <, >, etc.
 *      == could used std::compare method to compare the string 
 *      + could be implemented to concat 2 strings
 * 
 * With member methods
 *      unary operators take no parameters
 *      binary operators take one parameter
 * 
 */
