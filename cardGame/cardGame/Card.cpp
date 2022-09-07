//
//  Card.cpp
//  cardGame
//
//  Created by Samheeta Mistry on 11/6/20.
//

#include "Card.hpp"
#include <iostream>
using namespace std;
const string Card::faceName[13]{"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
const string Card::suitName[4]{"Clubs", "Diamonds", "Hearts", "Spades"};
Card::Card(int cardFace, int cardSuit) {
    if (cardFace >=0 && cardFace < 13) {
        face = cardFace;
    }
    if (cardSuit >=0 && cardSuit < 4) {
        suit = cardSuit;
    }
}
// bool lhcard == rhcard;
//  the face and suit represent the left hand card
bool Card::operator== (const Card& RHparam){
    return ( face == RHparam.face && suit == RHparam.suit);
}
bool Card::operator> (const Card& RHparam){
    if (face == RHparam.face) {
        return suit > RHparam.suit;
    }
    else {
        return face > RHparam.face;
    }
}
bool Card::operator< (const Card& RHparam){
    if (face == RHparam.face) {
        return suit < RHparam.suit;
    }
    else {
        return face < RHparam.face;
    }
}
string Card::toString() const {
    return faceName[face] + " of " + suitName[suit];
}



