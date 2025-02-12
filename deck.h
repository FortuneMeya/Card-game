#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
private:
    Card cards[52];
    int top;

public:
    Deck();
    Card deal();
    void displayDeck();
    void shuffle();
};

#endif