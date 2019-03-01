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
    int n,i,j,k;
    scanf("%d",&n);
    for(i=3;i<=n/2;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0) break;
        for(k=2;k<n-i;k++)
            if((n-i)%k==0) break;
        if(j==i && k==n-i)
           printf("%d %d\n",i,n-i);
    }
    getchar();
    getchar();
}