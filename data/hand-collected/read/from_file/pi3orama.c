#include <stdio.h>
#include <stdlib.h>

static void
read_from_file(FILE * fp, void * data, size_t sz)
{
    int err = fread(data, sz, 1, fp);
    if (err != 1) {
        if (err != 0)
            return;
        else
            return;
    }
}