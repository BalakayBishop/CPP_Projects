#include <iostream>

using namespace std;

int main()
{
    // declaring and initializing 
    // ArrayType ArrayName [constant number of elements (size)] 
    
    int testScores [5] {0}; // not init
    
    int highScorePerLevel [10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // init with 10 values
    // OR 
    int highScorePerLevel2 [10] {3, 5}; // only 2 values init, the rest will be zero 
    
    const int daysInYear {365};
    double array[daysInYear] {0.0};
    
    // Indexing 
    // arrayName [element index];
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "/nThe first vowel is: " << vowels [0] << endl; 
    cout << "The last vowel is: " << vowels [4] << endl;
    
    //cin >> vowels [5]; // this would crash the array
    
    double hiTemps [] {90.1, 89.8, 77.5, 81.6};
    cout << "/nThe first high temp is: " << hiTemps[0] << endl;
    
    hiTemps[0] = 100.7;
    
    cout << "/nThe first high temp is now: " << hiTemps[0] << endl;
    
    // Print the address of the array in memory 
    cout << "Hexidecimal location in memory of the array: " << hiTemps << endl;
    
    
    return 0;
}

/*
 * an array is a compound data type or a structured data type 
 * it is a collection of elements
 * All elements are of the same type 
 * Arrays are fixed in size, if we init with size of 100 it will not change 
 * Contiguous in memory 
 * C++ arrays are not bounds checked 
 * 
 * Why do we need arrays?
 *      What if we had 100 or 10'000 test scores to keep track of?
 *      Are we going to give each score its own variable?
 * 
 * IN C++ the name of the array represents the location of the first element in the array [0]
 * the index represents the offset from the beginning of the array 
 * C++ simply performs a calculation 
 * REMEMBER! NO BOUNDS CHECKING
 * 
 * ALWAYS INIT TO 0
 * 
 * Cannot have a double as the array size initialization 
 * 
 * Array name is a hexidecimal location in memory 
 * 
 */
