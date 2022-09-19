#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class MyString
{
    friend ostream &operator<<(ostream &out, const MyString &rhs);
    friend istream &operator>>(istream &in, MyString &rhs);
    
private: 
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source);
    ~MyString();
    
    MyString &operator=(const MyString &rhs); // Copy Assignment
    MyString &operator=(MyString && rhs);     // Move Assignment
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

