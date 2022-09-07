//
//  main.cpp
//  prime_factor
//
//  Created by Samheeta Mistry on 10/1/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
void primeFactor (unsigned int num, int div); // function prototype

void primeFactor(unsigned int num, int div = 2) {
    if (num == div) { // It's Prime
        cout << div << " ";
        return ;
    }
    if (num % div == 0) { //div is a factor
        cout << div << ", " ;
        primeFactor(num/div, div);
    } else {
        primeFactor(num, div+1);
    }
    return;
}
int main(int argc, const char * argv[]) {
    cout << fixed << setprecision(4);
    time_t startTime;
    double deltaTime;
    cout << "Samheeta Mistry \t\t CIST 004A \n";
    unsigned int number;
    cout << "Enter a number to factor: ";
    cin >> number;
    cout << "The prime factors are: ";
    startTime = clock();
    primeFactor(number);
    deltaTime = ((clock() - startTime) * 1000.0) / CLOCKS_PER_SEC ;
    cout << endl;
    cout << "Program run time = " << deltaTime << " mSec.\n";
    return 0;
    }

