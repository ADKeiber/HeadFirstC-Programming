/*
* Gets a secret message from a user input
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include <stdio.h>

int main() {
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
        i++;
        if (i % 2 )
            fprintf(stdout, "%s\n", word);
        else
            fprintf(stderr, "%s\n", word);
    }
    return 0;
}