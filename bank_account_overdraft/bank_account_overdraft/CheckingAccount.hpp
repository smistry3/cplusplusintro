//
//  CheckingAccount.hpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//

#ifndef CheckingAccount_hpp
#define CheckingAccount_hpp
#include "Account.hpp"

class CheckingAccount:public Account {
private:
    double transactionFee;
public:
    CheckingAccount(double firstBalance, double feePerTransaction);
    void credit(double feePerTransaction);
    bool debit(double feePerTransaction);
    double getCheckingFee();
};
#endif /* CheckingAccount_hpp */
