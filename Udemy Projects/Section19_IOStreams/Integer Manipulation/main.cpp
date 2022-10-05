#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num {255};
    int num2 {-225};
    
    // these will not show base
    cout << dec << num << endl; // base 10 == 255
    cout << hex << num << endl; // base 16 == ff
    cout << oct << num << endl; // base 8  == 377
    
    // these will show base
    cout << showbase;
    cout << dec << num << endl; // base 10 == 225
    cout << hex << num << endl; // base 16 == 0xff
    cout << oct << num << endl; // base 8  == 0377
    
    // this will force the + to show before pos nums
    cout << showpos;
    cout << num << endl;  // +255
    cout << num2 << endl; // -225
    
    return 0;
}
/*
 * Integer Manipulation
 *      4 types 
 *      dec (base 10), noshowbase, nouppercase, noshowpos
 * 
 * 
 */
