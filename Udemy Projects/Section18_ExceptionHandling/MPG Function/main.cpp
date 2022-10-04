#include <iostream>

using namespace std;

double calc_mpg(int miles, int gallons) 
{
    if (gallons == 0)
    {
        throw 0;
    }
    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles {0};
    int gallons {0};
    double mpg {0};
    
    cout << "Enter miles: ";
    cin >> miles;
    
    cout << "Enter gallons: ";
    cin >> gallons;
    
    try {
        mpg = calc_mpg(miles, gallons);
        cout << "Resut: " << mpg << endl;
    }
    catch (int &ex) {cerr << "Error, cannot divide by 0" << endl;}
    
    return 0;
}
/*
 * Throwing an exception from a function 
 * 
 * C++ will unwind the stack to find the handler
 * 
 * 
 */
