#pragma once

class MyString
{
public:
    private:
    char *str;
public:
    MyString();                          // no-args ctor
    MyString(const char *s);             // overloaded ctor
    MyString(const MyString &source);    // copy ctor
    MyString (MyString &&source);        // move ctor
    ~MyString();                         // dtor
    
    MyString &operator=(const MyString &rhs); // Copy Assignment
    MyString &operator=(MyString &&rhs);      // Move Assignment
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

