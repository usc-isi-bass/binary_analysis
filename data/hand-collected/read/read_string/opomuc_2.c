#include <stdlib.h>
#include <stdio.h>


char* read_string(FILE* program) {

    char* word = (char*) calloc (5, sizeof(char));
    int c;
    int i = 0;
    int length = 5;

    do {

        c = fgetc(program);

        if (length <= i + 1) {

            length = length * 2;
            word = (char*) realloc (word, length * sizeof(char));

        }

        word[i] = c;
        i++;

    } while (c != '\n' && c != EOF);

    word[i - 1] = '\0';

    return word;

}