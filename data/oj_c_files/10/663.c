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
    int max=0,i,j,n,maxb,num=0,s,a[30],b[30];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    b[0]=1;
    for(i=1; i<n; i++)
    {
        max=0;
        s=0;
        for(j=0; j<i; j++)
        {
            if((a[j]>=a[i])&&(b[j]>=max))
            {
                b[i]=b[j]+1;
                max=b[j];
                s=1;
            }
        if(s==0)
            {
                b[i]=1;
            }
        }
    }
    maxb=0;
    for(i=0; i<n; i++)
    {
        //printf("%d ",b[i]);
        if(b[i]>maxb)
        {
            maxb=b[i];
        }
    }
    printf("%d\n",maxb);
    return 0;
}
