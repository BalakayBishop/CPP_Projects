#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
    cout << "----- Defaults -----" << endl;
    cout << num1 << endl; // == 1.23457e+008
    cout << num2 << endl; // == 1234.57
    cout << num3 << endl; // == 1234
    
    cout << setprecision(2); // set 2 sig fig
    cout << num1 << endl; // == 1.2e+008
    cout << num2 << endl; // == 1.2e+003
    cout << num3 << endl; // == 1.2e+003
    
    cout << setprecision(5); // set 5 sig fig
    cout << num1 << endl; // == 1.2346e+008
    cout << num2 << endl; // == 1234.6
    cout << num3 << endl; // == 1234
    
    cout << setprecision(9); // set 9 sig fig
    cout << num1 << endl; // == 1234567890
    cout << num2 << endl; // == 1234.5678
    cout << num3 << endl; // == 1234
    
    cout << setprecision(3) << fixed; // set 3 sig fig after decimal
    cout << num1 << endl; // == 123456789.988
    cout << num2 << endl; // == 1234.568
    cout << num3 << endl; // == 1234.000
    
    cout << setprecision(3) << scientific; // set 3 sig fig and scientific
    cout << num1 << endl; // == 1.235e+008
    cout << num2 << endl; // == 1.235e+003
    cout << num3 << endl; // == 1.235e+003
    
    cout << setprecision(3) << scientific << uppercase; // set 3 sig fig and scientific w/ E
    cout << num1 << endl; // == 1.235E+008
    cout << num2 << endl; // == 1.235E+003
    cout << num3 << endl; // == 1.235E+003
    
    cout << setprecision(3) << fixed << showpos; // set 3 sig fig after decimal
    cout << num1 << endl; // == +123456789.988
    cout << num2 << endl; // == +1234.568
    cout << num3 << endl; // == +1234.000
    
    // set defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);
    
    cout << setprecision(10) << showpoint; // set 10 sig fig and show 0's
    cout << num1 << endl; // == 1234567890.0
    cout << num2 << endl; // == 1234.567800
    cout << num3 << endl; // == 1234.000000
    
    // setting everything back to default
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6) << showpoint; 
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    
    cout << "----- Back to Default -----" << endl;
    cout << num1 << endl; // == 1.23457e+008
    cout << num2 << endl; // == 1234.57
    cout << num3 << endl; // == 1234
    
    
    return 0;
}
/*
 * Floating Point Manipulation
 *      setprecision - default to 6 digits
 *      fixed - amount of digits after the decimal
 *      noshowpoint, nouppercase, noshowpos
 *      showpoint- to show trailing 0's to the precision
 * 
 * 
 */
