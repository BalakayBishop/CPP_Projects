#include "MyString.h"
#include <cstring>
#include <iostream>

// no args Ctor
MyString :: MyString() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded Ctor
MyString :: MyString(const char *s) : str {nullptr} 
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else 
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
        // deep copying s into str
    }
}

// Copy Ctor
MyString :: MyString(const MyString &source) : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    // deep copying the source into str
}

MyString :: ~MyString()
{
    delete [] str;
}

void MyString :: display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

int MyString :: get_length() const
{
    return std::strlen(str);
}

const char *MyString :: get_str() const
{
    return str;
}

/*
 * in the Ctor we are allocation the length + 1 chars for the null terminator
 * We are then making a deep copy of the CString that is being passed to the Ctor 
 *      this is to make sure there is no crash when the Dtor is called for the object
 * 
 * 
 * 
 * 
 */
