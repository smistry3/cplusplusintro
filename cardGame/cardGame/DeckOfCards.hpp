//
//  DeckOfCards.hpp
//  cardGame
//
//  Created by Samheeta Mistry on 11/6/20.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp
#include <vector>
#include <iostream>
#include "Card.hpp"
class DeckOfCards {
public:
   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   Card * dealCard(); // deals a card from the deck
   Card * getCard(size_t cardIndex); // get the cards at the specified index from the deck
   bool moreCards() const; // are there any more cards left
private:
   std::vector <Card *> fullDeck; // represents deck of cards
   size_t currentCard; // index of next card to be dealt
};

#endif /* DeckOfCards_hpp */
