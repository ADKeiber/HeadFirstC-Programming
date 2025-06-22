/*
* Gets gps data from a file and prints out the data that is in the bermuda rectangle (triangle)
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];

    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if( latitude > 26 && latitude < 34 && longitude > -76 && longitude < -64)
            printf("%f,%f,%s\n", latitude, longitude, info);
    }
}