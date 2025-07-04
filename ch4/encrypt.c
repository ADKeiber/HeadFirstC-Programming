/*
* Gets encrptys a message
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include "encrypt.h"

void encrypt(char *message) {
    char c;
    while(*message) {
        *message = *message ^ 31;
        message++;
    }
}