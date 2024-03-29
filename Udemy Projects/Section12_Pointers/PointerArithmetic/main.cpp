#include <iostream>
#include <string>

using namespace std;

int main()
{
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    // OR 
    
    while (*score_ptr != -1)
    {
        cout << *score_ptr++ << endl;
    }
    
    // ------------------------------------
    
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha;
    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl; // false
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl; // true
    
    cout << p1 << " == " << p2 << " : " << (*p1 == *p2) << endl; // true
    cout << p1 << " == " << p3 << " : " << (*p1 == *p3) << endl; // true
    
    p3 = &s3;
    
    cout << p1 << " == " << p3 << " : " << (*p1 == *p3) << endl; // false
    
    // -------------------------------------
    
    char name[] {"Frank"};
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0]; // F
    char_ptr2 = &name[3]; // n
    
    
    return 0;
}
/*
 * int_ptr++; increments a pointer to point to the next array element
 * int_ptr--, decrements a pointer to point to the previous array element
 * 
 * (+) increment pointer by n*sizeof(type)
 * 
 * subtracting two pointers
 *      both must be the same data type 
 * 
 * Comparison 
 *      == will only evaluate the location value and not the actual data 
 *      p1 == p2 will be false
 *      BUT 
 *      *p1 == *p2 is true 
 * 
 */


