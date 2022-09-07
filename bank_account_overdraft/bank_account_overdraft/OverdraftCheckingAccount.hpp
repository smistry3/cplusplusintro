//
//  OverdraftCheckingAccount.hpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//

#ifndef OverdraftCheckingAccount_hpp
#define OverdraftCheckingAccount_hpp
#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"

class OverdraftCheckingAccount:public CheckingAccount {
public:
    OverdraftCheckingAccount(double firstBalance, double checkingFee, double overdraftFee, SavingsAccount* savingsPtr);
    bool debit(double withdrawAmount) override;
private:
    double overdraft;
    SavingsAccount* savingsPointer;
};
#endif /* OverdraftCheckingAccount_hpp */
