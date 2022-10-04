#pragma once
#include "Account.h"
#include <vector>

using std::vector;

void display(const vector<Account *> &acc);
void deposit(vector<Account *> &acc, double amount);
void withdraw(vector<Account *> &acc, double amount);

