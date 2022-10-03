#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "Trust.h"
#include "Account_Util.h" 

using namespace std;
using std::unique_ptr;
using std::make_unique;
using std::move;
using std::vector;

class Test {
private:
    int data;
public:
    Test() : data {0} {
        cout << "Test ctor (" << data << ")" << endl;
    }
    
    Test(int data) : data {data} {
        cout << "Test ctor (" << data << ")" << endl;
    }
    
    ~Test() = default;
    
    int get_data() const { return data; }
};

int main()
{
//    Test t1 {1'000};
//    Test *t2 = new Test{1'000};
//    delete t2;
    
    unique_ptr<Test> t3 {new Test{100}};
    // no need to call delete 
    
    unique_ptr<Test> t4 = make_unique<Test>(1'000);
    
    auto t5 = make_unique<Test>(5'000);
    
    // using move
    unique_ptr<Test> t6;
    t6 = move(t4);
    
    if (!t4)
    {
        cout << "t1 is nullptr" << endl;
    }
    
    // creating a polymorhpic unique ptr
    unique_ptr<Account> a1 = make_unique<Checking>("Moe", 5'000);
    
    // deref the unique to get obj
    cout << *a1 << endl;
    
    // using the poly methods
    a1->deposit(5'000);
    
    // A vector of unique Account pointers
    vector< unique_ptr<Account> > accounts;
    
    accounts.push_back(make_unique<Checking>("James", 1'000));
    accounts.push_back(make_unique<Savings>("Billy", 4'000, 5.2));
    accounts.push_back(make_unique<Trust>("Bob", 5'000, 4.5));
    
    // Needs to be by & to avoid copy
    for (const auto &acc : accounts)
    {
        cout << *acc << endl;
    }
    
    return 0;
}
/*
 * unqiue_ptr
 *      simple smart pointer
 *      points to an object of type T on the heap
 *      can point to any type that we need 
 *      cannot be copied or assigned
 *      can be moved 
 *      
 * Methods
 *      .get -> pointer to managed object
 *      .reset -> sets to nullptr and memory is released
 *      if(p1) 
 *      compare using relational ops
 *      
 * User Defined
 *      unique_ptr<Account> p1 {new Account{"Larry"}}
 *      
 * std::move(ptr)
 * 
 * C++14
 *      make_unique
 *      std::unique_ptr<int> p1 = make_unique<int>(100);
 *      unqiue_ptr<Account> p2 = make_unique<Account>("Curly", 5'000);
 *      auto p3 = make_unique<Player>("Hero", 100, 100);
 *          compiler will determine based on what make_unique returns
 * 
 */
