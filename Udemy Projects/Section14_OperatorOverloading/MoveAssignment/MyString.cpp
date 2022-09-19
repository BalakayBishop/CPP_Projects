#include "MyString.h"

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

// Move Ctor, creating an obj based on the r-value reference
MyString :: MyString(MyString &&source) : str(source.str) // the str for this obj is set to value of source
{
    source.str = nullptr;           // source.str is now null because it was taken by the str this obj 
    std::cout << "Move ctor called" << std::endl;
}

// Move Assingment
MyString &MyString :: operator= (MyString &&rhs) 
{
    std::cout << "Move Assingment called" << std::endl;
    if (this == &rhs) 
    {
        return *this;
    }
    delete [] str;          // delete lhs 
    str = rhs.str;          // steal pointer, assigning rhs pointer to the lhs pointer
    rhs.str = nullptr;      // rhs pointer will be nulled to prevent memory leak
    return *this;
}

// Copy Ctor
MyString :: MyString(const MyString &source) : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    // deep copying the source into str
}

// Copy Assingment
MyString &MyString :: operator=(const MyString &rhs) // <- this is what is being passed in for assignment
{
    std::cout << "Copy Assignment" << std::endl;
    if (this == &rhs)                           // checking for self assignment
    {
        return *this;                           // passing back the object b/c they are equal
    }
    delete [] this->str;                        // deleting the temp object that was created
    str = new char[std::strlen(rhs.str) + 1];   // allocating new space on heap
    std::strcpy(this->str, rhs.str);            // copying the passed value (rhs) into the lhs 
    return *this;                               // returning the lhs back to be assigned
}

MyString :: ~MyString()
{
    if (str == nullptr)
    {
        std::cout << "Dtor for nullptr" << std::endl;
    }
    else 
    {
        std::cout << "Dtor for object: " << str << std::endl;
    }
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
 * move assignment cannot be const because we will be changing the rhs
 * 
 * 
 * 
 * 
 */


