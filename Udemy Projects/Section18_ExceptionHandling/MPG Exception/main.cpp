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
    
    
    try 
    {
        if (gallons == 0)
        {
            throw 0;
        }
        mpg = static_cast<double> (miles) / gallons;
        cout << "Resut: " << mpg << endl;
    }
    catch (int &ex) {cerr << "Sorry, can't divide by 0" << endl;}
    
    return 0;
}
