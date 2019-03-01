#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, const char * argv[])
{
    int n;
    scanf("%d", &n);
    int od[n], i;
    for (i=0; i<n; i++) {
        scanf("%d", &(od[i]));
    }
    int abod[n], j, k;
    for (j=0; j<n; j++) {
        abod[j]=od[n-j-1];
    }
    for (k=0; k<n-1; k++) {
        printf("%d ", abod[k]);
    }
    printf("%d", abod[n-1]);
    return 0;
}
