#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Substitution Cypher 
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string message {};
    string en_message {};
    string de_message {};
    
    cout << "-----Welcome to the message encryption-----" << endl;
    
    cout << "Please enter you message: ";
    getline(cin, message);
    
    for (auto c : message)
    {
        if (isalpha(c)) 
        {
            en_message += key.at(alphabet.find(c));
        }
        else if (isspace(c))
        {
            en_message += " ";
        }
        else 
        {
            en_message += c;
        }
    }
    
    cout << "The encrypted message is: " << en_message << endl;
    
    cout << "----- Decrypting Message -----" << endl;
    
    for (auto c : en_message)
    {
        if (isalpha(c)) 
        {
            de_message += alphabet.at(key.find(c));
        }
        else if (isspace(c))
        {
            de_message += " ";
        }
        else 
        {
            de_message += c;
        }
    }
    
    cout << "The decrypted message is: " << de_message << endl;
    
    cout << endl;
    
    return 0;
}
/*
 * PROVIDED SOLTUION 
 * 
 * string secret_message
 * 
 * cout << enter secret_massage
 * getline (cin, secret_message);
 * 
 * for (char c: secret_message)
 * {
 *      size_t position = alphabet.find(c);
 *      if (position != string::npos)
 *      {
 *          char new_char {key.at(position)};
 *          encrypted_message += new_char
 *      }
 *      else 
 *      {
 *          encrypted_message += c;
 *      }
 * 
 * cout << encrypted_message << endl;
 * 
 * 
 */
