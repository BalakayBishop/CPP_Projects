#include <iostream>

using namespace std;

void my_swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x {100}, y {200};
    cout << "x = " << x << endl; // 100
    cout << "y = " << y << endl; // 200
    
    my_swap(&x, &y);
    
    cout << "x = " << x << endl; // 200
    cout << "y = " << y << endl; // 100
    
    cout << endl;
    return 0;
}
