#include <iostream>
#include <memory>

using namespace std;
using std::shared_ptr;

class Test {
private:
    int data;
public:
    Test() : data {0} {cout << "Test Ctor (" << data << ")" << endl;}
    Test(int data) : data {data} {cout << "Test Ctor (" << data << ")" << endl;}
    ~Test() = default;
    int get_data () {return data;}
};

void my_deleter (Test *ptr) // passing the raw pointer being managed
{
    cout << "Customer deleter" << endl;
    delete ptr;
}

int main()
{
    { // Function
        shared_ptr<Test> ptr1 {new Test{100}, my_deleter}; // using the customer deleter
    }
    
    { // Lambda
        shared_ptr<Test> ptr2 (new Test{100}, [] (Test *ptr) 
        {
            cout << "Using lambda deleter" << endl;
            delete ptr;
        });
    }
    
    return 0;
}
/*
 * Custom Deleters
 *      sometimes need more than just destroy objs on the heap
 *      only special use-cases
 *      
 * Function
 *      syntax 
 *      void deleter (some calls *raw_pointer) {}
 *      shared_ptr <> ptr {new class {}, deleter};
 *      
 * Lambda
 *      an anonymous function 
 *      defined inline
 *      shared<> ptr (new class {}, [] (class *ptr) { delete ptr; }
 *      
 * When using the customer deleted we need to use new and not make_shared
 * 
 * 
 */
