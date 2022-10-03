#pragma once
#include "Savings.h"

using std::string;

class Trust : public Savings
{
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_intRate = 0.0;
protected:
    int num_withdraws;
public:
    Trust(string name = "Unnamed Trust Account", double balance = 0.0, double int_rate = 0.0);
    virtual ~Trust() = default;
    
    virtual void print(ostream &os) const override;
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
};

