//
//  SavingsAccount.cpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//
#include "Account.hpp"
#include "SavingsAccount.hpp"
SavingsAccount::SavingsAccount(double firstBalance, double newRate):Account(firstBalance) {
    if (newRate >= 0.0) {
        interestRate = newRate;
    }
    else {
        interestRate = 0.0;
    }
}
double SavingsAccount::calculateInterest() {
    return interestRate * getBalance();
}
