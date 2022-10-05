#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;

int main()
{
    ifstream in_file;
    string line {};
    
    // Windows
    in_file.open("poem.txt");
    
    if (!in_file) {
        cerr << "File not able to open" << endl;
        return 1;
    }
    
    while (getline(in_file, line))
    {
        cout << line << endl;
    } 
    
    in_file.close();
    cout << endl;
    return 0;
}
