#include <iostream>
#include <memory>
#include <vector>
#include <string>

using std::shared_ptr;
using std::make_shared;
using std::weak_ptr;

using namespace std;

class B; // Forward delcaration

class A {
    shared_ptr<B> b_ptr;
public:
    void set_B (shared_ptr<B> &b) {
        b_ptr = b;
    }
    A () {cout << "A Ctor" << endl;}
    ~A() {cout << "A Dtor" << endl;}
};

class B {
    weak_ptr<A> a_ptr; // needs to be weak to break the Strong Circular Ref
public:
    void set_A (shared_ptr<A> &a) {
        a_ptr = a;
    }
    B () {cout << "B Ctor" << endl;}
    ~B() {cout << "B Dtor" << endl;}
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    
    // Circular Reference
    a->set_B(b);
    b->set_A(a);
         /* The problem a looks at b, b looks at a
         the use count will not be 0 so the heap objs will not be deleted
         What happens: a and b will be deleted from the stack (once out of scope)
         BUT the A and B heap objs will not be deleted causing a memory leak 
         A and B Dtor will never be called */
         
         // The solution: change class B's shared_ptr to a weak_ptr;
    
    
    return 0;
}
/*
 * Weak Pointer
 *      points to an obj on the heap
 *      refers to a shared obj 
 *      BUT they are a non-owning reference
 *      always created from a shared_ptr
 *      does NOT increment or decrement references 
 * 
 * Strong Pointers can create memory leaks 
 * 
 * 
 */