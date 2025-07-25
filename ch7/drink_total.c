/* 
*  Gets the total amount for any number of drinks using a variatic function.
*  Taken from 'Head First C'
*/
#include <stdio.h>
#include <stdarg.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAD, ZOMBIE
};

double price(enum drink d) {
    switch(d) {
        case MUDSLIDE:
            return 6.79;
        case FUZZY_NAVEL:
            return 5.31;
        case MONKEY_GLAD:
            return 4.82;
        case ZOMBIE:
            return 5.89;
    }
    return 0;
}

double total(int args, ...) {
    double total = 0;
    va_list ap;
    va_start(ap, args);
    int i;

    for( i=0; i<args; i++ ) {
        total += price(va_arg(ap, enum drink));
    }

    va_end(ap);
    return total;
}

int main() {
    printf("Price is %.2f\n", total(2,MONKEY_GLAD,MUDSLIDE));
    printf("Price is %.2f\n", total(3,MONKEY_GLAD,MUDSLIDE,FUZZY_NAVEL));
    printf("Price is %.2f\n", total(1,ZOMBIE));
    return 0;
}