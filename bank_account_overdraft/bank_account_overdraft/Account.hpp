//
//  Account.hpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//

#ifndef Account_hpp
#define Account_hpp
class Account {
private:
    double currentBalance;
public:
    Account(double firstBalance);
    virtual void credit(double addBalance);
    virtual bool debit(double withdrawValue);
    double getBalance();
};

#endif /* Account_hpp */
