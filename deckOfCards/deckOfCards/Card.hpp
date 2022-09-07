//
//  Card.hpp
//  deckOfCards
//
//  Created by Samheeta Mistry on 10/30/20.
//

#ifndef Card_hpp
#define Card_hpp
#include <array>

class Card {
public:
    Card(int cardFace, int cardSuit);
    int getFace();
    int getSuit();
    std::string toString() const;
private:
    int face;
    int suit;
    static const std::string faceName[13];
    static const std::string suitName[4];
};
#endif /* Card_hpp */
