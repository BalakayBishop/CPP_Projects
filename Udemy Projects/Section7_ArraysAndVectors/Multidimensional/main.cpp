#include <iostream>

using namespace std;

int main()
{
    // init multt-dim array
    // ElementType ArrayName [dim1] [dim2]; 
    // [row][column] 
    
    const int row {3};
    const int col {4}; 
    
    int movieRating [3][4]; // not init
    
    int movieRatingV2 [row][col]
    {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };
    
    return 0;
}
