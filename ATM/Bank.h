#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;

class Bank
{
    friend double read(const string &file_name);
    friend void write(const string &fileName, const int bal);
private:
    string first_name;
    string last_name;
    double balance {};
    string file_name;
    
    void set_balance(double num);
    
public:
    Bank(string fname, string lname); // 2-arg ctor
    ~Bank();                          // dtor
    
    string get_firstName() const;
    string get_lastName() const;
    double get_balance() const;
    string get_fileName() const; 
    
    void set_firstName(const string &fname);
    void set_lastName(const string &lname);
    void deposit(double amount);
    void withdraw(double amount);
    void print(int selection);
    
    void display_menu();
};

