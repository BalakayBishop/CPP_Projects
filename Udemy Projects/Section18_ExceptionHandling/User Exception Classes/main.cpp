#include <iostream>

using namespace std;

class DivideByZero 
{
    
};

class NegativeValue 
{
    
};

double calc_mpg (int miles, int gallons) 
{
    if (gallons == 0)
        throw DivideByZero();
    if (miles < 0 or gallons < 0)
        throw NegativeValue();
        
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
    
    try 
    {
        mpg = calc_mpg(miles, gallons);
        cout << "Resut: " << mpg << endl;
    }
    
    catch (const DivideByZero &ex) 
    {
        cerr << "Error, cannot divide by 0" << endl;
    }
    catch (const NegativeValue &ex)
    {
        cerr << "Error, cannot have a negative value" << endl;
    }
    
    cout << "Bye!" << endl;
    
    cout << endl;
    return 0;
}
/*
 * Best Practice
 *      throw an object not primitive type
 *      throw an obj by value 
 *      catch an obj by ref or const ref
 * 
 * Just using the C++ default Ctor and Dtor for the object being thrown
 */
