#include <iostream>

using namespace std;

class Base 
{
private:
    int b_value;
public:
    Base() : b_value {0} {
        cout << "Base no-arg Ctor" << endl;
    }
    Base(int x) : b_value {x} {
        cout << "Base 1-arg Ctor" << endl;
    }
    ~Base() {
        cout << "Base Dtor" << endl;
    }
};

class Derived : public Base
{
private:
    int d_value;
public:
    Derived() : Base{}, d_value {0} {
        cout << "Derived no-arg Ctor" << endl;
    }
    Derived(int x) : Base{x}, d_value {x * 2} {
        cout << "Derived 1-arg Ctor" << endl;
    }
    ~Derived() {
        cout << "Derived Dtor" << endl;
    }
};

int main()
{
    Derived d1;         // Calls no-arg Base Ctor then no-arg Derived Ctor
                        // then, calls Derived Dtor and then Base Dtor
                        // b_value = 0 and d_value = 0
    
    Derived d2 {100};   // Calls 1-arg Base Ctor, then 1-arg Derived Ctor
                        // then, calls Derived Dtor and then Base Dtor
                        // b_value = 100 and d_value = 200
    
    return 0;
}
/*
 * Telling the Derived class which Base Ctor we want to use when using the Derived Ctor
 * 
 * Using an Ctor init list to tell the Derived Ctor which Base Ctor we want to use 
 * 
 * 
 * 
 */
