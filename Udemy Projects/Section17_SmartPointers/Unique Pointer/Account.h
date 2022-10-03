#pragma once
#include "I_Printable.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Account : public I_Printable
{
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(string name = def_name, double balance = def_balance);
    virtual ~Account() = default;
    
    // pure virtual functions
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    
    // overriden function 
    virtual void print(ostream &os) const override;
};

