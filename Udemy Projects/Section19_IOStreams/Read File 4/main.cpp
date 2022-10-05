#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;

int main()
{
    ifstream in_file;
    
    // Windows
    in_file.open("poem.txt");
    
    if (!in_file) {
        cerr << "File not able to open" << endl;
        return 1;
    }
    
    char c {};
    // Read the sonnet one char at a time
    while (in_file.get(c))
    {
        cout << c;
    } 
    
    in_file.close();
    cout << endl;
    return 0;
}
