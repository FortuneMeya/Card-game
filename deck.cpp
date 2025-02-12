#include "Deck.h"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <iostream>
using namespace std;

Deck::Deck() {
    char suits[] = {'C', 'D', 'H', 'S'};
    char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    int index = 0;

    for (char s : suits) {
        for (char r : ranks) {
            cards[index++] = Card(r, s);
        }
    }
    top = 0;
}

Card Deck::deal() {
    if (top >= 52) {
    }
    return cards[top++];
}

void Deck::displayDeck() {
    for (int i = 0; i < 52; i++) {
        cards[i].displayCard();
        if ((i + 1) % 13 == 0) cout << endl;
    }
}

// shuffling the deck
void Deck::shuffle() {
    srand(time(0));
    for (int i = 51; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(cards[i], cards[j]);
    }
}