//
//  main.cpp
//  cardGame
//
//  Created by Samheeta Mistry on 11/6/20.
//

#include <iostream>
#include <iomanip>
#include "Card.hpp"
#include "DeckOfCards.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "Samheeta Mistry \t\t CIST 004A" << endl;
    unsigned int userWinCt{0}, compWinCt{0}, cardIndex;
    DeckOfCards newDeck;
    newDeck.shuffle();
    do {
        cout << "The current score is: " << endl;
        cout << "You: " << userWinCt << "\t" << "Computer: "  << compWinCt << endl;
        do {
            cout << "Enter a card number from 0 to 51: " ;
            cin >> cardIndex;
        } while (cardIndex > 51 || cardIndex < 0);
        Card * userVal = newDeck.getCard(cardIndex);
        Card * compVal = newDeck.getCard(rand()%52); 
        cout << "Your selected card is " << userVal->toString() << endl;
        cout << "The computer selected " << compVal->toString() << endl;
        if (*userVal > *compVal) {
            cout << "You won this round." << endl;
            userWinCt += 1;
        }
        else if (*userVal < *compVal) {
            cout << "You lost this round." << endl;
            compWinCt += 1;
        }
        
    } while ((compWinCt < userWinCt + 2) && (userWinCt < compWinCt + 2));
    cout << "The current score is: " << endl;
    cout << "You: " << userWinCt << "\t" << "Computer: "  << compWinCt << endl;
    if (compWinCt > userWinCt) {
        cout << "You lost this game." << endl;
    }
    else if (userWinCt > compWinCt) {
        cout << "You won this game." << endl;
    }
    else {
        cout << "It is a tie!" << endl;
    }
    return 0;
}
