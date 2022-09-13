#include <iostream>

using namespace std;

int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl; // memory location of the pointer in heap
    delete int_ptr; // free up the storage
    
    // -----------------------
    size_t size{0};
    double *temp_ptr {nullptr};
    cout << "How many temperatures? ";
    cin >> size;
    
    temp_ptr = new double[size]; // this many double allocated 
    cout << temp_ptr << endl; 
    delete [] temp_ptr;
    
    cout << endl;
    return 0;
}
