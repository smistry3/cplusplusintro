//
//  main.cpp
//  HealthRecord
// CIS004A
//  Created by Samheeta Mistry on 9/8/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class HealthRecord {
public:
    explicit HealthRecord(string personName) {
        pName= personName;
        pHeight = 1.0;
        pWeight = 0.0;
    }
    void setName(string personName) {
       pName = personName;
    }
    string getName() const {
        return pName;
    }
    void setWeight(float personWeight) {
       pWeight = personWeight;
    }
    float getWeight() const {
        return pWeight;
    }
    void setHeight(float personHeight) {
       pHeight = personHeight;
    }
    float getHeight() const {
        return pHeight;
    }
    float computeBMI() {
        return  (pWeight/2.20462) /((pHeight*0.0254)*(pHeight*0.0254));
    }
private:
    string pName;
    float pHeight, pWeight;
};

int main(int argc, const char * argv[]) {
    HealthRecord myRecord1 {""};
    HealthRecord myRecord2 {""};
    float height1 {0.0}, weight1 {0.0};
    float height2 {0.0}, weight2 {0.0};
    string aName;
    string bName;
    
    cout << "Person 1, What is your name? ";
    getline(cin >> ws, aName);
    myRecord1.setName(aName);
    string name1 = myRecord1.getName();
    cout << "Person 1, Enter your weight in pounds: ";
    cin >> weight1;
    myRecord1.setWeight(weight1);
    cout << "Person 1, Enter your height in inches: ";
    cin >> height1;
    myRecord1.setHeight(height1);
    float bmi1 = myRecord1.computeBMI();
    cout << name1 << ", your BMI is: " << bmi1 << endl;
    
    cout << "Person 2, What is your name? ";
    getline(cin >> ws, bName);
    myRecord2.setName(bName);
    string name2 = myRecord2.getName();
    cout << "Person 2, Enter your weight in pounds: ";
    cin >> weight2;
    myRecord2.setWeight(weight2);
    cout << "Person 2, Enter your height in inches: ";
    cin >> height2;
    myRecord2.setHeight(height2);
    float bmi2 = myRecord2.computeBMI();
    cout << name2 << ", your BMI is: " << bmi2 << endl;
    
    if (myRecord1.computeBMI() > myRecord2.computeBMI()) {
        cout << "Looks like " << name2 << " knows how to work that keto diet!" << endl;
    }
    if (myRecord2.computeBMI() > myRecord1.computeBMI()) {
        cout << "Looks like " << name1 << " knows how to work that keto diet!" << endl;
    }
    if (myRecord1.computeBMI() ==  myRecord2.computeBMI()) {
        cout << "You both are neck and neck!" << endl;
    }
    return 0;
}
