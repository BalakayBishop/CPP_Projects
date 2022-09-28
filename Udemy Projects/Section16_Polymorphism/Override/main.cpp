#include <iostream>

using namespace std;

class Base 
{
public:
    virtual void hello() const {
        cout << "Hello, there!" << endl;
    }
    virtual ~Base();
};

class Derived : public Base
{
public:
    virtual void hello() const override {
        cout << "Hello" << endl;
    }
    
    virtual ~Derived();

};

int main()
{
    Base *p1 = new Base();
    p1->hello();
    
    Base *p2 = new Derived();
    p2->hello();
    
    return 0;
}
/*
 * C++11 Override
 *      we can override Base class virtual functions.
 *      if we do not provide the same sginature then it will not be virtual
 *      and it will be redefined.
 *      Redefinition is statically bound 
 *      Override is dynamically bound
 * 
 * Example:
 *      Base virtual void hello () const; != Dervied virtual void hello();
 *      Base *p1 = new Base() -> bound to Base
 *      Base *p2 = new Derived() -> bound to Base 
 * 
 * Correction:
 *      Base void hello() const; == Dervied override void hello();
 * 
 */
