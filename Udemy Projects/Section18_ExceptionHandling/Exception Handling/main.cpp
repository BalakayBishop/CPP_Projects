#include <iostream>

using namespace std;

int main()
{
    
    
    return 0;
}
/*
 * Exceptiong Handling
 *      dealing with extraordinary situations
 *      indicates that an extraordinary situation has been detected
 *      program can deal with the extraordinary situations in a suitable manner
 * 
 * What Causes Exceptions
 *      insufficient resources, missing resources, invalid operations
 *      range violations, underflows and overflows, illegal data and many others
 * 
 * Exception Safe
 *      when your code handles exceptions
 * 
 * Terms
 *      exception - an object or primitive types that signals that an error has occured
 *      throwing an exception - detects an error
 * 
 * Catching an exception
 *      
 * Keywords
 *      throw - throw an exception object 
 *      try - code block with {} 
 *      catch - code that handles the exception
 * 
 * Examples
 *      what should we do when there is divide by 0 arithmetic 
 * 
 * C++ std::exception Class Hierarchy
 *      std::exception is the base class 
 *      provides what() from virtual function
 *      it then provides a string of what happened
 *      we can create user classes from these the derived class of the excpetion class 
 *      we can publicly inherit the class exception and now implement what() to have dynamic polymorphism
 * 
 * noexcept 
 *      tells compiler it will not throw an excpetion 
 * 
 * with these implementations we can use cerr << ex.what() << endl; 
 *      this will return "Illegal Balance Exception"
 */