#include <iostream>
#include <memory>

using namespace std;

class Base 
{
public:
    void hello() const {
        cout << "Hello - I'm a Base class object" << endl;
    }
};

class Derived : public Base
{
    public:
    void hello() const {
        cout << "Hello - I'm a Derived class object" << endl;
    }
};

void greetings (const Base &obj)
{
    cout << "Greetings: ";
    obj.hello();
}

int main()
{
    Base b_obj;
    b_obj.hello();      // bind to the Base function
    
    Derived d_obj;
    d_obj.hello();      // bind to the Derived function 
    
    // issues 
    greetings(b_obj);   // bind to a Base
    greetings(d_obj);   // bind to a Base
    
    Base *ptr = new Derived(); 
    ptr->hello();       // this will bind to Base hello()
    
    // smart pointer
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->hello();      // this will still bind to Base hello()
    
    delete ptr;
    
    return 0;
}
