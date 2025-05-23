#include "Card.h"
#include <iostream>
using namespace std;

Card::Card() {
    rank = ' ';
    suit = ' ';
}

Card::Card(char r, char s) : rank(r), suit(s) {}

void Card::displayCard() {
    cout << rank << suit << " ";
}

// Compare two cards
int Card::compareCard(Card other) {
    int rank1 = getRankValue(this->rank);
    int rank2 = getRankValue(other.rank);

    if (rank1 > rank2) return 1;
    else if (rank1 < rank2) return -1;
    else return 0;
}

//helps with knowing the values of the ranks especially the ones in alphabetical form
int Card::getRankValue(char rank) {
    switch (rank) {
        case 'A': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'T': return 10;
        case 'J': return 11;
        case 'Q': return 12;
        case 'K': return 13;
        default: return 0; // for the ones that aren't valid
    }
}