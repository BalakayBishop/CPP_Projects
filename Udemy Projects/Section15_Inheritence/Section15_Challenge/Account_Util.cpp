#include "Account_Util.h"

using std::cout;
using std::endl;

// Account
void display(const vector<Account> &accounts)
{
    cout << "----- Accounts -----" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}

void deposit(vector<Account> &accounts, double amount)
{
    cout << "----- Depositing to Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to deposit " << amount << " to " << acc << endl;
        }
    }
}
void withdraw(vector<Account> &accounts, double amount)
{
    cout << "----- Withdrawing from Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to withdraw " << amount << " to " << acc << endl;
        }
    }
}

// Savings Account
void display(const vector<Savings_Account> &accounts)
{
    cout << "----- Savings Accounts -----" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}

void deposit(vector<Savings_Account> &accounts, double amount)
{
    cout << "----- Depositing to Savings Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to deposit " << amount << " to " << acc << endl;
        }
    }
}

void withdraw(vector<Savings_Account> &accounts, double amount)
{
    cout << "----- Withdrawing from Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to withdraw " << amount << " to " << acc << endl;
        }
    }
}

// Checking Account
void display(const vector<Checking_Account> &accounts)
{
    cout << "----- Checking Accounts -----" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}

void deposit(vector<Checking_Account> &accounts, double amount)
{
    cout << "----- Depositing to Checking Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to deposit " << amount << " to " << acc << endl;
        }
    }
}

void withdraw(vector<Checking_Account> &accounts, double amount)
{
    cout << "----- Withdrawing from Checking Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to withdraw " << amount << " to " << acc << endl;
        }
    }
}

// Trust Account
void display(const vector<Trust_Account> &accounts)
{
    cout << "----- Trust Accounts -----" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}

void deposit(vector<Trust_Account> &accounts, double amount)
{
    cout << "----- Depositing to Trust Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.deposit(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to deposit " << amount << " to " << acc << endl;
        }
    }
}

void withdraw(vector<Trust_Account> &accounts, double amount)
{
    cout << "----- Withdrawing from Trust Accounts -----" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withdraw(amount))
        {
            cout << "Deposited " << amount << " to " << acc << endl;
        }
        else
        {
            cout << "Failed to withdraw " << amount << " to " << acc << endl;
        }
    }
}