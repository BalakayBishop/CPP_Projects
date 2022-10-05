#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int num {1234};
    double num2 {1234.5678};
    string hello {"Hello"};
    
    cout << "----- Default -----" << endl;
    cout << num << num2 << hello << endl;
    
    cout << "----- Default - one per line -----" << endl;
    cout << num << endl;
    cout << num2 << endl;
    cout << hello << endl;
    
    cout << "----- with of 10 for num -----" << endl;
    cout << setw(10) << num 
         << num2 << hello << endl;
         
    cout << "----- with of 10 for num and num2 -----" << endl;
    cout << setw(10) << num 
         << setw(10) << num2 
         << hello << endl;
         
    cout << "----- with of 10 for everything -----" << endl;
    cout << setw(10) << num 
         << setw(10) << num2 
         << setw(10) << hello << endl;
         
    cout << "----- with of 10 for everything justified left -----" << endl;
    cout << setw(10) << left << num 
         << setw(10) << left << num2 
         << setw(10) << left << hello << endl;
         
     // Using set fill
    cout << setfill('-');
    cout << setw(10) << left << num 
         << setw(10) << left << num2 
         << setw(10) << left << hello << endl;
      
    cout << setfill('*') << setw(10) << left << num 
         << setfill('#') << setw(10) << left << num2 
         << setfill('-') << setw(10) << left << hello << endl;
         
    
    cout << endl;
    return 0;
}
/*
 * Field width, align, and fill
 *      setw - not set by default
 *      left - when no field width, right when using field width
 *      fill
 * 
 * setw(int)
 *      this will set the field width 
 *      only to the next data item
 *      if we want all elements to have this applied we would need to specify setw for all
 *      
 * setfill 
 *      only works with setw 
 *      specify a char to fill in the empty space
 *      
 * 
 */
