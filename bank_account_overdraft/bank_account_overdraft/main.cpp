//
//  main.cpp
//  bank_account_overdraft
//
//  Created by Samheeta Mistry on 11/28/20.
//
#include <iostream>
#include <iomanip>
#include "Account.hpp"
#include "CheckingAccount.hpp"
#include "SavingsAccount.hpp"
#include "OverdraftCheckingAccount.hpp"
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t\t CIST004A" << endl;
    cout << fixed << setprecision(2);
    double user_credit;
    double user_debit;
    vector<Account*> account_vectors;
    SavingsAccount* overdraft_savings = new SavingsAccount(150.00, 0.04);
    account_vectors.emplace_back(new SavingsAccount(25.00, 0.04));
    account_vectors.emplace_back(new SavingsAccount(200.00, 0.08));
    account_vectors.emplace_back(new CheckingAccount(80.00, 1.00));
    account_vectors.emplace_back(new OverdraftCheckingAccount(400.00, 1, 2, overdraft_savings));
    // for loop parses through entire vector, use dynamic cast to deposit and withdraw
    for (size_t i=0; i < account_vectors.size(); i++) {
        cout << "Account "<< i+1<< " balance: $" << account_vectors[i] -> getBalance();
        do {
            cout << "\nEnter a debit value to withdraw from Account "<< i+1<< ": " ;
            cin >> user_debit;
        } while (user_debit < 0.0);
        account_vectors[i] -> debit(user_debit);
        do {
            cout << "Enter a credit value to deposit into Account "<< i+1<< ": " ;
            cin >> user_credit;
        } while (user_credit < 0.0);
        account_vectors[i] -> credit(user_credit);
        if (dynamic_cast <SavingsAccount*> (account_vectors[i]) != nullptr) {
            cout << "Adding $" << dynamic_cast <SavingsAccount*> (account_vectors[i]) -> calculateInterest() << " interest to account "<< i+1<< "" << endl;
            dynamic_cast <SavingsAccount*> (account_vectors[i]) -> credit(dynamic_cast <SavingsAccount*> (account_vectors[i])->calculateInterest());
        }
        cout << "Updated Account "<< i+1<< " balance: $ " <<account_vectors[i] -> getBalance() << endl << endl;
    }
    return 0;
}

