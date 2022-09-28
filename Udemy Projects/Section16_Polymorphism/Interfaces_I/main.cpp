#include <iostream>

using namespace std;

class Account 
{
    friend ostream &operator<< (ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        cout << "Account::withdraw" << endl;
    }
    virtual ~Account();
};
ostream &operator<< (ostream &os, const Account &acc) 
{
    os << "Account display";
    return os;
}


class Checking : public Account 
{
    friend ostream &operator<< (ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount) {
        cout << "Checking::withdraw" << endl;
    }
    virtual ~Checking();
};
ostream &operator<< (ostream &os, const Checking &acc) 
{
    os << "Checking display";
    return os;
}


class Savings : public Account 
{
    friend ostream &operator<< (ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount) {
        cout << "Savings::withdraw" << endl;
    }
    virtual ~Savings();
};
ostream &operator<< (ostream &os, const Savings &acc) 
{
    os << "Savings display";
    return os;
}


class Trust : public Account 
{
    friend ostream &operator<< (ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount) {
        cout << "Trust::withdraw" << endl;
    }
    virtual ~Trust();
};
ostream &operator<< (ostream &os, const Trust &acc) 
{
    os << "Trust display";
    return os;
}

int main()
{
    Account a;
    cout << a << endl;
    
    Checking c;
    cout << c << endl;
    
    Savings s;
    cout << s << endl;
    
    Trust t;
    cout << t << endl;
    
    
    // -------------------------
    Account *p1 = new Account();
    cout << *p1 << endl;            // bound to Acounnt::display
    
    Account *p2 = new Checking(); 
    cout << *p2 << endl;            // bound to Acounnt::display
    // There is no virtual &operator<< to dynamically bind
    
    return 0;
}
/*
 * A class that only has pure virtual functions
 * Provided as public
 * Ech sub-class is free to implement these services 
 * C++ do not provide a keyword
 * 
 * We could define Printable as an Interface to provide an overloaded << 
 * 
 * Convention I_ClassName for Interface Class
 * 
 * To print better, instead of adding a method
 * it makes more sense to add an interface class to implement the print
 */
