//
//  main.cpp
//  for_loop_classwork
//
//  Created by Samheeta Mistry on 9/22/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t CIST004A \n";
    cout << setw(10) << "Number" <<
    setw(10) << "Number*2" <<
    setw(10) << "Number^2" << '\n';

    for (int ct = 1; ct < 16;) {
        cout << setw(10) << ct <<
        setw(10) << ct*2 <<
        setw(10) << ct*ct << '\n';
        ct += 1;
    }
    return 0;
}
