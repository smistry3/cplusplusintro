//
//  DeckOfCards.hpp
//  deckOfCards
//
//  Created by Samheeta Mistry on 10/30/20.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp
#include <vector>
#include "Card.hpp"

class DeckOfCards {
private:
    std::vector <Card> fullDeck;
    std::size_t currentCard;
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
};
#endif /* DeckOfCards_hpp */
