//
//  main.cpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//

#include <iostream>
#include <iomanip>
#include "Account.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t\t CIST004A" << endl;
    cout << fixed << setprecision(2);
    Account new_account(50.00);
    SavingsAccount savings_account(25.00, .03);
    CheckingAccount checking_account(80.00, 1.00);
    
    cout << "Account balance: $" << new_account.getBalance() << endl;
    cout << "Savings account balance: $" << savings_account.getBalance() << endl;
    cout << "Checking account balance: $" << checking_account.getBalance() << endl;
    
    cout << "\nAttempting to debit $25.00 from account." << endl;
    new_account.debit(25.00);
    cout << "Attempting to debit $30.00 from savings account." << endl;
    savings_account.debit(30.00);
    cout << "Attempting to debit $40.00 from checking account." << endl;
    checking_account.debit(40.00);
    
    cout << "\nAccount balance: $" << new_account.getBalance() << endl;
    cout << "savings account balance: $" << savings_account.getBalance() << endl;
    cout << "checking account balance: $" << checking_account.getBalance() << endl;
    
    cout << "\nCrediting $40.00 to account." << endl;
    new_account.credit(40.00);
    cout << "Crediting $65.00 to savings account." << endl;
    savings_account.credit(65.00);
    cout << "Crediting $20.00 to checking account." << endl;
    checking_account.credit(20.00);
    
    cout << "\nAccount balance: $" << new_account.getBalance() << endl;
    cout << "Savings account balance: $" << savings_account.getBalance() << endl;
    cout << "Checking account balance: $" << checking_account.getBalance() << endl;
    cout << "Adding $" << savings_account.calculateInterest() << " interest to savings account" << endl;
    cout << "Savings account balance: $" << savings_account.getBalance() + savings_account.calculateInterest() << endl;
}

