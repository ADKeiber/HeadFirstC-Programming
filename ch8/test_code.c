/**
 * Tests checksum and encrypt
 * Taken from 'Head First C'
 */
#include <stdio.h>
#include "C:\MinGW\include\encrypt.h"
#include "C:\MinGW\include\checksum.h"

int main() {
    char s[] = "Speak friend and enter";
    encrypt(s);
    printf("Encrypted to '%s'\n", s);
    printf("Checksum is %i\n", checksum(s));
    encrypt(s);
    printf("Encrypted to '%s'\n", s);
    printf("Checksum is %i\n", checksum(s));
    return 0;
}