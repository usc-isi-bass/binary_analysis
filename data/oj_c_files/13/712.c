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
    int n,i,j,k,b,t;
    int a[20000];
    scanf("%d",&n);
    k=0;
    for (i=0;i<n;i++)
    {
        j=1;
        scanf("%d",&b);
        for (t=0;t<k;t++)
        {
            if (b==a[t])
               j=0;
        }
        if (j==1)
        {
            a[k]=b;
            k++;
            if (k==1)
               printf("%d",b);
            else
               printf(" %d",b);
        }
    }
    getchar();
    getchar();
}