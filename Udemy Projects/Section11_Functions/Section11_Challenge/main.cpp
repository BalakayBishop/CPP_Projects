#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_menu ();
void print_vector (const vector<int> &v);
void add_number (vector<int> &v);
void mean_of_vec (vector<int> &v);
void smallest_num (vector<int> &v);
void largest_num (vector<int> &v);
void quit ();
char getSelection ();


int main()
{
    vector<int> vec {};
    char selection {};
    
    do 
    {
        display_menu();
         
        selection = getSelection();
        
        switch (selection)
        {
            case 'P': 
                print_vector(vec);
                break;
            case 'A':
                add_number(vec);
                break;
            case 'M':
                mean_of_vec(vec);
                break;
            case 'S':
                smallest_num(vec);
                break;
            case 'L':
                largest_num(vec);
                break;
            case 'Q':
                quit();
                break;
            default:
                cout << "Unknown selection, please try again!" << endl;
                cout << endl;
                break;
        }
        
    } while (selection != 'Q');
    
    return 0;
}


void display_menu ()
{
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number to the list" << endl;
    cout << "M - Display the mean of the list" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char getSelection ()
{
    char selection {};
    cout << "\nEnter your choice: ";
    cin >> selection;
    
    return toupper(selection);
}

void print_vector (const vector<int> &v) // only const for print
{
    cout << "\n[ ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << endl;
}

void add_number (vector<int> &v)
{
    int number {0};
    cout << "Enter an integer to add to the list: ";
    cin >> number;
    v.push_back(number);
    cout << endl;
}

void mean_of_vec (vector<int> &vec)
{
    double total {0};
    double mean {0};
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
}

void smallest_num (vector<int> &vec)
{
    int smallest {0};
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
}

void largest_num (vector<int> &vec)
{
    int largest {0};
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
}

void quit ()
{
    cout << "Thank you!" << endl;
}