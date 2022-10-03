#pragma once
#include <iostream>

using std::ostream;

class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &rhs);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~I_Printable() = default;

};

