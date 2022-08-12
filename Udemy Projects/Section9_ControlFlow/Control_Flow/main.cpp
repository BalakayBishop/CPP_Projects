#include <iostream>

using namespace std;

int main()
{
    int num {0}; 
    const int min {10}, max {100};
    
    // IF statement 
    
    cout << "Please enter a number between " << min << " and " << max << " : ";
    cin >> num;
    
    if (num >= min)
    {
        cout << "\n========== IF statement 1 ==========" << endl;
        cout << num << " is greater than or equal to " << min << endl; 
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num <= max)
    {
        cout << "\n========== IF statement 2 ==========" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if (num >= min and num <= max)
    {
        cout << "\n========== IF statement 3 ==========" << endl;
        cout << num << " is in range" << endl;
        cout << "This means statements 1 and 2 must also be true" << endl;
    }
    
    if (num == min or num == max)
    {
        cout << "\n========== IF statement 4 ==========" << endl;
        cout << "num is on a boundry" << endl;
    }
    
    // IF-ELSE statement
    const int target {10};
    
    cout << "Enter a number and I'll compare it to " << target << " : ";
    cin >> num;
    
    if (num >= target)
    {
        cout << "====================" << endl;
        cout << num << " is greather than or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    else 
    {
        cout << "====================" << endl;
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    
    // NESTED IF 
    int score {0};
    char letterGrade {};
    
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;
    
    if (score >= 0 && score <= 100)
    {
       if (score >= 90)
       {
           letterGrade = 'A'; 
       } 
       else if (score >= 80)
       {
           letterGrade = 'B';
       }
       else if (score >= 70)
       {
           letterGrade = 'C';
       }
       else if (score >= 60)
       {
           letterGrade = 'D';
       }
       else 
       {
           letterGrade = 'F';
       }
       
       cout << "Your grade is: " << letterGrade << endl;
       
       if (letterGrade == 'F')
       {
           cout << "Sorry, you need to repeat this class." << endl;
       }
       else 
       {
           cout << "Congrats, you passed!" << endl;
       }
    }
    else 
    {
        cout << "Sorry, " << score << " is not in range" << endl;
    }
    
    // SWITCH statement
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letterGrade;
    
    switch (letterGrade)
    {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need a 80-89 for a B, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70-79 for a C." << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is a 60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure? (Y/N)" << endl;
            cin >> confirm;
            
            if (confirm == 'y' or confirm == 'Y')
            {
                cout << "Okay, I guess you don't want to study" << endl;
            }
            else if (confirm == 'n' or confirm == 'N')
            {
                cout << "Good, go study!" << endl;
            }
            else 
            {
                cout << "Danger Will Robinson, invalid input" << endl;
            }
            break;
        }
            
        default:
            cout << "Sorry, that is not a valid letter grade." << endl;
    }
    
    // SWITCH using ENUM 
    enum Direction
    {
        left, right, up, down
    };
    
    Direction heading {left};
    
    switch (heading)
    {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break; 
        case up:
            cout << "Going up" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "Going somewhere" << endl;
            break;
    }
    
    // CONDITIONAL OPERATOR
    // Example 1 
    cout << "Please enter an integer: ";
    cin >> num;
    
    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else 
    {
        cout << num << " is odd" << endl;
    }
    
    // OR 
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;
    
    // Example 2
    int num1 {}, num2{};
    
    cout << "Please enter two integers separated by spaces: ";
    cin >> num1 >> num2;
    
    if (num1 != num2)
    {
        cout << "Larger num is: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smaller num is: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
    {
        cout << "The numbers are the same" << endl;
    }
    
    
    cout << endl;
    return 0;
}
/*
 * Selection
 *      if statement
 *      if-else statement
 *      nested if statement
 *      switch statement
 *      Conditional operator ? :
 * 
 * Looping 
 *      for 
 *      range-based for loop
 *      while 
 *      do-while
 *      continue and break 
 *      infinite loops
 *      nested loops
 * 
 * IF statement
 *      if (expression)
 *      {}
 * 
 * Block statement example: 
 *      { 
 *          expression 1
 *          expression 2
 *      } 
 * 
 * IF-ELSE statement 
 *      if (expr)
 *          statement
 *      else
 *          statement
 * 
 * SWITCH 
 *      switch (enum or integral control) {
 *          case int: statement; break;
 *          default: statement; 
 *      Best practice is to always include a break and default statement
 *      If you delcare a variable then curly braces are need in the block statement for the case 
 *      If we are going to be using the enum type switch-case then we either need to handle all the num vars or use a default
 * 
 * CONDITIONAL Operator 
 *      Ternary operator 
 *      (conditional expression) ? expr1 (true) : expr2 (false); 
 *      Do not nest these operators 
 */
