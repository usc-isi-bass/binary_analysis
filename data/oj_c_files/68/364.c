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

void main()
{
    int k,i,j;
    scanf("%d",&k);
    for(i=6;i<=k;i+=2)
    {
        for(j=3;2*j<=k;j+=2)
        {
            if(su(j)==1&&su(i-j)==1)
            {
                printf("%d=%d+%d\n",i,j,i-j);
                break;
            }
        }
    }
}
int su(int x)
{
    int i,j=1,k=x;
    if(k%2==0) j=0;
    else
    {
        for(i=3;i*i<=k;i+=2)
        {
            if(k%i==0) j=0;
        }
    }
    return j;
}