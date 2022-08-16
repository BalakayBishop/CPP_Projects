#include <iostream>
#include <string>
#include <vector> 

using namespace std;

void passByValue1 (int);
void passByValue2 (string);
void passByValue3 (vector<string>);
void printVector  (vector<string>);

int main()
{
    int num {10};
    int anothaNum {20};
    
    cout << "num before call pbv1: " << num << endl;
    passByValue1(num);
    cout << "num after call pbv1: " << num << endl;
    
    string name {"Blake"};
    cout << "name before function call: " << name << endl;
    passByValue2(name);
    cout << "name after function call: " << name << endl;
    
    vector<string> stooges {"Larry", "Curly", "Moe"};
    cout << "Stooges before function call: ";
    printVector(stooges);
    
    passByValue3(stooges);
    cout << "Stooges after function call: ";
    printVector(stooges);
    
    
    return 0;
}

void passByValue1 (int num)
{
    num = 1'000;
}

void passByValue2 (string s)
{
    s = "Changed";
}

void passByValue3 (vector<string> v)
{
    v.clear();
}

void printVector  (vector<string> v)
{
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}

//PASSED BY VALUE 
// *      passes a copy of the data to the function
// *      whatever changes you make to the param the original data will NOT be changed 
// *      making a copy has pros and cons 
// *      cons: can take up memory 
// * 
// * Formal Param:
// *      the params defined in the function header 
// * Actual Param:
// *      the params used in the function call, the args
// * 
// * Actual Params are passed by value (copied) into the Formal Params
// * 
// * RETURN statement
// *      return can occur anywhere in the body
// *      return will immediately exit the function
// *      there can be multiple returns, best practice is to only have one