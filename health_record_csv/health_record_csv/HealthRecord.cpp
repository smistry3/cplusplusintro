//
//  HealthRecord.cpp
//  health_record_csv
//
//  Created by Samheeta Mistry on 12/3/20.
//

#include "HealthRecord.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

HealthRecord::HealthRecord(string personName) {
    pName= personName;
    pHeight = 1;
    pWeight = 0;
};
void HealthRecord::setName(string personName) {
    pName = personName;
}
string HealthRecord::getName() const {
    return pName;
}
void HealthRecord::setWeight(float personWeight) {
    pWeight = personWeight;
}
float HealthRecord::getWeight() const{
    return pWeight;
}
void HealthRecord::setHeight(float personHeight) {
    pHeight = personHeight;
}
float HealthRecord::getHeight() const {
    return pHeight;
}
float HealthRecord::computeBMI() {
    return  (pWeight/2.20462) /((pHeight*0.0254)*(pHeight*0.0254));
};
void HealthRecord::outputCSV(std::ofstream& outputFile) {
    outputFile << pName << ", ";
    outputFile << pWeight << ", ";
    outputFile << pHeight << ", ";
    outputFile << fixed<<setprecision(2) << computeBMI() << "\r\n";
    return;
}
