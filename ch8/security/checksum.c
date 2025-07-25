/*
* Checks contents of a string
* Taken from 'Head First C'
*/
#include "checksum.h"

int checksum(char *message) {
    int c = 0;
    while(*message) {
        c += c ^ (int) (*message);
        message++;
    }
    return c;
}