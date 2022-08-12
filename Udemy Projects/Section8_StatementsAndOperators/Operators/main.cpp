#include <iostream>

using namespace std;

int main()
{
    // ASSIGNMENT Operator
    int num1 {10}, num2 {20}; // this is not assignment, its init. 
    
    num1 = 100; // this is assignment
    num1 = num2 = 1'000; // both num1 and num2 will be assigned 1'000 because its done r -> l 
    
    // Assignments not allowed
    /*
     * num1 = "Frank";
     * 100 = num1; 100 is a literal and has no L-value (location) in memory 
     */
     
     // ARITHMETIC Operators
     /*
      * + is addition
      * - is subtraction 
      * * is multiplication
      * / is division 
      * % is remainder of division
      */
      
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      // OR
      int result {0};
      
      // addition
      result = num1 + num2;
      cout << num1 << " + " << num2 << " = " << result << endl;
      
      // substraction
      result = num1 - num2;
      cout << num1 << " - " << num2 << " = " << result << endl;
      
      // multiplication
      result = num1 * num2;
      cout << num1 << " * " << num2 << " = " << result << endl;
      
      // division
      result = num1 / num2;
      cout << num1 << " / " << num2 << " = " << result << endl;
      
      // int division
      result = num2 / num1;
      cout << num2 << " / " << num1 << " = " << result << endl;
      
      // modulo
      result = num1 % num2;
      cout << num1 << " % " << num2 << " = " << result << endl; // this will print 0, remainder is zero
      
      result = num2 % num1;
      cout << num2 << " % " << num1 << " = " << result << endl; // this will print 2, remainder is 2
      
      // Arithmetic Precedence (PEMDAS/order of operations)
      result = num1 * 10 + num2; // is the same as (num1 * 10) + num2 
      
      // USD to Euros
      const double UsdPerEuro {1.19}; 
      double euros {0}; 
      double usd {0};
      
      cout << "Welcome to the EURO to USD converter!" << endl;
      cout << "Please enter the value in Euros: "; 
      cin >> euros;
      
      usd = euros * UsdPerEuro;
      
      cout << euros << " euros is equals " << usd << " dollars!" << endl; 
      
      // INCREMENT and DECREMENT Operators
      /* 
       * increment is ++
       * decrement is -- 
       * Prefix: ++num
       * Postfix: num++
       */
       
       int counter {10};
       int result2 {0};
       
       // Example 1:
       cout << "Counter: " << counter << endl; // 10
       
       counter = counter + 1;
       cout << "Counter: " << counter << endl; // 11
       
       counter++; 
       cout << "Counter: " << counter << endl; // 12
       
       ++counter;
       cout << "Counter: " << counter << endl; // 13
       
       // Example 2: pre-increment 
       counter = 10;
       result2 = 0;
       
       cout << "Counter: " << counter << endl; // 10
       
       result = ++counter; // counter will be incremented before it is used, then assigned to result
       cout << "Counter: " << counter << endl; // 11
       cout << "Result: " << result2 << endl; // 11
       
       // Example 3: post-increment
       counter = 10;
       result2 = 0;
       
       cout << "Counter: " << counter << endl; // 10
       
       result = counter++; // counter will be incremented after it is used
       cout << "Counter: " << counter << endl; // 11
       cout << "Result: " << result2 << endl; // 10
       
       // Example 4
       counter = 10;
       result2 = 0;
       
       cout << "Counter: " << counter << endl; // 10
       
       result = ++counter + 10;
       cout << "Counter: " << counter << endl; // 11
       cout << "Result: " << result2 << endl; // 21
       
       // Example 5
       counter = 10;
       result2 = 0;
       
       cout << "Counter: " << counter << endl; // 10
       
       result = counter++ + 10;
       cout << "Counter: " << counter << endl; // 11
       cout << "Result: " << result2 << endl; // 20
       
       // EQUALITY Operators
       // Example 1
       bool equalResult {false};
       bool notEqualResult {false};
       
       cout << boolalpha; // will display true/false instead of 0/1 
       
       cout << "Enter two integers separated by spaces: ";
       cin >> num1 >> num2;
       
       equalResult = (num1 == num2);
       notEqualResult = (num1 != num2); 
       
       cout << "Comparison result (equals): " << equalResult << endl;
       cout << "Comparison result (not equals): " << notEqualResult << endl;
       
       //Example 2
       char char1{}, char2{};
       cout << "Enter two characters separated by spaces: ";
       cin >> char1 >> char2;
       
       equalResult = (char1 == char2);
       notEqualResult = (char1 != char2); 
       
       cout << "Comparison result (equals): " << equalResult << endl;
       cout << "Comparison result (not equals): " << notEqualResult << endl;
       
       //Example 3 
       double d1{}, d2{}; 
       cout << "Enter two doubles separated by spaces: ";
       cin >> d1 >> d2;
       
       equalResult = (d1 == d2);
       notEqualResult = (d1 != d2); 
       
       cout << "Comparison result (equals): " << equalResult << endl;
       cout << "Comparison result (not equals): " << notEqualResult << endl;
       
       // RELATIONAL Operators
       int exp1{}, exp2{};
       cout << "Enter 2 integers separated by spaces: ";
       cin >> exp1 >> exp2;
       
       cout << exp1 << " > " << exp2 << " : " << (exp1 > exp2) << endl;
       cout << exp1 << " >= " << exp2 << " : " << (exp1 >= exp2) << endl;
       cout << exp1 << " < " << exp2 << " : " << (exp1 < exp2) << endl;
       cout << exp1 << " <= " << exp2 << " : " << (exp1 <= exp2) << endl;
       
       const int lower {10};
       const int upper {20};
       
       cout << "Please enter an integer that is greater than " << lower << " : ";
       cin >> exp1;
       cout << exp1 << " > " << lower << " is " << (exp1 > lower) << endl; 
       
       cout << "Please enter an integer that is less than " << upper << " : ";
       cin >> exp1;
       cout << exp1 << " <= " << upper << " is " << (exp1 <= upper) << endl;
       
       // LOGICAL Operators
       int num {};
       bool withinBounds {false}; 
       bool outsideBounds {false};
       bool onBounds {false};
       
       // Example 1
       cout << "Enter and integer - the bounds are " << lower << " and " << upper << ": ";
       cin >> num;
       
       withinBounds = (num > lower and num < upper);
       cout << num << " is between " << lower << " and " << upper << " : " << withinBounds << endl;
       
       // Example 2
       outsideBounds = (num < lower or num > upper);
       cout << num << " is outside " << lower << " and " << upper << " : " << outsideBounds << endl;
       
       // Example 3
       onBounds = (num == lower or num == upper);
       cout << num << " is on one bound " << lower << " and " << upper << " : " << outsideBounds << endl;
       
       // Determine if you need to wear a coat 
       bool wearCoat {false};
       double temperature {0.0};
       int windSpeed {0};
       
       const int windSpeedForCoat {25};
       const double tempForCoat {45};
       
       cout << "Enter the temp (F): ";
       cin >> temperature;
       cout << "Enter the wind speed (mph): ";
       cin >> windSpeed;
       
       wearCoat = (temperature < tempForCoat or windSpeed > windSpeedForCoat);
       cout << "Do you need to wear a coat using OR? " << wearCoat << endl;
       
       wearCoat = (temperature < tempForCoat and windSpeed > windSpeedForCoat);
       cout << "Do you need to wear a coat using AND? " << wearCoat << endl;
       
       // COMPOUND Operator
       int a {}, b {}, c {};
       
       a += 1; // a = a + 1
       a /= 5; // a = a / 5
       a *= b + c; // a = a * (b + c)
 
    
    return 0;
}
/*
 * Operators 
 *      unary, binary, and ternary
 *      Grouped into: assignment, arithemtic, increment/decrement, relational,
 *      logical, member access, and other 
 * 
 * Operator Precendence
 *      Associativity: use precedence when adjacent operators are different 
 *          Use associativity rules when adjacent operators have the same precedence 
 *          Use parenthesis to absolutely remove any doubt
 *      expr1 op1 expr2 op2 expr3 // precedence
 *      VERSUS 
 *      expr1 op1 expr2 op1 expr3 // associativity
 * 
 * Assignment Operator: = 
 *      lhs = rhs 
 *      rhs is an expression that is evaluated to a value
 *      the rhs must be tpe compatible with the lhs 
 *      things are done right to left
 * 
 * L-value is the location or the R-value 
 * C++ is statically typed so at compile it will see if the R-value can be assigned to the L-value 
 * 
 * Arithmetic Operator
 * 
 * Increment and Decrement 
 *      Do not overuse the operator
 *      Do not use it in the same statement 
 *      pre vs post increment/decrement
 * 
 * Equality Operator
 *      operators == or != 
 *      compares the values of 2 expressions
 *      evaluates to a boolean (true or false, 0 or 1)
 * 
 * Relational Operators
 *      >, >=, <, <=, and <=> 
 * 
 * Logical Operators
 *      not, ! (unary) negates the operand 
 *      and, && (binary)
 *      or, || (binary) 
 *      Precendence: 
 *          logial NOT has higher prec. than AND 
 *          AND has higher prec. than OR 
 *      Examples:
 *          !is_raining && temperature > 32.0
 *          is_raining || is_snowing
 *      Short-Circuit: C++ will stop evaluating when it knows something will be false 
 * 
 * Compund Assignment Operator
 *      arithmetic ops: +=, -=, *=, /=, %=, 
 *      bitwise ops: >>=, <<=, &=, ^=, |=
 */
