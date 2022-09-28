#include <iostream>

using namespace std;

class Base 
{
private:
    int value;
public:
    Base() : value {0} {
        cout << "Base no-args Ctor" << endl;
    }
    Base(int x) : value {x} {
        cout << "Base 1-arg Ctor" << endl;
    }
    ~Base() {
        cout << "Base Dtor" << endl;
    }
    
    Base(const Base &other) : value {other.value} {
        cout << "Base copy Ctor" << endl;
    }
    
    Base &operator= (const Base &rhs) {
        cout << "Base operator=" << endl;
        if (this==&rhs) {
            return *this;
        }
        value = rhs.value;
        return *this;
    }
};

class Derived : public Base 
{
private:
    int double_value;
public:
    Derived() : Base{}, double_value {0} {
        cout << "Derived no-arg Ctor" << endl;
    }
    Derived(int x) : Base {x}, double_value {x * 2} {
        cout << "Derived 1-arg Ctor" << endl;
    }
    ~Derived() {
        cout << "Derived Dtor" << endl;
    }
    
    Derived(const Derived &other) 
        : Base(other), double_value {other.double_value} {
            cout << "Derived copy Ctor" << endl;
    }
    Derived &operator= (const Derived &rhs) {
        cout << "Derived operator=" << endl;
        if (this == &rhs) {
            return *this;
        }
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this;
    }
    
};

int main()
{
    Base b {100};       // Overloaded, 1-arg
    Base b1 {b};        // Copy Ctor
    b = b1;             // Copy Assignment
    
    Derived d {100};    // Overloaded, 1-arg
    Derived d1 {d};      // Copy Ctor
    d = d1;             // Copy Assignment
    
    return 0;
}
/*
 * Copy/Move Ctors are not inherited from the Base Class
 * 
 * Slicing
 *      derived object will be sliced 
 * 
 * 
 * 
 * 
 * 
 */
