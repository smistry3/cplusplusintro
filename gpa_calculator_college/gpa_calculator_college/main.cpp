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
    float gpaPoints{0}, unitsIN, unitsTOT{0}, gpaTOT{0}, valuePTS;
    do {
        cout << "\nEnter a letter grade. Type N when finished: ";
        cin >> letter;
        cin.get(sign);
        if (sign != '\n') {
            cin.ignore(1000, '\n');
        }
        letter = toupper(letter);
        switch (sign) {
            case '\n':
                if (letter == 'A') {
                    gpaPoints = 4.0f;
                    break;
                }
                else if (letter == 'B') {
                    gpaPoints = 3.0f;
                    break;
                }
                else if (letter == 'C') {
                    gpaPoints = 2.0f;
                    break;
                }
                else if (letter == 'D') {
                    gpaPoints = 1.0f;
                    break;
                }
                else if (letter == 'F') {
                    gpaPoints = 0.0;
                    break;
                }
            case '+':
                if (letter == 'B') {
                    gpaPoints = 3.3;
                    break;
                }
                else if (letter == 'A' or letter == 'F') {
                    cout << "You entered an invalid grade. \n";
                    continue;
                }
                else if (letter == 'C') {
                    gpaPoints = 2.3;
                    break;
                }
                else if (letter == 'D') {
                    gpaPoints = 1.3;
                    break;
                }
            case '-':
                if (letter == 'A') {
                    gpaPoints = 3.7;
                    break;
                }
                else if (letter == 'B') {
                    gpaPoints = 2.7;
                    break;
                }
                else if (letter == 'C') {
                    gpaPoints = 1.7;
                    break;
                }
                else if (letter == 'D') {
                    gpaPoints = 0.7;
                    break;
                }
            default:
                cout << "You entered an invalid grade. \n";
                continue;
        }
        cout << "How many units is this class? ";
        cin >> unitsIN;
        if (unitsIN < 0.5 or unitsIN > 45) {
            cout << "The number you inputted was invalid. Please reenter the number of units: ";
            cin >> unitsIN;
        }
        unitsTOT += unitsIN;
        valuePTS = gpaPoints * unitsIN;
        gpaTOT += (valuePTS);
        cout << unitsTOT << endl;
        cout << letter << endl;
         } while (letter != 'N');
        cout << "Your overall GPA is: " << gpaTOT / unitsTOT  ;
        return 0;
}
