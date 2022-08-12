#include <iostream>
#include <array>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    // C-Style String 
    char myName[] {"Blake"};
    char name[8] {"Frank"}; // == Frank\0\0\0
    
    // Example 1
    char firstName [20];
    char lastName [20];
    char fullName [50];
    char temp [50];
    
    //cout << firstName; // this will display garbage
    
    cout << "Please enter your first name: ";
    cin >> firstName;
    
    cout << "Please enter your last name: ";
    cin >> lastName;
    
    cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " chars" << endl;
    cout << " and your last name, " << lastName << " has " << strlen(lastName) << " chars" << endl;
    
    // Using some functions
    strcpy(fullName, firstName); // copy first name into full name
    strcat(fullName, " ");       // adding a space into full name
    strcat(fullName, lastName);  // adding last name to the full name
    cout << "Your full name is: " << fullName << endl;
    
    // Example 2
    cout << "Enter you full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName; // this will only display until the space char
    
    // Instead do this:
    cout << "Enter you full name: ";
    cin.getline(fullName, 50); // this will get the whole up to 50 chars
    cout << "Your name is: " << fullName;
    
    // Example 3: compare 
    cout << "Enter you full name: ";
    cin.getline(fullName, 50);
    cout << "Your name is: " << fullName;
    
    strcpy(temp, fullName);
    if (strcmp(temp, fullName) == 0) // this will compare full name against temp
    {
        cout << "Names are the same" << endl;
    }
    else 
    {
        cout << "Names are different" << endl;
    }
    
    // modifying then re-comparing 
    for (size_t i {0}; i < strlen(fullName); i++)
    {
        // this is going to check if the char is a letter
        if (isalpha(fullName[i]))
        {
            // if fullName[i] == char, it will convert to an upper case 
            fullName[i] = toupper(fullName[i]); 
        }
    }
    
    // compare, this 
    if (strcmp(temp, fullName) == 0)
    {
        cout << "Names are the same" << endl;
    }
    else 
    {
        cout << "Names are different" << endl;
    }
    
    
    
    
    return 0;
}

/*
 * C-Style Strings
 *      is a sequence of chars 
 *      stored in contiguous mem.
 *      implemented as an array of chars
 *      terminated by a null char
 *      referred to as zero or null terminated strings
 * 
 * String Literals
 *      a sequence of chars in double quotes
 *      constant, not mutable
 *      terminated with null char
 * 
 * "C++ is fun" = ['C', '+', '+', ' ', 'i', 's', ' ', 'f', 'u', 'n', '\0']
 * 
 * char my_name[8]; == 8 garbage values
 * my_name = "Frank"; would be an error because we are trying to assign memory locations
 * strcopy (my_name, "Frank"); is a valid way of assigning a string literal 
 * 
 * <cstring>
 *      copy, concat, compare, searching, and other 
 *      we need to have a null terminator for these to work 
 *      if we are copying one string into another and it is not null terminated you will run into bounds errors
 * 
 * <cstdlib> 
 *      includes functions to convert C-style Strings to: int, float, long, etc.
 *      but we need to be aware that we are using C-style strings and need a null-term.
 * 
 * strlen returns a type called size_t 
 * size_t will work regardless of system and will be an unsigned number
 * use size_t instead of int 
 * 
 * strcmp
 *      this will return 0 if they are the same lexicly 
 *      will return < 0 if the first string comes before the second lexicly
 *      will return > 0 if the first string comes after the second 
 *      
 *      
 * 
 */ 
