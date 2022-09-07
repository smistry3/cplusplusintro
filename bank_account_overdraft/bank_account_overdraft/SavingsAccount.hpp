//
//  SavingsAccount.hpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//

#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp

#include "Account.hpp"

class SavingsAccount:public Account {
private:
    double interestRate;
public:
    SavingsAccount(double firstBalance, double interestRate);
    double calculateInterest();
};

#endif /* SavingsAccount_hpp */
