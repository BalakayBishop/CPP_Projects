#pragma once
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include <vector>

using std::vector;

// Utility helper functions for Account

void display(const vector<Account> &accounts);
void deposit(vector<Account> &accounts, double amount);
void withdraw(vector<Account> &accounts, double amount);

// Utility helper functions for Savings_Account
void display(const vector<Savings_Account> &accounts);
void deposit(vector<Savings_Account> &accounts, double amount);
void withdraw(vector<Savings_Account> &accounts, double amount);

// Utility helper functions for Checking_Account
void display(const vector<Checking_Account> &accounts);
void deposit(vector<Checking_Account> &accounts, double amount);
void withdraw(vector<Checking_Account> &accounts, double amount);

// Utility helper functions for Trust_Account
void display(const vector<Trust_Account> &accounts);
void deposit(vector<Trust_Account> &accounts, double amount);
void withdraw(vector<Trust_Account> &accounts, double amount);