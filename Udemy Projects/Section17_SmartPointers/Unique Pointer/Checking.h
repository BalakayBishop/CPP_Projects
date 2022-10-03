#pragma once
#include "Account.h"
#include <iostream>
#include <string>

using std::string;

class Checking : public Account
{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_checkFee = 1.5;
public:
    Checking(string name = def_name, double balance = def_balance);
    virtual ~Checking() = default;
    
    virtual void print(ostream &os) const override;
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
};

