#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num {10}; 
    cout << "Value is: " << num << endl;
    cout << "sizeof is: " << sizeof num << endl;
    cout << "Addresss of num is: " << &num << endl; // location in memory
    
    int *p;
    cout << "Value of p: " << p << endl; // this will print garbage 
    cout << "Address of p: " << &p << endl; // this will show the hexidecimal address in memory 
    cout << "sizeof p: " << sizeof p << endl;
    
    int *p1 {nullptr}; 
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "sizeof p1: " << sizeof p1 << endl;
    cout << "sizeof p2: " << sizeof p2 << endl;
    cout << "sizeof p3: " << sizeof p3 << endl;
    cout << "sizeof p4: " << sizeof p4 << endl;
    cout << "sizeof p5: " << sizeof p5 << endl;
    
    int score {10}; 
    double high_temp {100.7}; 
    
    int *score_ptr {nullptr};
    
    score_ptr = &score; // pointer now equal to address of int score
    
    cout << "Value of score: " << score << endl; 
    cout << "Address of score: " << &score << endl;  
    cout << "Value of score_ptr: " << score_ptr << endl;
    
    // ---------------------------------
    const int *score_ptr2 {nullptr}; 
    int *const score_ptr3 {nullptr};
    const int *const score_ptr4 {nullptr}; 
    
    
    return 0;
}
/*
 * Pointers
 *      can point to a variable or function 
 *      always initialize the pointer data 
 *      
 * Declaration
 *      variable_type *pointer_name
 *      int *int_pointer OR int* int_pointer
 *      int *int_pointer {nullptr}; nullptr = 0; 
 * 
 * Accessing 
 *      & the address operator 
 *      
 * Dereferencing a Pointer 
 *      first we init the pointer with *
 *      then we dereference the pointer with * 
 * 
 * CONST 
 *      Pointers to const 
 *      const pointers 
 *      const pointers to const
 * 
 * Pitfalls of Pointers
 *      Uninitialized pointers are pointing to garbage 
 *          this could cause programs to crash 
 *      dangling pointers -> pointing to memeory that is no longer valid 
 *      not checking to see if NEW fails
 *      leaking memory
 *          forgetting to release allocated memeory
 *          if you lose your pointer to the storage allocated on the heap you have no way to get to that storage again 
 *          
 * L-value
 *      values that have names and are addressable
 *      modifiable if they are not constraints 
 *      Example: x = 100, x is an l-value but 100 cannot be an l-value 
 * 
 * R-value 
 *      non-addressable and non-assignable 
 *      a value that is not an l-value 
 *      r-values can be assigned to l-values 
 *      
 * L-value references 
 *      
 * 
 * 
 * 
 */

