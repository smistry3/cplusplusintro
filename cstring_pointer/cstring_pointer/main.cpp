//
//  main.cpp
//  cstring_pointer
//
//  Created by Samheeta Mistry on 10/24/20.
//  Copyright © 2020 Samheeta Mistry. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int countCharacters(char *sPtr) {
    unsigned int count {0};
    for ( ; *sPtr!= '\0'; ) {
        sPtr++;
        count++;
    }
    return count;
}
int countVowels(char *sPtr) {
    int counter{0};
    for (; *sPtr!='\0'; sPtr++) {
        switch (toupper(*sPtr)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++counter;
        }
    }
    return counter;
}
void firstUpper(char *sPtr){
    *sPtr = toupper(*sPtr);
    for (; *sPtr!='\0'; sPtr++) {
        if (*sPtr == ' ') {
            *(sPtr+1) = toupper(*(sPtr+1));
        }
    }
    return;
}
void shoutWords(char *sPtr) {
    for ( ; *sPtr!= '\0'; sPtr++) {
        *sPtr = toupper(*sPtr);
    }
    return;
}
void removeExtraSpaces(char *sPtr) {
    char *dPtr{sPtr};
    for ( ; *sPtr!= '\0'; ) {
        *dPtr = *sPtr;
        while (*sPtr == ' ' && *(sPtr+1) == ' ') {
            sPtr++;
        }
        sPtr++;
        dPtr++;
    }
    *dPtr = '\0';
    return;
}

int main(int argc, const char * argv[]) {
    char myString[80];
    cout << "Samheeta Mistry \t\t CIST 004A \n";
    cout << "Enter a string: " ;
    cin.getline(myString, 80);
    cout << "There are " << countCharacters(myString) << " characters in \"" << myString << "\"."<<endl;
    cout << "There are " << countVowels(myString) << " vowels in \"" << myString << "\"."<<endl;
    cout << "If the the first letter of each word is capitalized: " ;
    firstUpper(myString);
    cout << myString << endl;
    cout << "If the entire string is capitalized: ";
    shoutWords(myString);
    cout << myString << endl;
    cout << "Without extra spaces: ";
    removeExtraSpaces(myString);
    cout << myString << endl;
    return 0;
}
