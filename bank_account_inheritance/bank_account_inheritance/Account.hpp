//
//  Account.hpp
//  bank_account_inheritance
//
//  Created by Samheeta Mistry on 11/20/20.
//

#ifndef Account_hpp
#define Account_hpp
class Account {
private:
    double currentBalance;
public:
    Account(double firstBalance);
    void credit(double addBalance);
    bool debit(double withdrawValue);
    double getBalance();
};
#endif /* Account_hpp */
