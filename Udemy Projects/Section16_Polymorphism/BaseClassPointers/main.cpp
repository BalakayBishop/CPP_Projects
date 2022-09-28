#include <iostream>

using namespace std;

class Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account();
};

class Savings : public Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings();
};

class Checking : public Account
{
public:
    virtual void withdraw(double x) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking();
};

class Trust : public Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust();
};

void do_withdraw (Account &acc, double amount)
{
    acc.withdraw(amount);
}

int main()
{
    // ----- Account Reference -----
    Account a;
    Account &ref = a;
    ref.withdraw(100);  // bound to Account::withdraw
    
    Trust t;
    Account &ref2 = t;
    ref2.withdraw(100); // bound to Trust::withdraw 
    
    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;
    
    do_withdraw(a1, 2'000);     // bound to Account
    do_withdraw(s1, 2'000);     // bound to Savings
    do_withdraw(c1, 2'000);     // bound to Checking
    do_withdraw(t1, 2'000);     // bound to Trust
    
    return 0;
}
/*
 * in the debugger s1 do_withdraw will refer to a Account but the type is Savings 
 * 
 */
