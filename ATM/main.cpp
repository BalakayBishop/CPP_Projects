#include <iostream>
#include <fstream>
#include "Bank.h"

/*
 * The intention of this console application is to replicate an ATM machine.
 * I am going to try and implement the methods via OOP.
 * The application is going to write to and read from files in order 
 * to allow the user information to stored after the lifetime of the program.
 * This will be done through class methods that are called from objects
 * and parameters passed.
 */

using namespace std;

int main ()
{
    string first_name {};
    string last_name {};
    cout << "Welcome, please enter your first and last name: ";
    cin >> first_name >> last_name;
    
    Bank obj {first_name, last_name};
    
    obj.display_menu();
    
    cout << endl;
    return 0;
}
