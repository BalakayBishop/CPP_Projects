#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::ofstream;
using std::ifstream;

int main()
{
    ifstream in_file {"poem.txt"};
    ofstream out_file {"poem_output_file.txt"};
    
    if (!in_file)
    {
        cerr << "Error opening file" << endl;
        return 1;
    }
    if (!out_file)
    {
        cerr << "Error opening output file" << endl;
        return 1;
    }
    
    string line{};
    while (getline(in_file, line))
    {
        out_file << line << endl;
    }
    
    cout << "File copied" << endl;
    
    in_file.close();
    out_file.close();
    return 0;
}
