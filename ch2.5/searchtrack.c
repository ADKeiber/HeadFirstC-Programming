/*
* Allows a user to get a track based on a string it contains
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med school",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[]) {
    int i;
    for(i = 0; i < 5; i++){
        if(strstr(tracks[i], search_for)){
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
            
    }
}

int main() {
    char search_for[80];

    printf("Search for: ");
    fgets(search_for, 80, stdin);

    //Need to trim newline
    search_for[strcspn(search_for, "\n")] = '\0';

    find_track(search_for);

    return 0;
}