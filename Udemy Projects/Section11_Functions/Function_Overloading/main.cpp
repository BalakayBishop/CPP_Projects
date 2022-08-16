#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print (int);
void print (double);
void print (string);
void print (string, string);
void print (vector<string>);

int main()
{
    print (100);                 // int version
    print ('A');                 // char will be promoted to int
    
    print (123.5);               // double
    print (123.5F);              // float promoted to double 
    
    print ("C-Style string");    // c-style string will be promoted to C++ string obj
    
    string s {"C++ String obj"}; // C++ string obj 
    print (s); 
    
    print ("C-Style String", s); // both C-Style String and C++ String obj 
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    print (stooges);
    
    return 0;
}

void print (int n)
{
    cout << "printing int: " << n << endl;
}
void print (double n)
{
    cout << "printing double: " << n << endl;
}

void print (string s)
{
    cout << "printing string: " << s << endl;
}

void print (string s1, string s2)
{
    cout << "printing string 1: " << s1 << " and string 2: " << s2 << endl;
}

void print (vector<string> s)
{
    cout << "printing vector of strings: ";
    for (auto str : s)
    {
        cout << str + " ";
    }
    cout << endl;
}

/*
 * we can have function that have different param lists that have the same name
 *      this is typically not allowed
 * 
 * abstraction mechanism since we can just think of 'print' for example, and only pass what we need
 * 
 * polymorphism 
 *      many forms of the same concept
 * 
 * Example
 *      int add_numbers     (int, int);
 *      double add_numbers  (double, double);
 * 
 * We must implement all versions of the fucntion 
 * 
 * return type is not considered 
 *      error because the only difference is the return type 
 * 
 * Be careful of using default values for two overloaded functions
 * 
 */
