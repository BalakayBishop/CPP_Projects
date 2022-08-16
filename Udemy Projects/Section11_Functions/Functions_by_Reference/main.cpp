#include <iostream>
#include <string>
#include <vector>

using namespace std;

void passByRef1 (int &num);
void passByRef2 (string &s);
void passByRef3 (vector<string> &v);
void printVector  (const vector<string> &v);

int main()
{
    int num {10};
    int anothaNum {20};
    
    cout << "num before function call pbr1: " << num << endl;
    passByRef1(num);
    cout << "num after function call pbr1: " << num << endl;
    
    string name {"Blake"};
    cout << "name before function call: " << name << endl;
    passByRef2(name);
    cout << "name after function call: " << name << endl;
    
    vector<string> stooges {"Larry", "Curly", "Moe"};
    cout << "Stooges before function call: ";
    printVector(stooges);
    
    passByRef3(stooges);
    cout << "Stooges after function call: ";
    printVector(stooges);
    
    
    return 0;
}

void passByRef1 (int &num)
{
    num = 1'000;
}

void passByRef2 (string &s)
{
    s = "Changed";
}

void passByRef3 (vector<string> &v)
{
    v.clear();
}

void printVector (const vector<string> &v)
{
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}
/* =======================================================================
 * Pass By Reference 
 *      sometime we would like to change the actual parameter from within the function body
 *      in order to do this we need the location or address of the actual parameter in memory
 *      we need to use the & to do this
 * 
 * Example
 *      vod scale_number (int &num);
 * 
 * Pass By Reference for a vector/array type function because it can save memory space
 *      but there is a problem because we could accidentily be modifying the array/vector
 * 
 * We can instead use a CONST REFERENCE or const & 
 * 
 * 
 * 
 * ======================================================================
 */
