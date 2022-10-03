#include <iostream>

using namespace std;

int main()
{
    
    
    return 0;
}
/*
 * Smart Pointers
 *      Issues with raw pointers
 *      Unique pointers (unique_ptr)
 *      Shared pointers (shared_ptr)
 *      Weak pointers   (weak_ptr)
 *      Concept of RAII
 * 
 * Writing now new or delete keywords and letting C++ determine memory management
 * 
 * Issues with Raw Pointers
 *      Flexibility and complexity
 *      Serious problems - uninitialized pointers, memory leaks, dangling pointers, not exeption safe 
 *      Ownership? who owns the pointer, when should a pointer be deleted?
 * 
 * What is a Smart Pointer
 *      they are objects 
 *      implemented templated classes
 *      can only pointed to heap allocated mem
 *      adhere to RAII principles
 *      Auto ptr has been deprecated 
 * 
 * include memory 
 * implemented as class templates 
 * 
 * They are wrapper classes around a raw pointer
 * 
 * They provide deref, member selection, ptr arithmethic
 * 
 * Syntax:
 *      std:smart_ptr<Some_Class> ptr = ...
 *      ptr->method()
 *      cout << (*ptr) << endl;
 * 
 * RAII
 *      Resource Aquisition Is Initialization
 *      allocated on the stack
 *      RA - open a file, allocate mem, aquire a lock
 *      II - the resource is aquired in a ctor
 *      Resource relinquish - close the file, deallocate the memroy, release the lock
 * 
 */
