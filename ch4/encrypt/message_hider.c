/*
* Hides messages
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include <stdio.h>
#include "encrypt.h"

int main() {

    char msg[80];
    
    while(fgets(msg, 80, stdin)) {
        encrypt(msg);
        printf("%s", msg);
    }
}