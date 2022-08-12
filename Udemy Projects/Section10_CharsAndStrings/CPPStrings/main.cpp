#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Exmaples of declaration and init
    string s1;              // Empty
    string s2 {"Frank"};    // Frank, c-style literal but will be converted
    string s3 {s2};         // Frank, same but in different mem spaces
    string s4 {"Frank", 3}; // Fra
    string s5 {s3, 0, 2};   // Fr, starting index and length 
    string s6 (3, 'X');     // XXX, specific num of specific char
    
    string s7;
    s7 = "Valid"; 
    
    // Concat
    string part1 {"C++"};
    string part2 {"is a powerful"};
    string sentence;
    
    sentence = part1 + " " + part2 + " " + "language"; // valid concat
    // sentence "C++" + " is powerful"; is not valid because they are c-style literals
    
    // Example 1 
    string n0;
    string n1 {"Apple"};
    string n2 {"Banana"};
    string n3 {"Kiwi"};
    string n4 {"apple"};
    string n5 {n1};
    string n6 {n1, 0, 3};
    string n7 (10, 'X'); // ctor style init
    
    cout << n0 << endl; // no garbage 
    cout << n0.length() << endl;
    
    // Comparison
    cout << boolalpha;
    cout << n1 << " == " << n5 << " : " << (n1 == n5) << endl;
    cout << n1 << " == " << n2 << " : " << (n1 == n2) << endl;
    cout << n1 << " != " << n2 << " : " << (n1 != n2) << endl;
    cout << n1 << " < " << n2 << " : " << (n1 < n2) << endl;
    cout << n2 << " > " << n1 << " : " << (n2 > n1) << endl;
    cout << n4 << " < " << n5 << " : " << (n4 < n5) << endl;
    cout << n1 << " == " << "Apple" << " : " << (n1 == "Apple") << endl;
    
    // Assignment 
    n1 = "Watermelon";
    cout << "n1 is now: " << n1 << endl;
    n2 = n1;
    cout << "n2 is now: " << n2 << endl;
    
    n3 = "Frank";
    
    cout << "n3 is now: " << n3 << endl;
    
    n3[0] = 'C';
    cout << "changed first letter of n3: " << n3 << endl;
    n3.at(0) = 'P';
    cout << "changed first letter of n3: " << n3 << endl;
    
    // Concat 
    n3 = "Watermelon";
    n3 = n5 + " and " + n2 + "juice";
    cout << "n3 is now: " << n3 << endl;
    
    // Iterating or Looping 
    n1 = "Apple";
    for (size_t i {0}; i < n1.length(); i++)
    {
        cout << n1.at(i); 
    }
    cout << endl;
    
    // OR 
    for (auto c : n1)
    {
        cout << c;
    }
    cout << endl;
    
    // Substring 
    n1 = "This is a test";
    
    cout << n1.substr(0,4) << endl;
    cout << n1.substr(5,2) << endl;
    cout << n1.substr(10,4) << endl;
    
    // Erasing 
    n1.erase(0,5); // erasing this
    cout << "n1 is now: " << n1 << endl;
    
    // Getline 
    string fullName {};
    
    cout << "Enter your full name: ";
    getline(cin, fullName); 
    
    cout << "Your full name is: " << fullName << endl;
    
    // Find or Search
    n1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = n1.find(word);
    if (position != string::npos)
    {
        cout << "Found " << word << " at position: " << position << endl;
    }
    else 
    {
        cout << "Sorry, " << word << " not found" << endl;
    }
    
    
    
    
    return 0;
}
/*
 * std::string is a class insde the STL 
 * C++ string are dynamic 
 * stored contiguously in memory
 * works with IO streams
 * can be used with operators
 * can be easily converted to C-Style strings
 * Like vectors, C++ strings are much safer because they support bounds checking 
 * 
 * Can use the assignment operator
 * 
 * Can use the [] operator or .at() method like a vector
 * 
 * Comparing 
 *      can use the relational operators 
 *      the objects are compared char by char lexically 
 *  string a {"Apple"};
    string b {"Banana"};
    string c {"Kiwi"};
    string d {"apple"};
    string e {a};
    
    a == e;         True
    a == b;         False 
    a != b;         True
    a < b;          True
    a > b;          True
    d < e;          False
    a == "Apple";   True
 * 
 * 
 * Mehtods
 *      substring: substr (starting index, length)
 *      find: string.find(search_string); will return the index 
 *            string.find(string, index)
 *      erase: .erase(start index, length)
 *      clear: empty the string
 *      size: .length()
 * 
 * += Operator 
 *      s1 {"Frank"} 
 *      s1 += " James" 
 *      s1 == Frank James
 * 
 * Input 
 *      we want to use:
 *          getline (cin, s1); 
 *          getline (cin, s1, delimiter)
 * 
 * Insert 
 *      to place a char at a specified location
 *      syntax: stringName.insert(index, char);
 * 
 */
