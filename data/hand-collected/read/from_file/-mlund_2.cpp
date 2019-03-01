#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_double(double *d, int n, FILE * fp)
{
    int err;
    if (n <= 0) return 0;
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(double), (xdrproc_t) xdr_double);
    return err ? 0 : err;
}
