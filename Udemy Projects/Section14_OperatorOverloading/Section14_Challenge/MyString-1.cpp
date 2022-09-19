#include "MyString-1.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::strcmp;
using std::strlen;
using std::strcpy;
using std::tolower;
using std::toupper;

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
    //std::cout << "Copy Assignment" << std::endl;
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
    //std::cout << "Move Assingment called" << std::endl;
    if (this == &rhs) 
    {
        return *this;
    }
    delete [] this->str;          // delete lhs 
    this->str = rhs.str;          // steal pointer, assigning rhs pointer to the lhs pointer
    rhs.str = nullptr;            // rhs pointer will be nulled to prevent memory leak
    return *this;
}

// Dtor
MyString :: ~MyString()
{
    delete [] str;
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


// Out stream
ostream &operator<<(ostream &out, const MyString &rhs)
{
    out << rhs.str;
    return out;
}

// In stream
istream &operator>>(istream &in, MyString &rhs)
{
    char *buff = new char [1'000];
    in >> buff;
    rhs = MyString {buff};
    delete [] buff;
    return in;
}

// Equality, ==
bool MyString :: operator==(const MyString &rhs) const
{
    return (strcmp(this->str, rhs.str) == 0);
}

// Inequality, !=
bool MyString :: operator!=(const MyString &rhs) const
{
    return (strcmp(this->str, rhs.str) != 0);
}

// --, to lower POSTFIX
MyString MyString :: operator--(int)
{
    char *buff = new char[strlen(this->str) + 1];
    strcpy(buff,this->str);
    for (size_t i {0}; i < strlen(buff); i++)
    {
        buff[i] = tolower(buff[i]);
    }
    MyString new_str {buff};
    delete [] buff;
    return new_str;
}

// ++, to upper POSTFIX
MyString MyString :: operator++(int)
{
    char *buff = new char[strlen(this->str) + 1];
    strcpy(buff,this->str);
    for (size_t i {0}; i < strlen(buff); i++)
    {
        buff[i] = toupper(buff[i]);
    }
    MyString new_str {buff};
    delete [] buff;
    return new_str;
}

// Comparison, > 
bool MyString :: operator<(const MyString &rhs) const
{
    if (this->str < rhs.str) {
        return true;
    }
    
    return false;
}
    
// Comparison, < 
bool MyString :: operator>(const MyString &rhs) const
{
    if (this->str > rhs.str) {
        return true;
    }
    
    return false;
}

// Concat, +
MyString MyString :: operator+(const MyString &rhs)
{
    char *buff = new char[strlen(this->str) + strlen(rhs.str) + 1];
    strcpy(buff, this->str);
    strcat(buff, rhs.str);
    MyString new_str {buff};
    delete [] buff;
    return new_str;
}

MyString &MyString :: operator+=(const MyString &rhs)
{
    // My soltuion
//    char *buff = new char[strlen(this->str) + strlen(rhs.str) + 1];
//    strcpy(buff, this->str);
//    MyString new_str {*buff + rhs.str}; // deref pointer to call overloaded + operator
//    delete [] buff;
//    return new_str;

// Solution
    *this = *this + rhs;
    return *this;
}

// Repeat, *
MyString MyString :: operator*(int n) const
{
    // My Soltuion
//    char *buff = new char[(strlen(this->str) * n) + 1];
//    for (size_t i {0}; i < n; i++)
//    {
//        strcat(buff, this->str);
//    }
//    MyString new_str {buff};
//    delete [] buff;
//    return new_str;
    
    // Solution
    MyString temp;
    for (int i {0}; i < n; i++)
    {
        temp = temp + *this;
    }
    return temp;
}

MyString &MyString :: operator*=(int n)
{
    // My solution 
//    char *buff = new char[(strlen(this->str) * n) + 1];
//    strcpy(buff, this->str);
//    for (size_t i {0}; i < n; i++)
//    {
//        strcat(buff, this->str);
//    }
//    MyString new_str {buff};
//    delete [] buff;
//    return new_str;

// Soltuion
    *this = *this * n;
    return *this;
}