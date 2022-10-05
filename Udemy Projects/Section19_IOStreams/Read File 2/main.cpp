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
    int num {};
    double total {};
    
    // Windows
    in_file.open("text.txt");
    
    if (!in_file) {
        cerr << "File not able to open" << endl;
        return 1;
    }
    
    while (!in_file.eof())
    {
        in_file >> line >> num >> total;
        cout << setw(10) << left << line 
             << setw(10) << num
             << setw(10) << total
             << endl;
    }
    
    // OR 
    
    while (in_file >> line >> num >> total)
    {
        cout << setw(10) << left << line 
             << setw(10) << num
             << setw(10) << total
             << endl;
    }
    
    in_file.close();
    cout << endl;
    return 0;
}
