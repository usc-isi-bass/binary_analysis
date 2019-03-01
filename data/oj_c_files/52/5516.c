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
    int n,m,num[220],i,j;
    scanf("%d%d",&n,&m);
    j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=n;i<n+n-m;i++)
    {
        num[i]=num[j];
        j=j+1;
    }

    printf("%d",num[n-m]);
    for(i=n-m+1;i<n+n-m;i++)
    {
        printf(" %d",num[i]);
    }
    return 0;
}
