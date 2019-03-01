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
    int i,t,j,k,s=0;
    int a[17];
    for(scanf("%d",&a[1]);a[1]!=-1;scanf("%d",&a[1]))
    {
    for(i=2;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            t=i-1;
            break;
        }        
    }
    for(j=1;j<=t;j++)
    {
        for(k=1;k<=t;k++)
        {
            if(a[j]==2*a[k])
            s=s+1;
        }
    }
    printf("%d\n",s);
    s=0;
    }
    return 0;
}