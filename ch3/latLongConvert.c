/*
* Allows a user to get convert longitude and latitude to a different format
* Taken from 'Head First C' written by David and Dawn Griffiths
*/

#include <stdio.h>

int main() {
    
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info ) == 3) {
        if (started) 
            printf(",\n");
        else
            started = 1;
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }

    puts("\n]");
    return 0;
}