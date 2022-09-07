//
//  CheckingAccount.cpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//
#include "Account.hpp"
#include "CheckingAccount.hpp"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(double firstBalance, double extraFee):Account(firstBalance) {
    if (extraFee >= 0.0){
        transactionFee = extraFee;
    }
    else {
        transactionFee = 0.0;
    }
}
void CheckingAccount::credit(double amountDeposited) {
    Account::credit(amountDeposited);
    if (transactionFee > getBalance()) {
        cout << "Transaction exceeded balance" << endl;
    }
    else {
        Account::debit(transactionFee);
        cout << "$" << transactionFee << " transaction fee charged" << endl;
    }
}
bool CheckingAccount::debit(double withdrawAmount) {
    if (Account::debit(withdrawAmount+transactionFee)) {
        cout << "$" << transactionFee << " transaction fee charged" << endl;
        return true;
    }
    else {
        return false;
    }
}

