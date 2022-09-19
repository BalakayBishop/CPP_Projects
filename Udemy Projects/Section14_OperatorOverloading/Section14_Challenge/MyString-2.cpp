#include "MyString-2.h"
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
MyString2 :: MyString2() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded Ctor
MyString2 :: MyString2(const char *s) : str {nullptr} 
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
MyString2 :: MyString2(const MyString2 &source) : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    // deep copying the source into str
}

// Move Ctor
MyString2 :: MyString2(MyString2 &&source) : str(source.str) 
{
    source.str = nullptr;            
    std::cout << "Move ctor called" << std::endl;
}

// Copy Assingment
MyString2 &MyString2 :: operator=(const MyString2 &rhs) // <- this is what is being passed in for assignment
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
MyString2 &MyString2 :: operator=(MyString2 &&rhs) 
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
MyString2 :: ~MyString2()
{
    delete [] str;
}
    
void MyString2 :: display() const{
    std::cout << str << " : " << get_length() << std::endl;
}
    
int MyString2 :: get_length() const
{
    return std::strlen(str);
}

const char *MyString2 :: get_str() const
{
    return str;
}


// Out stream
ostream &operator<<(ostream &out, const MyString2 &rhs)
{
    out << rhs.str;
    return out;
}

// In stream
istream &operator>>(istream &in, MyString2 &rhs)
{
    char *buff = new char [1'000];
    in >> buff;
    rhs = MyString2 {buff};
    delete [] buff;
    return in;
}

bool operator==(const MyString2 &lhs, const MyString2 &rhs)
{
    return (strcmp(lhs.str,rhs.str) == 0);
}

bool operator!=(const MyString2 &lhs, const MyString2 &rhs)
{
    return !(strcmp(lhs.str,rhs.str) == 0);
}

bool operator<(const MyString2 &lhs, const MyString2 &rhs)
{
    if (lhs.str < rhs.str) {
        return true;
    }
    
    return false;
}

bool operator>(const MyString2 &lhs, const MyString2 &rhs)
{
    if (lhs.str > rhs.str) {
        return true;
    }
    
    return false;
}

MyString2 operator+(const MyString2 &lhs, const MyString2 &rhs)
{
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    MyString2 new_str {buff};
    delete [] buff;
    return new_str;
}

MyString2 &operator+=(MyString2 &lhs, const MyString2 &rhs)
{
    lhs = lhs + rhs;
    return lhs;
}

MyString2 operator*(const MyString2 &lhs, int n)
{
    MyString2 temp;
    for (int i {0}; i < n; i++)
    {
        temp = temp + lhs;
    }
    return temp;
}

MyString2 &operator*=(MyString2 &lhs, int n)
{
    lhs = lhs * n;
    return lhs;
}

MyString2 operator++(const MyString2 &source,int)
{
    char *buff = new char[strlen(source.str) + 1];
    strcpy(buff,source.str);
    for (size_t i {0}; i < strlen(buff); i++)
    {
        buff[i] = toupper(buff[i]);
    }
    MyString2 new_str {buff};
    delete [] buff;
    return new_str;
}

MyString2 operator--(const MyString2 &source,int)
{
    char *buff = new char[strlen(source.str) + 1];
    strcpy(buff,source.str);
    for (size_t i {0}; i < strlen(buff); i++)
    {
        buff[i] = tolower(buff[i]);
    }
    MyString2 new_str {buff};
    delete [] buff;
    return new_str;
}