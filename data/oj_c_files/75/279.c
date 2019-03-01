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
    int a[SIZE], l[SIZE], i=1, j, k, t, min, max, maxn;
    scanf("%d", &a[0]);
    min = a[0];
    while (scanf(",%d",&a[i++])==1);
    {
        if (a[i-1]<min) min=a[i-1];
    }

    scanf("%d", &l[0]);
    max = l[0];

    for (j=1;j<i;j++)
    {
        scanf(",%d",&l[j]);
        if (l[j]>max) max=l[j];}
   //printf("[%d][%d]\n",min,max);
        maxn=0;

        for (k=min;k<=max;k++)
        {
            t=0;
            for (j=0;j<i;j++)
                if ((k>=a[j])&&(k<l[j]))
                    t++;

            if (t>maxn)
                maxn=t;
        }


    printf("%d %d", i-1, maxn);
    return 0;
}
