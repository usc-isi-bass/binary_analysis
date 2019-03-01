#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_float(float *d, int n, FILE * fp)
{
    int err;
    if (n <= 0) return 0;
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(float), (xdrproc_t) xdr_float);
    return err ? 0 : err;
}
