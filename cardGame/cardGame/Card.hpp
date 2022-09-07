//
//  Card.hpp
//  cardGame
//
//  Created by Samheeta Mistry on 11/6/20.
//

#ifndef Card_hpp
#define Card_hpp
#include <array>
class Card {
public:
    Card( int cardFace, int cardSuit );
    std::string toString() const;
    bool operator > (const Card&);  // Plus the others as needed!
    bool operator < (const Card&);
    bool operator == (const Card&);
private:
    int face;
    int suit;
 
    static const std::string faceName[ 13 ];
    static const std::string suitName[ 4 ];
};
#endif /* Card_hpp */
