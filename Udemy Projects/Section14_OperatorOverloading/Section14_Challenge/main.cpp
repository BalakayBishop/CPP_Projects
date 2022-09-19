#include <iostream>
#include "MyString-1.h"

using namespace std;

int main()
{
    cout << boolalpha;
    
    MyString a {"Frank"};
    MyString b {"Frank"};
    
    cout << (a==b) << endl;     // true
    cout << (a!=b) << endl;     // false
    
    b = "George";
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a<b) << endl;
    cout << (a>b) << endl;

    a = a++;
    cout << a << endl;
    
    MyString s1 {"FRANK"};
    s1 = s1--;
    cout << s1 << endl;
    
    s1 = s1 + "*****";
    cout << s1 << endl;
    
    s1 += "-----";
    cout << s1 << endl;
    
    MyString s2 {"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;


    
    return 0;
}
/*
 * Overload operators for the MyString class 
 * 
 * Hints:
 * std::strcmp returns 0 if true, something else if false
 * += and *= should return a MyString &
 * rather than duplicate code in the += and *=, use the + and * operators that are already overloaded
 * 
 * Implementions 
 *      operators ++ and -- as postifx (personal preference)
 *      operator == is an equality of string
 * 
 */
