#include <iostream>
#include <fstream>
#include <string>

using namespace std;

using std::ifstream;

int main()
{
    ifstream in_file{"../test.txt"};
    string file_name {};
    string line {};
    
    if (in_file.is_open())
        cout << "File opne" << endl;
    else 
        cout << "Failed to open" << endl;
    
    return 0;
}
/*
 * Input files 
 *      input files: fstream and ifstream
 *      alwasy include fstream header
 *      declare fstream or ifstream
 *      make sure the file name and path are correct
 * 
 * std::fstream in_file {../, the mode being used}; 
 *      example: ios::in for input mode
 *      ios::in | ios::binary for input and binary 
 * 
 * std::ifstream class for in_file
 *      ifstream is used for input only
 * 
 * common use case
 *      isftream in_file;
 *      string file_name;
 *      
 *      in_file.open(file_name);
 * 
 * checking is successful
 *      if (in_file.is_open()) {}
 * 
 * testing another way
 *      if (in_file) to test the object
 * 
 * closing the file
 *      in_file.close();
 * 
 * we can use the >> to extract from file to data
 * 
 * we can also use the getline(in_file, line)
 * 
 * looping the getline
 * 
 * 
 * 
 */
