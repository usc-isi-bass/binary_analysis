#include <stdio.h>
#include <stdlib.h>

void read_float(FILE *file, float *dest)
{
    fread(dest, 4, 1, file);
}