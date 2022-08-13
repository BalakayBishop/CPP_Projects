#include <iostream>
#include <string>

using namespace std;
/*
 * Steps to complete the proces:
 * 
 * 1. Asking for user input of chars or string
 * 2. Set the length as the array iteration length
 * 
 * 
 * 
 * 
 */

int main()
{
    string str {};
    int tot {1};
    
    cout << "Please enter your string: ";
    getline(cin, str);
    
    size_t rows {str.length()};
    char c {str.at(0)};
    
    for (size_t i {1}; i <= rows; i++)
    {
        for (size_t k {1}; k <= rows - i; k++)
        {
            cout << " ";
        }
        
        for (size_t j {0}; j <= (tot / 2); j++)
        {
            cout << c++;
        }
        
        c -= 2;
        
        for (size_t m {0}; m < (tot/2); m++)
        {
            cout << c--;
        }
        
        tot += 2;
        c = str.at(0);
        cout << endl;
    }
    
    
    return 0;
}
/* PROVIDED ANSWER
std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
*/

