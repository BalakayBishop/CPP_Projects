#pragma once

class MyString
{
private: 
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source);
    ~MyString();
    
    MyString &operator=(const MyString &rhs);
    MyString &operator=(MyString && rhs);
    
    MyString operator-() const;
    MyString operator+(const MyString &rhs) const;
    bool operator==(const MyString &rhs) const;
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;

};

