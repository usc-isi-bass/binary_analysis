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

int main()
{
    int mountain[22][22],j,k,m,n;
    scanf("%d %d",&m,&n);
    for (j=0; j<m+2; j++) {
        mountain[j][0]=-1;
        mountain[j][n+1]=-1;
    }
    for (k=1; k<n+1; k++) {
        mountain[0][k]=-1;
        mountain[m+1][k]=-1;
    }
    for (j=1; j<m+1; j++) {
        for (k=1; k<n+1; k++) {
            scanf("%d",&mountain[j][k]);
        }
    }
    for (j=1; j<m+1; j++) {
        for (k=1; k<n+1; k++) {
            if (comp(mountain[j][k],mountain[j-1][k],mountain[j+1][k],mountain[j][k-1],mountain[j][k+1])) {
                printf("%d %d\n",j-1,k-1);
            }
        }
    }
}