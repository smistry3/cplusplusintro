//
//  main.cpp
//  health_record_csv
//
//  Created by Samheeta Mistry on 12/3/20.
//
#include "HealthRecord.hpp"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
void getHealthRecord (HealthRecord& HR) {
    string name;
    int weight;
    int height;
    
    cout << "What is your name? ";
    getline(cin >> ws, name);
    HR.setName(name);
    
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    HR.setWeight(weight);
    
    cout << "Enter your height in inches: ";
    cin >> height;
    HR.setHeight(height);
    
    return;
}
void fileSize(string filename) {
    streampos begin, end;
    ifstream health_file (filename, ios::binary | ios::in);
    begin = health_file.tellg();
    health_file.seekg (0, ios::end);
    end = health_file.tellg();
    health_file.close();
    cout << "The size is: " << (end-begin) << " bytes.\n";
    return;
}
int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t CIST004A"<< endl;
    // if open for read, close file
    // goes before for loop
    // do while, ask for name, if open file for read, close file, then prompt again until file doesn't exist, then set file name
    string filename;
    ifstream infile;
    do {
        cout << "Name the file you would like to store the health record in: ";
        cin >> filename;
        infile.open(filename);
        if (infile) {
            cout << "File name exists. Enter a new one."<< endl; 
        }
    } while (infile);
    HealthRecord newHR{""};
    ofstream output{filename, ios::out};
    for (int i {0}; i < 10; i++) {
        if (output) {
            cout << "Input data for record #" << i+1 <<":" <<endl;
            getHealthRecord(newHR);
        // write health record info
            newHR.outputCSV(output);
        }
    }
    output.close();
    fileSize(filename);
    output.open(filename, ios::app);
    cout << "One final health record: " << endl;
    getHealthRecord(newHR);
    newHR.outputCSV(output);
    output.close();
    fileSize(filename);
    return 0;
}
