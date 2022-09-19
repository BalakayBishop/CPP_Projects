#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString larry {"Larry"};
    MyString moe {"Moe"};
    MyString curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and" << curly << endl;
    
    cout << "Enter the 3 stooges names separated by a space: ";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and" << curly << endl;
    
    cout <<endl;
    return 0;
}
/*
 * Insertion >>
 * Extraction << 
 * 
 * Not as member methods
 *      we need to make it a global function because the object would need to be on the lhs
 *      larry << cout;
 * 
 * std::ostream &operator<<(std::ostream &os, const MyString &obj)
 * this should be a friend function to have access to private info
 * 
 * 
 * 
 * 
 */
