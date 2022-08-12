#include <iostream> 

using namespace std; 

int main()
{
    cout << "Hello World!" << endl; 
    
    cout << "Hello";
    cout << "World!" << endl;
    
    cout << "Hello world!" << endl;
    cout << "Hello " << "world!" << endl;
    cout << "Hello " << "world!\n" << endl;
    cout << "Hello\nOut\nThere\n"; 
    
    int num1, num2;
    double num3; 
    
    cout << "Enter an int: ";
    cin >> num1;
    cout << "You've entered: " << num1 << endl;
    
    cout << "Enter 1st num: ";
    cin >> num1;
    
    cout << "Enter 2nd num: ";
    cin >> num2;
    
    cout << "You entered " << num1 << " and " << num2 << endl;
    
    // OR 
    
    cout << "Enter two ints w/ a space between: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
    
    cout << "Enter a double: ";
    cin >> num3;
    cout << "You've entered: " << num3 << endl;
    
    // FINALLY
    cout << "Enter and int: ";
    cin >> num1;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "The int is " << num1 << endl;
    cout << "The double is " << num3 << endl;
    
    return 0; 
}

/*
 * Entered from a buffer via the keyboard to the variable
*/ 