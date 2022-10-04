#include <iostream>

using namespace std;

int main()
{
    int miles {0};
    int gallons {0};
    double mpg {0};
    
    cout << "Enter miles: ";
    cin >> miles;
    
    cout << "Enter gallons: ";
    cin >> gallons;
    
    if (gallons != 0)
    {
         mpg = static_cast<double> (miles) / gallons;
         cout << "Resut: " << mpg << endl;
    }
    else 
    {
        cerr << "Error, dividing by 0" << endl;
    }
    
    
    
    
    return 0;
}
/*
 * int / 0 = crash
 * double / 0 = inf
 * 
 */ 
