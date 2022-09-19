#pragma once

class MyString
{
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    
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

