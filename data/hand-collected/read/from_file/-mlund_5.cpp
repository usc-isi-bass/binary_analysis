#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_char(char *d, int n, FILE * fp)
{
    int err;
    if (n <= 0) return 0;
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(char), (xdrproc_t) xdr_char);
    return err ? 0 : err;
}