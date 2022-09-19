#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString empty;
    MyString larry {"Larry"};
    MyString stooge {larry};
    
    empty.display();  // no args ctor
    larry.display();  // overloaded ctor
    stooge.display(); // copy ctor
    
    return 0;
}
