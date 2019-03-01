#include <stdio.h>
#include <stdlib.h>

void read_int(FILE *file, int *dest)
{
    fread(dest, 4, 1, file);
}
