#include <iostream> 

int main()
{
    // syntax errors 
    std :: cout << "My template << std :: endl; // no closing quote
    
    // or 
    std :: cout << "Hello World!" << std :: endll; // wrong spelling of endl 
    
    // or 
    return 0 // no semi colon 
    
    // or 
    return; // mo int to return 
    
    
    // Semantic error 
    return "Joe"; // returning a string instead of an int 
    
    // or 
    std::cout << ("Hello World" / 125) << std::endl; // dividing a string by a an int
}
