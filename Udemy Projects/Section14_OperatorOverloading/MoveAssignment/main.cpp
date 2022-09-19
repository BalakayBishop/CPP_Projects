#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString a {"Hello"};       // Overloaded Ctor
    a = MyString {"Hola"};      // Overloaded ctor THEN move assingment
    a = "Bonjour";              // Overloaded ctor THEN move assingment
    
    return 0;
}
/*
 * the move assignment is going to work will r-value reference
 * 
 * a str -> memory for "Hello"
 * a = MyString is unnamed str -> "Hola"
 *      str in CPP will be he object for "Hello"
 *      because it is unnamed it is an r-value reference (move assignment)
 *      we are going to delete the "Hello" pointer
 *      we are then going to steal the pointer for "Hola", dtor called for rhs temp object
 * 
 * a = "Bonjour" 
 *      this will create an unnamed reference to str
 *      it will deallocate "Hola"
 *      then steal the pointer, str object for "Hola" is nulled and destoyed
 * 
 * IF we are using an l-value (named value) reference, then we are going to be using the copy assignment
 * IF we are using an r-value (unnamed value) reference, then we are going to be using the move assignment
 * 
 */
