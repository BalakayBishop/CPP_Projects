#include <iostream>

using namespace std;

void func_a();
void func_b();
void func_c();

void func_a() 
{
    cout << "Starting func_a" << endl;
    func_b();
    cout << "Finishing func_a" << endl;
}

void func_b() 
{
    cout << "Starting func_b" << endl;
    try {
        func_c();
    }
    catch (int &ex) {cout << "Caught error in func_b" << endl;}
    cout << "Finishing func_b" << endl;
}

void func_c() 
{
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Finishing func_c" << endl;
}

int main()
{
    cout << "Starting main" << endl;
    try {
        func_a();
    }
    catch (int &ex) {cout << "Caught error in main" << endl;}
    
    cout << "Finishing main" << endl;
    
    cout << endl;
    return 0;
}
/*
 * Stack Unwinding
 *      if an exception is thrown from a function
 *      the function is removed from the call stack 
 *      then the compiler will look for function call 
 *          if it was inside a try block it will look for the catch block
 * 
 * With the throw 100
 *      c will never complete
 *      it will pop and go back to b
 *      b will never finish and go back to a
 *      a will never finish and go back to main 
 *      main will catch the exception and finish
 * 
 * with try { func_c() } 
 *      main will start, a will start, b will start, c will start
 *      exception throw and caught in func_b
 *      c will not finish
 *      a, b, and main will finish normally
 */
