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
    int m,k,n,a[300],i,j,h;
    scanf("%d%d",&n,&m);
    do
    {
    for(j=1;j<=n;j++)
        a[j]=j;
        k=1;
        for(i=1;i<=n-1;i++)
        {
            k=k+m-1;
            while(k>(n-i+1))
            k=k-n+i-1;
            if(k==(n-i+1))
                a[k]=a[k+1];
            else
            {
            for(h=k;h<=n-i;h++)
            a[h]=a[h+1];
            }
        }
    printf("%d\n",a[1]);
        scanf("%d%d",&n,&m);
    }
    while(n!=0);
    return 0;
}