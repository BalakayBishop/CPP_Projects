#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    cout << boolalpha;
    
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
 * Syntax:
 *      ReturnType operator(Type &obj)
 * Overload with non-member functions
 * 
 * Unlinke the member functions
 * Unary
 *      one parameter
 * Binary 
 *      two parameters
 * 
 * Going to be using obj.str rather than this->str
 * 
 * We can only have one or the other for member or non-member
 * 
 * 
 */
