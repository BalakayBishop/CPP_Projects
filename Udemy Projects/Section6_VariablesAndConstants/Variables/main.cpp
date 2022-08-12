#include <iostream> 
#include <climits>

using namespace std;

// Global
int globalVariable {0};

// PRIMITIVE DATA TYPES 
/*
 * char or character 8 bits, 256 characters or char16_t, char32_t, and wchar_t
 * int or integer, signed and unsigned whole numbers, could represent short or long 
 * floating point type = float, double, and long double 
 *      float = 7 decimal points
 *      double = 15 decimal points
 *      long double = 19 decimal points 
 * boolean representing true and false
 *      zero is false and any non-zero is true 
 *      Also key words true and false 
 * 
 */
 
 // SIZEOF OPERATOR 
 /*
  * 
  * determines the size in bytes of a type or variable
  * sizeof(int) or sizeof(double)
  * 
  */

int main()
{
    // VariableType VariableName
    int age; // uninitialized 
    double rate;
    string name; 
    
    // Initialization 
    int type1 = 21; // C-like init
    int type2 (21); // Ctor init
    int type3 {21}; // C++11 init syntax
    
    // Area of a room in sq ft 
    int roomWidth {0}; 
    cout << "Enter the width of the room";
    cin >> roomWidth;
    
    int roomLength {0};
    cout << "Enter the height of the room";
    cin >> roomLength;
    
    cout << "The area of the room is: " << roomWidth * roomLength << " sq ft" << endl; 
    
    // PRIMITIVE CHAR TYPE
    char middleInitial {'J'};
    
    // PRIMITIVE INT TYPE
    unsigned short int examScore {55};
    int countriesRepresented {65};
    long peopleInFlorida {20'610'000};
    long long peopleOnEarth {7'600'000'000}; // this needs to be long long and not long 
    long long distanceToAlphaCentauri {9'461'000'000'000};
    
    // PRIMITIVE FLOAT TYPE 
    float carPayment {401.23};
    double pi {3.14159};
    long double largeAmount {2.7e120};
    
    // PRIMITIVE BOOLEAN TYPE 
    bool gameOver {false};
    
    // OVERFLOW EXAMPLE 
    short value1 {30'000};
    short value2 {1'000};
    //short product {value1 * value2}; // this will result in an overflow value error 
    
    //SIZEOF 
    sizeof(char);
    sizeof(int);
    
    
    return 0; 
}
/*
 * can contaim letters, number, and underscores
 * must begin with a letter or underscore 
 * Cannot use reserved keywords
 * cannot redeclare a name in the same scope
*/



// LEGAL NAMES 
/* 
 * Age
 * age
 * _age
 * My_age
 * your_age_in_2014
 * INT
 * Int
 * 
*/ 

// ILLEGAL NAMES
/* 
 * int 
 * $age
 * 2014_age
 * My age
 * Age+1
 * cout
 * return
 * 
*/