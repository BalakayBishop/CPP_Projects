#pragma once
#include <iostream>
using std::ostream;
using std::istream;

/*
 *  this is going to be used to implement non-member functions
 * of the same overloaded operators
 * 
 */
 
class MyString2
{
    friend ostream &operator<<(ostream &out, const MyString2 &rhs);
    friend istream &operator>>(istream &in, MyString2 &rhs);
    friend bool operator==(const MyString2 &lhs, const MyString2 &rhs);
    friend bool operator!=(const MyString2 &lhs, const MyString2 &rhs);
    friend bool operator<(const MyString2 &lhs, const MyString2 &rhs);
    friend bool operator>(const MyString2 &lhs, const MyString2 &rhs);
    friend MyString2 operator+(const MyString2 &lhs, const MyString2 &rhs);
    friend MyString2 &operator+=(MyString2 &lhs, const MyString2 &rhs);
    friend MyString2 operator*(const MyString2 &lhs, int n);
    friend MyString2 &operator*=(MyString2 &source, int n);
    friend MyString2 operator++(const MyString2 &source,int);
    friend MyString2 operator--(const MyString2 &source,int);
    
private: 
    char *str;
public:
    MyString2();
    MyString2(const char *s);
    MyString2(const MyString2 &source);
    MyString2(MyString2 &&source);
    ~MyString2();
    
    MyString2 &operator=(const MyString2 &rhs); // Copy Assignment
    MyString2 &operator=(MyString2 &&rhs);     // Move Assignment
    
    bool operator==(const MyString2 &rhs) const;  // equality
    bool operator!=(const MyString2 &rhs) const;  // inequality 
    bool operator<(const MyString2 &rhs) const;   // compare
    bool operator>(const MyString2 &rhs) const;   // compare
    MyString2 operator--(int);                    // to lower
    MyString2 operator++(int);                    // to upper
    MyString2 operator+(const MyString2 &rhs);     // concat
    MyString2 &operator+=(const MyString2 &rhs);    // concat
    MyString2 operator*(int n) const;  // repition
    MyString2 &operator*=(int n);
    
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

