//
//  main.cpp
//  gpa_program
//
//  Created by Samheeta Mistry on 9/19/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    setprecision(3);
    cout << "Samheeta Mistry \t \t \t CIST004A \n";
    float sumGPA{0}, iGPA{0}, m_in{1000}, m_ax{0};
    int numGPA{0}, ct{0};
    cout << "\nEnter the number of GPAs you want to use in your calculations: ";
    cin >> numGPA;
    if (numGPA < 1) {
        cout << "The value you entered was invalid. How many GPAs do you want to use? ";
        cin >> numGPA;
    }
    do {
        do {
            cout << "Enter GPA 0 to 4: ";
            cin >> iGPA;
            if (iGPA < 0.0 || iGPA > 4.0) {
                cout << "The value you entered was invalid. Enter a valid GPA: ";
                cin >> iGPA;
            }
        } while ( iGPA <0 || iGPA >4.0 );
        ct += 1;
        sumGPA += iGPA;
        if (iGPA < m_in) {
            m_in = iGPA;
        }
        if (iGPA > m_ax) {
            m_ax = iGPA;
        }
    } while (ct < numGPA);
    float avgGPA = sumGPA / numGPA;
    
    cout << "\n \nSum of GPA is: " << sumGPA << fixed << setprecision(3) ;
    cout << "\nThe maximum GPA is: " << m_ax << fixed << setprecision(3);
    cout << "\nThe minimum GPA is: " << m_in << fixed << setprecision(3);
    cout << "\nThe average GPA is: " << avgGPA << fixed << setprecision(3);
    return 0;
}
