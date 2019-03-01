#include <stdio.h>
#include <stdlib.h>

void read(FILE *file, size_t size, void *dest)
{
    if(dest)
        fread(dest, size, 1, file);
}