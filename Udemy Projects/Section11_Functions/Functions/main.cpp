#include <iostream>
#include <cmath>    // for math func
#include <cstdlib>  // for rand
#include <ctime>    // for time

using namespace std;

// BASIC MATH FUNCTION
const double PI {3.14159};

double calcAreaCircle (double r)
{
    
    return PI * (pow(r, 2)); 
}

double calcVolumeCylinder (double r, double h)
{
    return PI * h * (pow(r, 2)); 
    // OR
    // return calcAreaCircle(r) * h;
}

void areaCirlce ()
{
    double radius {0}; 
    cout << "Enter the radius for the circle: ";
    cin >> radius; 
    
    cout << "The area of a circle with radius " << radius << " is: " << calcAreaCircle(radius) << endl;
}

void volumeCylinder ()
{
    double radius {0};
    double height {0};
    
    cout << "Enter the radius for the cylinder: ";
    cin >> radius; 
    
    cout << "Enter the height for the cylinder: ";
    cin >> height; 
    
    cout << "The volume of a cylinder with a radius of " << radius 
         << " and height of " << height << " is: " << calcVolumeCylinder(radius, height) << endl;
}


int main()
{
    // USING CMATH LIB FUNCTIONS 
    double num {0.0};
    double power {0.0}; 
    
    cout << "Enter a number (double): ";
    cin >> num;
    
    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    
    cout << "\nEnter a power to raise" << num << " to: ";
    cin >> power;
    
    cout << num << " raised to the power of " << power << " is " << pow(num, power) << endl;
    
    // USING RAND FUNCTION 
    int random {0};
    size_t count {10};
    int min {1};
    int max {6};
    
    cout << "RAND_MAX on system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // seeding rand num gen
    
    for (size_t i {0}; i < count; i++)
    {
        random = rand() % max + min; // number of 1-6 inclusive 
        cout << random << endl; 
    }
    
    // FUNCTION FOR AREA AND VOLUME
    areaCirlce();
    volumeCylinder();
    
    
    
    cout << endl;
    return 0;
}



/*
 * Defining functions
 *      name, param list, return type, body
 *      name
 *          same rules as variables, should be meaningful
 *      param list
 *          the variables passed into the function 
 *          types must be specified 
 *      return type 
 *          the type of data that is returned 
 *          could be void = no return 
 *      body 
 *          statements that are executed 
 * 
 * 
 * 
 *      
 */
