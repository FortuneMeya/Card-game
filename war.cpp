#include <iostream>
#include "Deck.h"
#include <string>
using namespace std;

int main() {
    Deck myDeck;
    string p1, p2;
    int p1Wins = 0, p2Wins = 0, ties = 0;

    cout << "Player 1 name: ";
    cin >> p1;
    cout << "Player 2 name: ";
    cin >> p2;

    cout << "Original Deck:" << endl;
    myDeck.displayDeck();

    myDeck.shuffle();
    cout << "Shuffled Deck:" << endl;
    myDeck.displayDeck();

    for (int i = 1; i <= 26; i++) {
        cout << "Game " << i << endl;
        cout << "------" << endl;

        Card card1 = myDeck.deal();
        Card card2 = myDeck.deal();

        cout << p1 << " : ";
        cout << p2 << " : ";
        card2.displayCard();

        int result = card1.compareCard(card2);
        if (result == 1) {
            cout << p1 << " is the winner" << endl;
            p1Wins++;
        } else if (result == -1) {
            cout << p2 << " => is the winner" << endl;
            p2Wins++;
        } else {
            cout << "Tie game" << endl;
            ties++;
        }
    }

    cout << "Final Stats:" << endl;
    cout << p1 << " vs. " << p2 << endl;
    cout << "Wins: " << p1Wins << " " << p2Wins << endl;
    cout << "Losses: " << p2Wins << " " << p1Wins << endl;
    cout << "Ties: " << ties << endl;

    return 0;
}