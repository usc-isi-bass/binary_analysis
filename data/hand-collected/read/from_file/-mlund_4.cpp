#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_charstr(char *d, FILE * fp)
{
    int err, n;
    n = strlen(d) + 1;
    xdr_int(&xdrs, &n);
    err = xdr_vector(&xdrs, (char *) d, n, sizeof(char), (xdrproc_t) xdr_char);
    return err ? 0 : err;
}
