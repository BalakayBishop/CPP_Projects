#include <iostream>

using namespace std;

void func2 (int &x, int y, int z)
{
    x += y + z;
}

int func1 (int a, int b)
{
    int result {0};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main()
{
    int x {10};
    int y {20};
    int z {0};
    
    z = func1(x,y);
    cout << z << endl;
    
    
    cout << endl;
    return 0;
}
/* =================================================
 * How do function calls work?
 *      functions use the "function call stack"
 *      analogous to a stack of books
 *      LIFO - last in, first out
 *      push and pop
 *
 * Stack Frame or Activation Record
 *      a collection of info that represents a function
 *      each time a function is called we create a new activation record and push it on stack
 *      when it terminates we pop the activation and return
 *      
 * Stack is finite in size
 *      could result in Stack Overflow
 * 
 * Memory
 *      code area
 *      static variables
 *      stack
 *      heap or free store
 * 
 * What happens? How do these func calls work?
 *      main:
 *          push space for the return value
 *          push space for the params -> x and y
 *          push the return address -> to know where to come back to 
 *          transfer control to func1 (jmp)
 *      func1:
 *          push the address of the previous activation record 
 *          push any register values that will need to be restored before returning to caller
 *          perform the code in func1
 *          restore the register values
 *          restore the previous activation record (move the stack pointer)
 *          store any function result
 *          transfer control to the return address (jmp)
 *      main:
 *          pop the params
 *          pop the return value
 *      
 * 
 * =================================================
 */
