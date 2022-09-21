#include "Bank.h"
#include <fstream>
#include <string>
using std::string;

Bank::Bank(string fname, string lname) 
    : first_name{fname}, last_name{lname}, file_name{"C:\\" + fname + " " + lname + ".txt"}
{
    
}

Bank::~Bank()
{
}

string Bank :: get_firstName() const { return first_name; }
string Bank :: get_lastName() const { return last_name; }
string Bank :: get_fileName() const { return file_name; }
double Bank :: get_balance() const { return balance; }

void Bank :: set_balance(double num) 
{
    balance = num;
}
    
void Bank:: set_firstName(const string &fname) 
{
    if (fname.empty() == false)
    {
       first_name = fname;
    }
    else 
    {
        cout << "Error, first name field empty" << endl;
    }
}

void Bank:: set_lastName(const string &lname)
{
    if (lname.empty() == false)
    {
       last_name = lname;
    }
    else 
    {
        cout << "Error, last name field empty" << endl;
    } 
}

void Bank:: display_menu()
{
    bool exit {false};
    
    ofstream o_file;
    ifstream i_file;
    
    o_file.open(file_name);
    i_file.open(file_name);
    
    do {
        int selection {};
        double amount {};
        double num {};
        string file_bal {};
        cout << "---------------" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Please make a selection (1-4): ";
        cin >> selection;
        cout << "---------------" << endl;
        
        switch (selection)
        {
            case 1:
                cout << "---------------" << endl;
                
                if (i_file.is_open())
                {
                    getline(i_file, file_bal);
                }
                if (file_bal == "")
                {
                    set_balance(0);
                }
                else
                {
                    num = std::stod(file_bal);
                    set_balance(num);
                }
                cout << "Current account balance: " << get_balance() << endl;
                cout << "---------------" << endl;
                i_file.close();
                break;
            case 2:
                cout << "---------------" << endl;
                cout << "How much would you like to deposit: ";
                cin >> amount;
                deposit(amount);
                if (o_file.is_open())
                {
                    o_file << this->get_balance() << endl;
                }
                cout << "---------------" << endl;
                o_file.close();
                break;
            case 3:
                cout << "---------------" << endl;
                cout << "How much would you like to withdraw: ";
                cin >> amount;
                if (this->balance >= amount)
                {
                    withdraw(amount);
                    if (o_file.is_open())
                    {
                        o_file << this->get_balance() << endl;
                    }
                    o_file.close();
                    cout << amount << " withdrawn" << endl;
                }
                else 
                {
                    cout << "Insufficient funds, try again" << endl;
                }
                cout << "---------------" << endl;
                break;
            case 4:
                cout << "---------------" << endl;
                cout << "Thank you! Goodbye!" << endl;
                cout << "---------------" << endl;
                exit = true;
                break;
            default:
                cout << "---------------" << endl;
                cout << "Error, invalid selection. Try again!" << endl;
                cout << "---------------" << endl;
                break;
        }
        
    }while (exit != true);
    
}

void Bank:: deposit(double amount)
{
    this->balance += amount;
}

void Bank:: withdraw(double amount)
{
    this->balance -= amount;
}


