/*
* Gets gps data from a file and prints out the data that is in the bermuda rectangle (triangle)
* Taken from 'Head First C' written by David and Dawn Griffiths
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char line[80];
    if(argc != 6){
        fprintf(stderr, "You need to give 5 arguemnts\n");
        return 1;
    }
    FILE *in;
    FILE *file1;
    FILE *file2;
    FILE *file3;

    if(!(in = fopen("spooky.csv", "r"))) {
        fprintf(stderr, "Cant open the spooky file.\n");
        return 1;
    }  
    if(!(file1 = fopen(argv[2], "w"))) {
        fprintf(stderr, "Cant open the first file.\n");
        return 1;
    }
    if(!(file2 = fopen(argv[4], "w"))) {
        fprintf(stderr, "Cant open the second file.\n");
        return 1;
    }
    if(!(file3 = fopen(argv[5], "w"))) {
        fprintf(stderr, "Cant open the third file.\n");
        return 1;
    }
    
    while(fscanf(in, "%79[^\n]\n", line) == 1) {

        if (strstr(line, argv[1])) 
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[3]))
            fprintf(file2, "%s\n", line);
        else 
            fprintf(file3, "%s\n", line);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
    
}