#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "The first element in V1: " << vector1.at(0) << endl;
    cout << "The second element in V1: " << vector1.at(1) << endl;
    cout << "The size of V1: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "The first element in V2: " << vector2.at(0) << endl;
    cout << "The second element in V2: " << vector2.at(1) << endl;
    cout << "The size of V2: " << vector2.size() << endl;
    
    vector <vector<int>> vector_2D; 
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;
    
    vector1.at(0) = 1'000; // this will not change the value in the 2D vector because it is a copy of the old values
    
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;
    
    cout << "The first element in V1: " << vector1.at(0) << endl;
    cout << "The second element in V1: " << vector1.at(1) << endl;
    
    return 0;
}
