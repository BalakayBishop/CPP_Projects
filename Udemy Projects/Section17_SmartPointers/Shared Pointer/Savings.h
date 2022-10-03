#pragma once
#include "Account.h"

using std::string;

class Savings : public Account
{
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_intRate = 0.0;
protected:
    double int_rate;
public:
    Savings(string name = "Unnamed Savings Account", double amount = 0.0, double int_rate = 0.0);
    virtual ~Savings() = default;
    
    virtual void print(ostream &os) const override;
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
};

