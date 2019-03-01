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
    int n,k,a[1000],i,m,s;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {
            if((a[i]+a[m])==k&&a[i]!=a[m])
            {
                s=1;
            }
        }
    }
    if(s==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;}



