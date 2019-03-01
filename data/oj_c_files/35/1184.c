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
    int r,c,i,j,k;
    int a[8][8];
    scanf("%d,%d", &r, &c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        j = 0;
        for (k=1; k<c; k++) {
            if (a[i][j] < a[i][k]) {
                j = k;
            }
        }
        for (k=0; k<r; k++) {
            if (a[k][j] < a[i][j]) {
                break;
            }
        }
        if (k==r) {
            printf("%d+%d", i, j);
            return 0;
        }
    }
    printf("No");
    return 0;
}