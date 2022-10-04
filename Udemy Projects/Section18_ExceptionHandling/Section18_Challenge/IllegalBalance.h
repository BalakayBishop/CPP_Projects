#pragma once
#include <exception>

class IllegalBalance : public std::exception
{
public:
    IllegalBalance() noexcept = default;
    ~IllegalBalance() = default;
    
    virtual const char *what() const noexcept
    {
        return "Illegal balance exception - cannot initialize with a negative balance";
    }

};

