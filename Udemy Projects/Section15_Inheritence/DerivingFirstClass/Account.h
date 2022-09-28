#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Account
{
public:
    Account();
    ~Account();
    
    void deposit(double amount);
    void withdraw(double amount);
    
    double balance {};
    string name {};

};

