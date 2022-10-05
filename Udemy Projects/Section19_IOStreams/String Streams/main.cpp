#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int num {};
    double total {};
    string name {};
    
    string info {"Moe 100 1234.5"};
    
    istringstream iss {info};
    
    iss >> name >> num >> total;
    
    cout << setw(10) << left << name 
        << setw(5) << num 
        << setw(10) << total << endl;
        
    ostringstream oss {};
    oss << setw(10) << left << name 
        << setw(5) << num 
        << setw(10) << total << endl;

    cout << oss.str() << endl;
    
    // ----- Data Validation ----- 
    int value {};
    string entry {};
    bool done {false};
    
    do {
        cout << "Please enter an integer: ";
        cin >> entry;
        
        istringstream validator {entry};
        
        if (validator >> value)
            done = true;
        else 
            cout << "Sorry, that was not an integer" << endl;
        
        // This discards input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (!done);
    
    cout << "You entered: " << value << endl;
    
    return 0;
}
/*
 * String Stream
 *      allows us to read or write from strings in memory as we would files 
 *      useful for data validation 
 * 
 * sstream, isstream, osstream
 */
