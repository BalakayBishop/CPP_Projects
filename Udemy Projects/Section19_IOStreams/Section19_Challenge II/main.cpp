#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
using std::ifstream;

int main()
{
    ifstream in_file;
    vector<char> answer_key {'A', 'B', 'C', 'D', 'E'};
    int num_students {0};
    int num_scores {0};
    double avg {0};
    string name {};
    string ans {};
    
    in_file.open("responses.txt");
    
    if (!in_file) {
        cerr << "File not able to open" << endl;
        return 1;
    }
    
    cout << setw(10) << left << "Student" 
         << setw(10) << right << "Score" << endl;
    cout << setw(20) << setfill('-') << "";
    cout << setw(20) << setfill(' ') << "" << endl;
    
    while(!in_file.eof())
    {
        int correct {0};
        num_students++;
        in_file >> name >> ans;
        for (size_t i {0}; i < ans.size(); i++)
        {
            if (ans.at(i) == answer_key.at(i))
            {
                correct++;
            }
        }
        
        num_scores += correct;
        
        cout << setw(10) << left << name
            << setw(10) << right << correct << endl;
    }
    
    
    cout << setw(20) << setfill('-') << "";
    cout << setw(20) << setfill(' ') << "" << endl;
    cout << setprecision(2) << fixed;
    
    if (num_students != 0)
    {
        avg = (static_cast<double>(num_scores)/num_students);
    }
    cout << setw(10) << left << "Average" 
        << setw(10) << right << avg << endl; 
    
    return 0;
}
/*
 * Instructors solution included using functions to:
 *      process the answers vs the key
 *      print the student/score
 *      print the avg footer
 * 
 * 
 * 
 */ 
