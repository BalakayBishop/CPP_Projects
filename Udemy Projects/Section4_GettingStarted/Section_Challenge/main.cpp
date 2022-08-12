#include <iostream> 

int main()
{
    int favoriteNumber;

    std :: cout << "Please enter your favorite number between 1 - 100: "; 
    std :: cin >> favoriteNumber; 
    std :: cout << "Amazing, that's my favorite number too!" << std :: endl;
    std :: cout << "No really, " << favoriteNumber << " is my favorite number too!" << std :: endl;
    
    return 0; 
}
