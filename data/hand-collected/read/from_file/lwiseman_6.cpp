#include <stdio.h>
#include <stdlib.h>

void read_string(FILE *file, char **dest)
{
    int length;

    fread(&length, 4, 1, file);
    *dest = (char*)malloc(length + 1);
    fread(*dest, length, 1, file);
    (*dest)[length] = '\0';
}