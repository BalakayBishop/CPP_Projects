#include <iostream>
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;

int main()
{
    ifstream in_file;
    
    // Windows
    in_file.open("text.txt");
    
    if (!in_file) {
        cerr << "File not able to open" << endl;
        return 1;
    }
     
    string line {};
    int num {};
    double total {};
    
    in_file >> line >> num >> total;
    
    cout << line << endl;
    cout << num << endl;
    cout << total << endl;
    
    in_file.close();
    
    cout << endl;
    return 0;
}
