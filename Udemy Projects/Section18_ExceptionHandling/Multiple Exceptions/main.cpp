#include <iostream>
#include <string>

using namespace std;
using std::string;

double calc_mpg(int miles, int gallons) 
{
    if (gallons == 0)
    {
        throw 0;
    }
    if (miles < 0 or gallons < 0)
    {
        throw string {"Negative value error"};
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
    catch (string &ex) {cerr << ex << endl;}
    
    // catch all handler
    catch (...) {}
    
    return 0;
}
/*
 * Throwing multiple excpetions from a function
 *      write two catch blocks
 *      
 * Catch All Handler
 *      place as last catch
 *      using ... as param 
 *      
 */
