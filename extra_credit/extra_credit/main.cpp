//
//  main.cpp
//  extra_credit
//
//  Created by Samheeta Mistry on 9/7/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    float x{4.0};
    float y{3.0};
    double z{4.0};
    double a{3.0};
    long double c{4.0};
    long double d{3.0};
    cout << setprecision(20);
    cout << x/y << endl;
    cout << z/a << endl;
    cout << c/d << endl;
    return 0;
}
