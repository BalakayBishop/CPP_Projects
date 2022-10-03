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
using std:shared_ptr;
using std::make_unique;
using std::make_shared;
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

void func(shared_ptr<Test> p) 
{
    
}

int main()
{
//    shared_ptr<int> p1 {new int{100}};
//    cout << "use count: " << p1.use_count() << endl;    // 1
//    
//    shared_ptr<int> p2 {p1};
//    cout << "use count: " << p1.use_count() << endl;    // 2
//    
//    p1.reset();
//    
//    cout << "use count: " << p1.use_count() << endl;    // 0
//    cout << "use count: " << p2.use_count() << endl;    // 1
    
    // -------------------------------------------------------
    shared_ptr<Test> ptr = make_shared<Test>(100);
    func(ptr);
    cout << "Use count: " << ptr.use_count() << endl;
    
    {
        shared_ptr<Test> ptr1 = ptr;
        cout << "Use count: " << ptr.use_count() << endl;
        {
            shared_ptr<Test> ptr2 = ptr;
            cout << "Use count: " << ptr.use_count() << endl;
            ptr.reset();
        }
        cout << "Use count: " << ptr.use_count() << endl;
    }
    
    cout << "Use count: " << ptr.use_count() << endl;
    
    // -----------------------------------------------------------
    shared_ptr<Account> acc1 = make_shared<Trust>("Larry", 10'000, 3.1);
    shared_ptr<Account> acc2 = make_shared<Checking>("Moe", 5'000);
    shared_ptr<Account> acc3 = make_shared<Savings>("Curly", 6'000);
    
    vector<shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for (const auto &acc : accounts) 
    {
        cout << *acc << endl;
        cout << "Use count: " << acc.use_count() << endl;
    }
    
    return 0;
}
/*
 * A shared pointer is a pointer that provides shared ownership of heap objects
 * points to obj on heap
 *      can be shared among many shared objs
 *      can be copied and assigned
 *      support move
 *      does not support managing arrays by default
 *      we can use reference counting, managed object on heap is destoyed 
 *          when it reaches zero then it can be safely destoyed 
 * 
 * use_count method
 *      returns the count of how many objects are referencing the heap object
 *      
 * Can point to user defined 
 * 
 * Can be copied, assigned, and moved
 *      
 * Make Shared - C++11
 *      shared_ptr<int> p1 = make_shared<int>(100); // use_count = 1
 *      shared_ptr p2 {p1};                         // use_count = 2
 *      shared_ptr p3; 
 *      p3 = p1;                                    // use_count = 3
 */