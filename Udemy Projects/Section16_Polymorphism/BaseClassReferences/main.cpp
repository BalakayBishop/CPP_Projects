#include <iostream>
#include <vector>

using namespace std;
using std::vector;

class Account 
{
public:
    void withdraw(int x);
};

class Savings : public Account 
{
    
};

class Checking : public Account
{
    
};

class Trust : public Account 
{
    
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
    
    // ----- Account Array -----
    Account *arr [] = {p1,p2,p3,p4};
    for (auto i {0}; i < 4; i++)
    {
        arr[i] -> withdraw(1'000);
    }
    
    // ----- Account Vector -----
    vector<Account *> accounts {p1,p2,p3,p4};
    for (auto vec : accounts)
    {
        vec -> withdraw(1'000);
    }
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
