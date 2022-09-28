#include <iostream>

using namespace std;

class Base 
{
private:
    int value;
public:
    Base() : value {0} {
        cout << "Base no-arg Ctor" << endl;
    }
    Base(int x) : value {x} {
        cout << "Base 1-arg Ctor" << endl;
    }
    ~Base() {
        cout << "Base Dtor" << endl;
    }
};

class Derived : public Base 
{
    using Base::Base;
private:
    int doubled_value;
public:
    Derived() : doubled_value {0} {
        cout << "Derived no-arg Ctor" << endl;
    }
    Derived(int x) : doubled_value {x * 2} {
        cout << "Derived 1-arg Ctor" << endl;
    }
    ~Derived() {
        cout << "Derived Dtor" << endl;
    }
};

int main()
{
                        // Output
                        
    //Base b_obj;       // Base Ctor 
                        // Base Dtor
    
    //Derived d_obj;    // Base Ctor 
                        // Derived Ctor
                        // Derived Dtor
                        // Base Dtor
    // --------------------------------------
    Base b1;             // no-arg Ctor
    
    Base b2 {100};       // 1-arg Ctor
    
    Derived d1;          // no-arg Ctor
    
    Derived d2 {100};    // 1-arg Ctor
    
    // ----------- Step 1: using Base::Base --------------
    Derived d3 {1'000};  // 1-arg Derived Ctor, no-arg Base Ctor
                         // this is not the result that we would want 
    
    return 0;
}
/*
 * A derived class inherits from a base class 
 * 
 * The Base (parent) part of the derived class MUST be initialized BEFORE 
 * the derived class is initialized
 * 
 * When a derived obj is created 
 *      the base class ctor executes then
 *      the derived class ctor executes
 * 
 * Destructors 
 *      reverse orders of the Ctor
 *      the derived part of the Derived class MUST be destroyed BEFORE
 *      the base part is destroyed 
 * 
 * Derived Class does not inherit
 *      base ctor
 *      base dtor
 *      base overloaded assignment operators
 *      base friend functions
 * 
 * using Base::Base; intro'd in C++11
 *      lots of rules involved, often better to define Ctor yourself
 * 
 */
