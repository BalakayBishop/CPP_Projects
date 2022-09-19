#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString a {"Hello"}; // overloaded Ctor
    MyString b;           // no args
    b = a;                // assignment
    
    b = "This is a test"; // == b.operator=("This is a test");
    
    return 0;
}
/*
 * a will call overloaded ctor 
 * it will then allocate length + 1, str = Hello
 * 
 * b will call no arg and it will inset the \0
 * will then call = operator
 * delete lhs object on heap
 * rhs = Hello, lhs = garbage
 * we are then going to allocate the size + 1 for lhs
 * we then copy from rhs into the lhs to "assign"
 *      lhs and rhs == Hello
 * we are then going to return the lhs back
 * 
 * b = "this is a test" is again going to call the overloaded operators
 * this will create a temp object 
 * 
 * 
 * 
 */
