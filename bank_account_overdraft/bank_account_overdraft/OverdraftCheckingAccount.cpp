//
//  OverdraftCheckingAccount.cpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//

#include "OverdraftCheckingAccount.hpp"
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"
#include <iostream>
using namespace std;

OverdraftCheckingAccount::OverdraftCheckingAccount(double firstBalance, double checkingFee, double overdraftFee, SavingsAccount* savingsPtr): CheckingAccount(firstBalance, checkingFee) {
    savingsPointer = savingsPtr;
    if (overdraftFee >= 0.0){
        overdraft = overdraftFee;
    }
    else {
        overdraft = 0.0;
    }
    
}
    
bool OverdraftCheckingAccount::debit(double withdrawAmount) {
    if (CheckingAccount::debit(withdrawAmount)) {
        return true;
    }
    if (getBalance() + savingsPointer -> getBalance() >= withdrawAmount + getCheckingFee() + overdraft) {
        // do a debit on the checking account and on the savings account to take remainder of money
        // use -> for savings, :: for checking
        double temp_balance = getBalance();
        cout << "Using overdraft protection:" << endl;
        CheckingAccount::debit(temp_balance-getCheckingFee());
        savingsPointer -> debit(withdrawAmount-temp_balance-getCheckingFee() + overdraft);
        cout << "$"<<overdraft << " overdraft transaction fee charged." << endl;
        return true;
    }
    else {
        cout << "You do not have enough money" << endl;
        return false;
    }
}
