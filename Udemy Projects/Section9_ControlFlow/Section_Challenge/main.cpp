#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {};
    double mean {0.0};
    int number {0};
    int smallest {0};
    int largest {0};
    int total {0};
    char selection {};
    
    do 
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number to the list" << endl;
        cout << "M - Display the mean of the list" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        switch (selection)
        {
            case 'p':
            case 'P':
            {
                if (vec.size() != 0)
                {
                    cout << "\n[ ";
                    for (auto i : vec)
                    {
                        cout << i << " ";
                    }
                    cout << "]" << endl;
                }
                else 
                {
                    cout << "[] - the list is empty" << endl;
                }
                cout << endl;
                break;
            }
            case 'a':
            case 'A':
            {
                cout << "Enter an integer to add to the list: ";
                cin >> number;
                vec.push_back(number);
                cout << number << " added" << endl;
                cout << endl;
                break;
            }
            case 'm':
            case 'M':
            {
                if (vec.size() != 0)
                {
                    for (auto i : vec)
                    {
                        total += i;
                    }
                    mean = static_cast<double> (total) / vec.size();
                    cout << "The mean is: " << mean << endl;
                }
                else if (vec.size() == 1)
                {
                    mean = vec.at(0);
                    cout << "The mean is " << mean << endl;
                }
                else 
                {
                    cout << "No mean, list is empty" << endl;
                }
                cout << endl;
                break;
            }
            case 's':
            case 'S':
            {
                if (vec.size() == 0)
                {
                    cout << "Unable, list is empty" << endl;
                }
                else
                {
                   smallest = vec.at(0);
                    for (auto i : vec)
                    {
                        if (i < smallest)
                        {
                            smallest = i;
                        }
                    }
                    cout << "The smallest number is: " << smallest << endl; 
                }
                cout << endl;
                break;
            }
            case 'l':
            case 'L':
            {
                if (vec.size() == 0)
                {
                    cout << "Unable, list is empty" << endl;
                }
                else 
                {
                   largest = vec.at(0);
                    for (auto i : vec)
                    {
                        if (i > largest)
                        {
                            largest = i;
                        }
                    }
                    cout << "The largest number is: " << largest << endl; 
                }
                cout << endl;
                break;
            }
            case 'q':
            case 'Q':
            {
                cout << "Goodbye!" << endl;
                cout << endl;
                break;
            }
            default:
                cout << "Unknown selection, please try again!" << endl;
                cout << endl;
                break;
        }
    } while (selection != 'q' and selection != 'Q');
    
    return 0;
}
