#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

int main()
{
    // FOR loop
    // printing 1-10, incrementing 
    for (int i = 1; i < 11; i++)
    {
        cout << i << endl;
    }
    
    // printing 10-1, decrementing
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    
    // couting by 10
    for (int i = 10; i < 101; i += 10)
    {
        cout << i << endl;
    }
    
    // Comma operator 
    for (int i = 1, j = 5; i <= 5; i++, j++)
    {
        cout << i << " + " << j << " = " << (i + j) << endl;
    }
    
    // printing 10 numbers per line 
    for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
    
    // printing 10 numbers per line using conditional op.
    for (int i = 0; i < 100; i++)
    {
        cout << i << ( (i % 10 == 0) ? "\n" : " ");
    }
    
    // iterating through a vector 
    vector<int> nums {10,20,30,40,50};
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    // a warning for comparing int vs. unsigned, could use unsigned i instead of int i
    
    // RANGE-BASED FOR loop
    int scores[] {10,20,30};
    
    for (auto score : scores)
    {
        cout << score << endl;
    }
    
    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double averageTemp {0};
    double sum {0}; 
    
    for (auto temp : temperatures)
    {
        sum += temp;
    }
    
    if (temperatures.size() != 0)
    {
        averageTemp = sum / temperatures.size(); 
    }
    
    cout << fixed << setprecision(2); 
    cout << "Average temperature is " << averageTemp << endl; 
    
    // init list inside loop 
    for (auto val : {1,2,3,4,5})
    {
        cout << val << endl; 
    }
    
    // iterating through C-style string
    for (auto c : "Blake")
    {
        cout << c; 
    }
    
    // WHILE loop
    int num {};
    cout << "Enter a postivie integer - start the countdown: ";
    cin >> num;
    
    while (num > 0)
    {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl; 
    
    // counting up
    cout << "Enter a positive integer to count up to: ";
    cin >> num;
    
    int i {1};
    while (num >= i)
    {
        cout << i << endl;
        i++;
    }
    
    // Input validation 
    int number {0};
    
    cout << "Please enter an integer less than 100: ";
    cin >> number;
    
    while (num >= 100)
    {
        cout << "Please enter an integer less than 100: ";
        cin >> number; 
    }
    
    cout << "Thanks" << endl; 
    
    // Checking bounds 
    bool done {false};
    
    while (!done)
    {
        cout << "Enter an integer between 1 and 5";
        cin >> number;
        
        if (number <= 1 or number >= 5)
        {
            cout << "Out of range, try again" << endl;
        }
        else 
        {
            cout << "Thanks!" << endl;
            done = true; 
        }
    }
    
    // DO-WHILE 
    // input validation
    // int number{};
    do {
        cout << "Enter am integer between 1 and 5: ";
        cin >> number;
    } while (number <= 1 or number >= 5);
    
    // Example 1: menu system
    char selection {};
    do {
        cout << "\n------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do somehing else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\n Enter your selction: ";
        cin >> selection; 
        
        if (selection == '1')
        {
            cout << "Doing this" << endl;
        }
        else if (selection == '2')
        {
            cout << "Doing that" << endl;
        }
        else if (selection == '3')
        {
            cout << "Doing something else" << endl;
        }
        else if (selection == 'q' or selection == 'Q')
        {
            cout << "Goodbye!" << endl;
        }
        else 
        {
            cout << "Unknown option, try again." << endl;
        }
        
    } while (selection != 'q' and selection != 'Q');
    
    // CONTINUE and BREAK 
    vector<int> values {1,2,-1,3,-1,-99,7,8,10};
    
    for (auto value : values)
    {
        if (value == -99)
        {
            break;  //this will break out of the loop
        }
        else if (value == -1)
        {
            continue;  //this will skip the -1 and start next iteration 
        }
        else 
        {
            cout << value << endl; 
        }
    }
    
    // INFINITE loop
    // infinte for loop
    for ( ; ; )
    {
        
    }
    
    // infinte while 
    while (true) {}
        
    // infinte do while
    do 
    {
        
    } while (true); 
    
    // Example 
    while (true)
    {
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;
        
        if (again == 'N' or again == 'n')
        {
            break;
        }
    }

    
    // NESTED loops
    // Example 1: Multiplication Table
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << (i * j) << " ";
        }
        cout << endl;
    }
    
    // Example 2: 2D vector 
    vector<vector<int>> vector_2D 
    {
        {1,2,3},
        {10,20,30},
        {100, 200, 300}
    };
    
    for (auto vec : vector_2D)
    {
        for (auto val : vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    
    // Example 3: Histogram
    int numItems {0};
    vector<int> data {};
    cout << "How many data items do you have? ";
    cin >> numItems;
    
    for (int i = 1; i <= numItems; i++)
    {
        int dataItem {0};
        cout << "Please enter data item " << i << ": ";
        cin >> dataItem;
        
        data.push_back(dataItem);
    }
    
    // Display
    cout << "\nDisplaying Histogram" << endl;
    for (auto val : data)
    {
        for (int i = 1; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout << "*";
            }
            else 
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    
    cout << endl;
    
    
    return 0;
}
/*
 * Loops, iteration, or repetition 
 * Allows the execution of a statement repeatedly 
 * 
 * FOR loop
 *      iterate a specific number of times 
 *      syntax: for (initialaization; condition; increment) { statement; }
 *      variable delcared inside the loop is only visible in the scope of the loop 
 *      Comma operator
 *          for (i {1}, j {5}; i <= 5; ++i, ++j) 
 *      Endless loop
 *          for ( ; ; ) { cout << "endless loop";
 * 
 * RANGE-BASED FOR
 *      one iteration for each element in a range or collection
 *      syntax: for (var_type var_name : sequence) { statement; } 
 *      example:
 *          int scores []
 *          for (int score : scores) { cout << score << endl; }
 *      we can also use the keyword auto instead of the var_type to determine the data type 
 *      can provide the collection inside the loop
 *      can iterate over a string 
 * 
 * WHILE
 *      iterate while a condition remains true
 *      stops when the condition becomes false
 *      checks the condition at the beginning of every iteration
 *      syntax: while (bool expr) {statement;}
 * 
 * DO-WHILE
 *      same as a while loop BUT it checks the condition at the end of the iteration
 *      syntax: do {statement;} while (cond expr;)
 *      garaunteed at least one iteration 
 * 
 * CONTINUE and BREAK 
 *      continue: no further statements in body are executed, control immediately goes to beginning for next iteration
 *      break: no further statements in body are executed, loop is terminated, control goes outside of loop to next statement
 * 
 * INFINITE or ENDLESS loop
 *      loop whose condition expression always evaluate to true 
 *      usually unintended or an error 
 *      an infinte loop could be used and a break statement placed to break out
 *      Examples: embedded systems, OS
 * 
 * NESTED loops
 *      used for multi-dimensional arrays or vectors
 */
