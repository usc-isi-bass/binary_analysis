#include <stdio.h>
#include <stdlib.h>

void read_char(FILE *file, char *dest)
{
    fread(dest, 1, 1, file);
}
