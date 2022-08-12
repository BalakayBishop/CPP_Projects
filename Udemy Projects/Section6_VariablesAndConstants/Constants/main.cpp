#include <iostream>

using namespace std;

// CONSTANTS 
/*
 * they are like variables 
 * BUT, their value cannot change once declared
 * literal, declared, constant expressions, enumerated const, and defined
 *      declared constants
        const double pi {3.14};
 * 
 *      defined constants 
        do not use defined constants in Modern C++
        #define pi 3.1415926;
 *  
 * char literal characters \n, \r, \t, etc. 
 * 
 */
 
 // PSUEDOCODE 
 /*
    Prompt user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost (num rooms * price per room)
    Display tax (cost * tax rate)
    Distplay total estimate 
    Display estimate exp time
  */

int main()
{
    cout << "Hello, welcome to Blake's Carpet Cleaning Service" << endl;
    
    cout << "How many rooms would you like cleaned? ";
    int numberOfRooms {0};
    cin >> numberOfRooms;
    
    const double pricePerRoom {30.0};
    const double salesTax {0.06};
    const int estimateExpiry {30}; // days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    
    cout << "Price per room is $" << pricePerRoom << endl;
    
    cout << "Cost: $" << pricePerRoom * numberOfRooms << endl;
    
    cout << "Sales tax is: $" << pricePerRoom * numberOfRooms * salesTax << endl;
    
    cout << "\nThe estimated total is: $" << (pricePerRoom * numberOfRooms) + (pricePerRoom * numberOfRooms * salesTax) << endl;
    
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;
    
    return 0; 
}
