#include <iostream>
#include <cmath>

using namespace std;

const double PI {3.14159};

double calcAreaCircle (double);
double calcVolumeCylinder (double, double);
void areaCirlce ();
void volumeCylinder ();

int main()
{
    areaCirlce();
    volumeCylinder();
    
    return 0;
}


// BASIC MATH FUNCTION


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

//Functions must be declared and defined before main 
// * 
// * PROTOTYPES
// *      function prototypes 
// *      tells compiler all about the function w/out full definition
// *      also called forward delcaration 
// *    Example:
// *      int func_name(); = prototype
// *  
// *      int func_name() {body} 