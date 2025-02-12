#ifndef CARD_H
#define CARD_H

class Card {
private:
    char rank;
    char suit;

    int getRankValue(char rank);

public:
    Card();
    Card(char r, char s);
    void displayCard();
    int compareCard(Card other);
};

#endif