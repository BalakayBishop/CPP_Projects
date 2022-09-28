#include <iostream>

using namespace std;

class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~I_Printable() {}
};

ostream &operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

class Account : public I_Printable
{
public:
    virtual void withdraw(double amount) {
        cout << "Account::withdraw" << endl;
    }
    
    virtual void print(ostream &os) const override {
        os << "Account display";
    }
    virtual ~Account() {}
};

class Checking : public Account 
{
public:
    virtual void withdraw(double amount) {
        cout << "Checking::withdraw" << endl;
    }
    
    virtual void print(ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() {}
};

class Savings : public Account 
{
public:
    virtual void withdraw(double amount) {
        cout << "Savings::withdraw" << endl;
    }
    
    virtual void print(ostream &os) const override {
        os << "Savings display";
    }
    virtual ~Savings() {}
};

class Trust : public Account 
{
public:
    virtual void withdraw(double amount) {
        cout << "Trust::withdraw" << endl;
    }
    
    virtual void print(ostream &os) const override {
        os << "Trust display";
    }
    virtual ~Trust() {}
};

void print(const I_Printable &obj)
{
    cout << obj << endl;
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
    
    // ----- Instead of stream we could use print() method
    print(a);
    print(*p2);
    
    return 0;
}
/*
 * This is exactly the same as file Interface_ptI
 * The only difference is that we are going to implement a Print Interface
 *      to dynamically bind the &operator<<
 * 
 */ 


