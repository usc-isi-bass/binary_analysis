#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_short(short *d, int n, FILE * fp)
{
    int err;
    if (n <= 0) return 0;
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(short), (xdrproc_t) xdr_short);
    return err ? 0 : err;
}