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
    int a[110],b[110],i,n,m,j;
    scanf("%d%d",&n,&m);
    j=m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(j>0)
    {
       b[i]=a[n-j];
       j--;
       i++;
    }
    while(j<=0&&i<n)
    {
        b[i]=a[i-m];
        j--;
        i++;
    }
    for(i=0;i<n-1;i++)
    {
       printf("%d ",b[i]);
    }
    printf("%d",b[n-1]);
    return 0;
}
