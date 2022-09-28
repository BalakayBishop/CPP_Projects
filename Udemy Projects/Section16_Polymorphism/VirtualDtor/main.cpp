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
 * if we do not include a virtual Dtor for virtual functions it could lead to unexpected behavior
 * 
 * if a class has virtual functions, it must have a virtual dtr
 * 
 * Example:
 *      virtual ~Account();
 * 
 * If we delete the pointer and do not provide a virtual Dtor 
 *      the delete method will only call the Base Dtor
 *      only need to provide the virtual keyword in the base class
 *      but, it is good practice to put it everywhere
 * 
 * When deleting with virtual
 *      the dtor for the Derived class dtor will be called, then the Base class dtor
 *      this will happen for each object that is being destroyed 
 */

