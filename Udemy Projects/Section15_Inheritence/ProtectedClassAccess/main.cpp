#include <iostream>

using namespace std;

class Parent {
public:
    int a {0};
    void display() { cout << a << ", " << b << ", " << c << endl; }
    
protected:
    int b {0};
    
private:
    int c {0};
};

class Child: public Parent {
    // a will be public 
    // b will be protected
    // c will not be accessible
public:
    void access_parent()
    {
        a = 100; // this is OK
        b = 200; // this is OK
//        c = 300; // this is NOT OK
    }
};

int main()
{
    Parent base;
    base.a = 100;   // OK
//    base.b = 200; // Compiler error, protected
//    base.c = 300; // Compiler error. private

    Child derived;
    derived.a = 100;   // OK
//    derived.b = 200; // NOT OK, protected
//    derived.c = 300; // NOT OK, private
    
    return 0;
}
/*
 * Protected 
 *      define the same as public and private
 *      accessible to all members of the class itself
 *      also accessible to classes that are derived from the Parent
 * 
 * Member methods have total access
 * 
 */
