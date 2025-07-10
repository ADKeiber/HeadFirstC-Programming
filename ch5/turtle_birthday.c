/*
* Creates a turtle struct then increments its age
* Taken from 'Head First C' written by David and Dawn Griffiths (test)
*/
#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday(turtle *t) {
    t->age = t->age + 1;
    printf("Happy Birthday %s! You are not %i years old!\n", t->name, t->age);
}

int main() {
    turtle myrtle = {"Myrtle", "Leather back sea turtle", 99};
    happy_birthday(&myrtle);
    printf("%s's age is now %i\n", myrtle.name, myrtle.age);
    return 0;
}