#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    ifstream in_file;
    ofstream out_file;
    
    in_file.open("romeo.txt");
    if (!in_file)
    {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    
    out_file.open("romeo_copied.txt");
    if (!out_file)
    {
        cerr << "Error opening output file" << endl;
        return 1;
    }
    
    string line {};
    int line_num {1};
    
    while( getline(in_file, line) )
    {
        if(line == "")
        {
            out_file << line << endl;
        }
        else 
        {
            out_file << line_num << ". " << line << endl;
            line_num++;
        }
    }
    
    cout << "Program successful" << endl;
    
    in_file.close();
    out_file.close();
    cout << endl;
    return 0;
}
