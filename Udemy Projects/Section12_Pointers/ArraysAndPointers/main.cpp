#include <iostream>
#include <array>

using namespace std;

int main()
{
    int scores [] {100, 95, 98};
    
    cout << "Values of scores: " << scores << endl; // mem location
    
    int *score_ptr{scores};
    cout << "Values of score_ptr: " << score_ptr << endl; // mem location
    
    cout << "-----Array Subscript------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "-----Pointer Notation-----" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    cout << "-----Pointer Offset-----" << endl;
    cout << *score_ptr << endl;
    cout << (*score_ptr + 1) << endl;
    cout << (*score_ptr + 2) << endl;
    
    cout << "-----Array Offset-----" << endl;
    cout << *scores << endl;
    cout << (*scores + 1) << endl;
    cout << (*scores + 2) << endl;
    
    return 0;
}
/*
 * The value of an array name is the address of the first element of the array in memory
 * We can dereference an array by *array_name and we will get the first element 
 * We can subscript a pointer to an array the same way that we can an array
 *      int scores [] {100, 95, 89}; 
 *      int *score_ptr {scores};
 *      scores_ptr[0]; = 0x61ff10
 *      scores_ptr[1]; = 0x61ff14
 *      difference of 4 bytes (the pointer size)
 * We can access array elements with array or pointer notation 
 * 
 * 
 * 
 */
