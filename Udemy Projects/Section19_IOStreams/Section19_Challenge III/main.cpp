#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;
using std::string;

bool find_substr (const string &word, const string &substring)
{
    size_t found = substring.find(word);
    if (found == string::npos)
        return false;
    else 
        return true;
}

int main()
{
    ifstream in_file;
    string word {};
    string substring {};
    int count {0};
    int word_count {0};
    
    in_file.open("romeo.txt");
    
    cout << "Please enter the substring to search for: ";
    cin >> substring;
    
    if (!in_file)
    {
        cerr << "Error opening file" << endl;
        return 1;
    }
    
    while (!in_file.eof())
    {
        word_count++;
        in_file >> word;
        if (find_substr(word, substring))
        {
            count++;
        }
    }
    
    cout << word_count << " words were searched..." << endl;
    cout << "Your word was found: " << count << " times" << endl;
    
    
    return 0;
}
/*
 * Searching for a word inside the text of Romeo and Juliet
 * 
 * Ask the user for a word and search the entire play, word by word
 * 
 * Had to refernce the solution
 *      was no aware of the string method .find()
 */
