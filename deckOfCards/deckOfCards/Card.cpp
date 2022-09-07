//
//  Card.cpp
//  deckOfCards
//
//  Created by Samheeta Mistry on 10/30/20.
//
#include <iostream>
#include "Card.hpp"
using namespace std;

const string Card::faceName[13]{"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const string Card::suitName[4]{"Diamonds", "Hearts", "Spades", "Clubs"};

Card::Card(int cardFace, int cardSuit) {
    if (cardFace >=0 && cardFace <= 13) {
        face = cardFace;
    }
    if (cardSuit >=0 && cardSuit <= 4) {
        suit = cardSuit;
    }
}


int Card::getFace() {
    return face;
}


int Card::getSuit() {
    return suit;
}

string Card::toString() const {
    return faceName[face] + " of " + suitName[suit];
}



