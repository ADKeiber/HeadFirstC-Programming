/*
* Gets encrptys a message
* Taken from 'Head First C' written by David and Dawn Griffiths (test)
*/
#include "encrypt.h"

void encrypt(char *message) {
    char c;
    while(*message) {
        *message = *message ^ 31;
        message++;
    }
}