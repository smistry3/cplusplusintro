//
//  main.cpp
//  array_stats
//
//  Created by Samheeta Mistry on 10/15/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t CIST 004A\n";
    unsigned int numberOfDice, numberOfFaces, rollTotal{0}, numOfRolls;
    int maximum = INT_MIN;
    typedef vector <int> MyVectorType;
    MyVectorType diceCounter;
    do {
        cout << "Enter the number of times you want to roll your dice: ";
        cin >> numOfRolls;
    } while (numOfRolls < 40 || numOfRolls > 10000000);
    do {
        cout << "Enter the number of dice you want to roll: ";
        cin >> numberOfDice;
    } while (numberOfDice < 0 || numberOfDice > 10000);
    do {
        cout << "How many faces are on each of your die: ";
        cin >> numberOfFaces;
    } while (numberOfFaces < 2 || numberOfFaces > 200);
    diceCounter.assign(numberOfDice * numberOfFaces + 1, 0 );
    for (int j{0}; j < numOfRolls; ++j) {
        rollTotal = 0;
        for (unsigned int k{0}; k < numberOfDice; ++k) {
            rollTotal += (1 + (rand() % numberOfFaces));
        }
            diceCounter[rollTotal]++;
    }
    for (int element:diceCounter) {
        //cout << "The element is " << element << endl;
        if ( element > maximum ) {
            maximum = element;
        }
    }
    cout<< "The max is "<< maximum << endl;
    for (unsigned int i{0}; i < diceCounter.size(); ++i) {
        cout << setw(12) << "Rolled "  + to_string(i) + ": " ;
        for (unsigned int m = 0; m < (diceCounter[i]/(maximum/40.0F)); ++m ) {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}
