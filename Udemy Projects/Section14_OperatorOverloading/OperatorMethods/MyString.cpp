#include "MyString.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

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

// Move Ctor
MyString :: MyString(MyString &&source) : str(source.str) 
{
    source.str = nullptr;            
    std::cout << "Move ctor called" << std::endl;
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

// Move Assingment
MyString &MyString :: operator=(MyString &&rhs) 
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

// Dtor
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

// Make lower
MyString MyString :: operator-() const
{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp {buff};
    delete [] buff;
    return temp;
}

MyString MyString :: operator+(const MyString &rhs) const
{
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Equality
bool MyString :: operator==(const MyString &rhs) const
{
    return (std::strcmp(this->str, rhs.str) == 0);
}
    
void MyString :: display() const{
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

