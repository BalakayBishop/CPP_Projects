#include <iostream>
#include <array>

using namespace std;

int *apply_all(const int *const ptr_arr1, size_t size1, const int *const ptr_arr2, size_t size2)
// added const to array param to prevent unwanted changes 
{
    int *new_arr {nullptr};
    size_t size {size1 * size2};
    new_arr = new int [size];
    int x {0};
    // array 2
    for (size_t i {0}; i < size2; i++)
    {
        for (size_t j {0}; j < size1; j++)
        {
            new_arr[x] = ptr_arr2[i] * ptr_arr1[j];
            x++;
        }
    }
    
    return new_arr;
}

void print(const int *const ptr_arr, size_t size) // add const to the arr param to prevent changes
{
    for (size_t i {0}; i < size; i++)
    {
        cout << ptr_arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, 5);
    
    cout << "Array 2: ";
    print(array2, 3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(results, 15);
    
    delete [] results; // added to free allocated memory
    
    cout << endl;
    return 0;
}
