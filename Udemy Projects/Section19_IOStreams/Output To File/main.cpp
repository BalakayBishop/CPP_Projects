#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::ofstream;

int main()
{
    ofstream out_file {"output_file.txt"};
    if (!out_file)
    {
        cerr << "Error creating file" << endl;
        return 1;
    }
    
    string line {};
    
    cout << "Enter something to write: ";
    getline(cin, line);
    out_file << line << endl;
    
    out_file.close();
    cout << endl;
    return 0;
}
/*
 * must include fstream
 * can use either fstream or ofstream
 * 
 * we must close the file after we are finished
 * 
 * output files will be created if they do not exists
 *      we must be sure the path exists
 *      we must make sure that if we write out that it will overwrite
 *      if not we must append
 * 
 * ios::trunc to truncate the file when opening (default)
 * ios::app to append the file instread of truncating
 * ios::ate to seek the end of the file when opening
 * 
 * we can use the input stream from the in_file and getline 
 * to then copy it to the out_file 
 * 
 * 
 */
