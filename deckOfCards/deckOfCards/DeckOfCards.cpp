//
//  DeckOfCards.cpp
//  deckOfCards
//
//  Created by Samheeta Mistry on 10/30/20.
//
#include "Card.hpp"
#include "DeckOfCards.hpp"
using namespace std;
DeckOfCards::DeckOfCards() {
    for ( int face = 0; face < 13 ; ++face ) {
        for ( int suit = 0; suit < 4 ; ++suit) {
            Card myCard( face, suit );
            fullDeck.emplace_back(myCard);
        }
    }
    currentCard = 0;
}
void DeckOfCards::shuffle() {
    size_t i{0};
    for (; i<fullDeck.size(); ++i) {
        size_t random_1 = rand()%52;
        size_t random_2 = rand()%52;
        Card temp = fullDeck[random_1];
        fullDeck[random_1] = fullDeck[random_2];
        fullDeck[random_2] = temp;
    }
    currentCard = 0;
}
Card DeckOfCards::dealCard() {
    return fullDeck[currentCard++];
}
bool DeckOfCards::moreCards(){
    return currentCard < fullDeck.size();
}
