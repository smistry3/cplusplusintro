//
//  CheckingAccount.cpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
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
    Account::credit(amountDeposited-transactionFee);
    if (transactionFee > getBalance()) {
        cout << "Transaction exceeded balance" << endl;
    }
    else {
        Account::debit(transactionFee);
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

double CheckingAccount::getCheckingFee() {
    return transactionFee;
}
