#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declaration
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // init 5 chars
    vector <int> testScores (10); // init 10 ints to 0
    vector <double> hiTemps (365, 80.0); // init 365 doubels to 80.0
    
    // Accessing elements 
    // vector name [element index]; 
    // OR 
    // access the .at method
    cout << "First element: " << testScores.at(0) << endl;
    
    // function push_back adds element at the end
    testScores.push_back(80);
    
    // Array Syntax 
    cout << "Array Syntax:" << endl;
    cout << testScores[0] << endl; 
    
    // Vector Syntax 
    cout << "Vector Syntax:" << endl;
    cout << testScores.at(0) << endl;
    cout << "There are " << testScores.size() << " in the test score vector" << endl; 
    
    // The dynamic nature of Vectors 
    int scoreToAdd {0}; 
    cin >> scoreToAdd;
    
    testScores.push_back(scoreToAdd); 
    
    cout << "Enter another test score: "; 
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);
    
    cout << "This will cause an exception!" << testScores.at(15);
    
    // 2D Vector, a vector of vectors
    vector <vector<int>> MD_Vector
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    
    return 0;
}
/*
 * Vectors are dynamic arrays
 * container in the C++ STL 
 * an array that can grow and shrink in size at execution time
 * provides similar semantic and syntax as arrays
 * very efficient 
 * provides bounds checking 
 * lots of functions
 * 
 * if you try to access an element that is out of bounds the compiler will throw an exception
 * if you only have 2 elements and you try to .at(5) it will through std::out_of_range
 * 
*/