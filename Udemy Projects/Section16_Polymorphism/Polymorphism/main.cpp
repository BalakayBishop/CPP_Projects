

int main()
{
    
    return 0;
}
/*
 * Polymorphism
 *      Fundamental to OOP
 *      Compile-time, early-binding, static-binding
 *          before the program executes
 *          function and operator overloading
 *      Run-time, late-binding, and dynamic-binding
 *          function overriding
 * 
 * 
 * Runtime Polymorphism
 *      
 * Allows use to program more abstractly 
 * 
 * Run-time Poly
 *      by using virtual functions in the Base class 
 *      since the function is virtual it will be binded at run-time and not compile-time
 *      this allows C++ to determine which type of obj function is being called 
 *      
 * Using a Base class pointer 
 *      we could make 4 Account pointers that allocate different types of objects pointed to 
 *      Example: Account *a = new Savings_Account();
 *      this would be powerful to add these pointers to a collection and use a loop 
 * 
 * 
 */
