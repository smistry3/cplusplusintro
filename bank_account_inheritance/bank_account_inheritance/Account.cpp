//
//  Account.cpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//

#include "Account.hpp"
#include <iostream>
using namespace std;

Account::Account(double firstBalance) {
    if (firstBalance >= 0.0) {
        currentBalance = firstBalance;
    }
    else {
        currentBalance = 0.0;
    }
}
void Account::credit(double addBalance){
    currentBalance += addBalance;
}
bool Account::debit(double withdrawValue) {
    bool validTransaction = true;
    if (withdrawValue > currentBalance) {
        cout << "Transaction exceeded balance" << endl;
        validTransaction = false;
    }
    else {
        currentBalance -= withdrawValue;
    }
    return validTransaction;
}
double Account::getBalance() {
    return currentBalance;
}

