/*
* Three card monte program
* Taken from 'Head First C' written by David and Dawn Griffiths
*/

#include <stdio.h>

int main() {

    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);

    return 0;

}