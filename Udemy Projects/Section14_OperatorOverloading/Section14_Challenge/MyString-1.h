#pragma once
#include <iostream>
using std::ostream;
using std::istream;

/*
 * The -1 header and implementation CPP files are being used to implement the overloaded operators 
 * as member methods within the clas.
 */

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
    MyString &operator=(MyString &&rhs);     // Move Assignment
    
    bool operator==(const MyString &rhs) const;  // equality
    bool operator!=(const MyString &rhs) const;  // inequality 
    bool operator<(const MyString &rhs) const;   // compare
    bool operator>(const MyString &rhs) const;   // compare
    MyString operator--(int);                    // to lower
    MyString operator++(int);                    // to upper
    MyString operator+(const MyString &rhs);     // concat
    MyString &operator+=(const MyString &rhs);    // concat
    MyString operator*(int n) const;  // repition
    MyString &operator*=(int n);
    
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

