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
    int N, a[500], i, j=0, z, b[500], sum, temp;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j=j+1;
        }
    }
    sum=j;
    for(i=0;i<sum;i++)
    {
        for(z=i+1;z<sum;z++)
        {
            if(b[i]>b[z])
            {
                temp=b[i];
                b[i]=b[z];
                b[z]=temp;
            }
        }
    }
    for(i=0;i<sum;i++)
    {
        printf("%d",b[i]);
        if(i<(sum-1))
            printf(",");
    }
    return 0;
}

