//
//  CheckingAccount.hpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//

#ifndef CheckingAccount_hpp
#define CheckingAccount_hpp
#include "Account.hpp"
class CheckingAccount:public Account {
private:
    double transactionFee;
public:
    CheckingAccount(double firstBalance, double feePerTransaction);
    void credit(double amountDeposited);
    bool debit(double withdrawAmount);
};

#endif /* CheckingAccount_hpp */
