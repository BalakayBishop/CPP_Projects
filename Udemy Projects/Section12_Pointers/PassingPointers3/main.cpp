#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display (vector<string> *v)
{
    for (auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
}

void display (int *array, int sent)
{
    while (*array != sent)
    {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    
    // --------------
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    
    return 0;
}
