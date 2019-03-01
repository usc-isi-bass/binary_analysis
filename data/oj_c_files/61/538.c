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
    int n;
    int i;
    int a[N],b;

    a[1]=1;
    a[2]=1;

    for(i=3;i<=N;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        printf("%d\n",a[b]);
    }

    return 0;
}