//
//  DeckOfCards.cpp
//  cardGame
//
//  Created by Samheeta Mistry on 11/6/20.
//

#include "DeckOfCards.hpp"
#include <new>
using namespace std;
DeckOfCards::DeckOfCards() {
    for ( int face = 0; face < 13 ; ++face ) {
        for ( int suit = 0; suit < 4 ; ++suit) {
            fullDeck.emplace_back(new Card{face, suit});
        }
        
        currentCard = 0;
    }
    }
    void DeckOfCards::shuffle() {
        size_t i{0};
        for (; i<fullDeck.size(); ++i) {
            size_t random_1 = rand()%52;
            size_t random_2 = rand()%52;
            Card * temp = fullDeck[random_1];
            fullDeck[random_1] = fullDeck[random_2];
            fullDeck[random_2] = temp;
        }
        currentCard = 0;
    }
    Card * DeckOfCards::dealCard() {
        return fullDeck[currentCard++];
    }
    Card * DeckOfCards::getCard(size_t cardIndex) {
        return fullDeck[cardIndex];
    }
    bool DeckOfCards::moreCards() const{
        return currentCard < fullDeck.size();
    }
    
    
