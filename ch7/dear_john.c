/*
* Dear john automater
* Taken from 'Head First C'
*/
#include <stdio.h>

enum response_type {DUMP, SECOND_CHANGE, MARRIAGE};
typedef struct {
    char *name;
    enum response_type type;
} response;

void dump(response r) {
    printf("Dear %s,\n", r.name);
    puts("Unfortunately your last date contacted us to");
    puts("say that they will not be seeing you again");
}

void second_chance(response r) {
    printf("Dear %s,\n", r.name);
    puts("Good news: your last date has asked us to");
    puts("arrange another meeting. Please call ASAP.");
}

void marriage(response r) {
    printf("Dear %s,\n", r.name);
    puts("Congratulations! Your last date has contacted");
    puts("us with a proposal of marriage.");
}

void (*replies[]) (response) = {dump, second_chance, marriage};

int main() {
    response r[] = {{"Mike", DUMP}, {"Luis", SECOND_CHANGE}, {"Matt", SECOND_CHANGE}, {"Mike", MARRIAGE}};
    int i;
    for(i=0; i < 4; i++) {
        replies[r[i].type](r[i]);
    }
    return 0;
}