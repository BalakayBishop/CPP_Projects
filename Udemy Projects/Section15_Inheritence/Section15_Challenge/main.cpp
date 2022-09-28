#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;
    
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2'000});
    accounts.push_back(Account{"Curly", 5'000});
    
    display(accounts);
    deposit(accounts, 1'000);
    withdraw(accounts, 2'000);
    
    vector<Savings_Account> saving_accounts;
    saving_accounts.push_back(Savings_Account{});
    saving_accounts.push_back(Savings_Account{"Superman"});
    saving_accounts.push_back(Savings_Account{"Flash", 2'000});
    saving_accounts.push_back(Savings_Account{"Batman", 10'000'000'000, 5.0});
    
    display(saving_accounts);
    deposit(saving_accounts, 100.00);
    withdraw(saving_accounts, 200.00);
    
//    display(saving_accounts);
//    deposit(saving_accounts, 1'000);
//    withdraw(saving_accounts, 2'000);
    
    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account{});
    checking_accounts.push_back(Checking_Account{"Tom"});
    checking_accounts.push_back(Checking_Account{"Bill", 2'000});
    checking_accounts.push_back(Checking_Account{"Joe", 10'000});
    
    display(checking_accounts);
    deposit(checking_accounts, 1'000);
    withdraw(checking_accounts, 2'000);
    
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Jerry"});
    trust_accounts.push_back(Trust_Account{"George", 1'500});
    trust_accounts.push_back(Trust_Account{"Terry", 6'000, 5.0});
    
    display(trust_accounts);
    deposit(trust_accounts, 1'000);
    withdraw(trust_accounts, 2'000);
    
    return 0;
}
