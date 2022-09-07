//
//  main.cpp
//  calculate_gpa
//
//  Created by Samheeta Mistry on 9/24/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t CIST 004A";
    cout << fixed << setprecision(3);
    char letter;
    char sign;
    float gpaPoints{0}, unitsIN, unitsTOT{0}, gpaTOT{0};
    do {
        cout << "\nEnter a letter grade. Type N when finished: ";
        cin >> letter;
        letter = toupper(letter);
        cin.get(sign);
        if (sign != '\n') {
            cin.ignore(1000, '\n');
        }
        switch (letter) {
            case 'A':
                gpaPoints = 4.0f;
                break;
            case 'B':
                gpaPoints = 3.0f;
                break;
            case 'C':
                gpaPoints = 2.0f;
                break;
            case 'D':
                gpaPoints = 1.0f;
                break;
            case 'F':
                gpaPoints = 0.0f;
                break;
            case 'N':
                continue;
            default:
                cout << "You entered an invalid letter. \n";
                continue;
        }
        switch (sign) {
            case '+':
                if (letter != 'A') {
                    gpaPoints += 0.3f;
                }
                else {
                    cout << "This grade cannot be calculated with this sign. \n";
                }
                break;
            case '-':
                if (letter != 'F') {
                    gpaPoints -= 0.3f;
                }
                else {
                    cout << "This grade cannot be calculated with this sign. \n";
                }
                break;
            case '\n':
                break;
            default:
                cout << "You entered an invalid grade. \n";
                continue;
        }
        cout << "How many units is this class? ";
        cin >> unitsIN;
        while (unitsIN < 0.5f or unitsIN > 45.0f) {
            cin.ignore(1000, '\n');
            cin.clear();
            cout << "The number you inputted was invalid. Please reenter the number of units: ";
            cin >> unitsIN;
        }
        unitsTOT += unitsIN;
        gpaTOT += (gpaPoints * unitsIN);
    } while (letter != 'N');
    cout << "Your overall GPA is: " << gpaTOT / unitsTOT << endl ;
    return 0;
}
