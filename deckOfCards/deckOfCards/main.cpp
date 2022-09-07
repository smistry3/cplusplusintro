//
//  main.cpp
//  deckOfCards
//
//  Created by Samheeta Mistry on 10/30/20.
//

#include <iostream>
#include <iomanip>
#include "Card.hpp"
#include "DeckOfCards.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    DeckOfCards newDeck;
    newDeck.shuffle();
    for (int count{1}; newDeck.moreCards(); count++) {
        cout << setw(25) << left<< newDeck.dealCard().toString() ;
        if (count % 4 == 0) {
            cout << endl;
        }
    }
    return 0;
}
