#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_int(int *d, int n, FILE * fp)
{
    int err;
    if (n <= 0) return 0;
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(int), (xdrproc_t) xdr_int);
    return err ? 0 : err;
}
