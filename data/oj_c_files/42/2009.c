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

int main(void)
{
    int n, i,j, a[m], b;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &b);

    for(i=0; i<n; i=i+1)
    {
        if (a[i]==b)
        {
            for(j=i; j<n-1; j=j+1)
                a[j]=a[j+1];
            n=n-1;
            i=i-1;
        }
    }
    for(i=0; i<n-1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n-1]);
    return 0;
}