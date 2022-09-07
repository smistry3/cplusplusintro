//
//  main.cpp
//  height_activity
//
//  Created by Samheeta Mistry, CIST004A on 9/3/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    float weight {0};
    float height {0};
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    if (weight <= 120) {
        cout << "Looks like you need to bulk up a bit more!" << endl;
    }
    if (weight > 120 && weight <= 225) {
        cout << "You're on the right track!" << endl;
    }
    if (weight > 225) {
        cout << "How's that keto diet working for you?" << endl;
    }
    cout << "In metric, your weight is: " << weight / 2.20462 << " kilograms."  << endl;
    cout << "Enter your height in inches: ";
    cin >> height;
    cout << "In metric, your height is " << ((height * 2.540) / 100) << " meters." << endl;
    float bmi = (weight/2.20462)/(((height * 2.540) / 100)*((height * 2.540) / 100));
    cout << "Your BMI is " << bmi  << "." << endl;
    if (bmi <= 18.5) {
        cout << "If only we all could have your metabolism." << endl;
    }
    if (bmi > 18.5 && bmi <= 24.9) {
        cout << "Body GOALS!" << endl;
    }
    if (weight > 225) {
        cout << "I guess the no-exercise part of quarantine is hitting you pretty hard, huh?" << endl;
    }
    return 0;
    
}
