#include <iostream>

using namespace std;

class Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Account::withdraw" << endl;
    }
};

class Savings : public Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Savings::withdraw" << endl;
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double x) {
        cout << "In Checking::withdraw" << endl;
    }
};

class Trust : public Account 
{
public:
    virtual void withdraw(double x) {
        cout << "In Trust::withdraw" << endl;
    }
};

int main()
{
    // ----- Account Pointers -----
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1'000);
    p2->withdraw(1'000);
    p3->withdraw(1'000);
    p4->withdraw(1'000);
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
/*
 * Syntax:
 *      declare the Base class method as 'virtual'
 *      delcare the Dervied class method as 'override'
 * 
 * Base class functions are statically bound
 *      unless we use pointers 
 * 
 * If we do not use the Virtual keyword then the four withdraw methods would 
 * statically bound to the Account method
 */
