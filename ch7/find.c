/**
 * Looks through strings and filters them
 * Taken from "Head first C"
 */
#include <string.h>
#include <stdio.h>

int NUM_ADS = 7;
char *ADS[] = {
    "William: SBM GSOH likes sports, TV, dining",
    "Matt: SWM NS likes art, movies, threater",
    "Luis: SLM ND likes books, theater, art",
    "Mike: DWM DS likes trucks, sports and bieber",
    "Peter: SAM likes chess, working out and art",
    "Josh: SJM likes sports, movies and theater",
    "Jed: DBM likes theater, books and dining"
};

int sports_no_bieber(char *s) {
    return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s) {
    return strstr(s, "sports") || strstr(s, "working out");
}

int ns_theater(char *s) {
    return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s) {
    return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining");
}

void find(int (*match)(char*)) {
    int i;
    puts("Search Results:");
    puts("----------------------------------------------");
    for(i = 0; i < NUM_ADS; i++){
        if(match(ADS[i]))
            printf("%s\n", ADS[i]);
    }
    puts("----------------------------------------------");
}

int main() {
    find(sports_no_bieber);
    find(sports_or_workout);
    find(ns_theater);
    find(arts_theater_or_dining);
    return 0;
}