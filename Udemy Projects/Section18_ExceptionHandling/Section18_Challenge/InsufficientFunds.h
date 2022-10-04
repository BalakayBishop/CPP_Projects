#pragma once
#include <exception>

class InsufficientFunds : public std::exception
{
public:
    InsufficientFunds() noexcept = default;
    ~InsufficientFunds() = default;
    
    virtual const char* what() const noexcept
    {
        return "Withdraw failed - insufficient funds";
    }

};

