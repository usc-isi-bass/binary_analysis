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
    int n,m,l,k,t,i,j,x,y;
    int a[1000],b[1000];
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        l=n;n=m;m=l;
    }
    a[0]=0;
    k=1;
    a[k]=n;
    while(n!=1)
    {
        k=k+1;
        a[k]=n=n/2;
    }
    b[0]=1;
    t=1;
    b[t]=m;
    while(m!=1)
    {
        t++;
        b[t]=m=m/2;
    }
    for(i=k;i>=k-t;i--)
    {
        if(a[i]==b[i+t-k]&&a[i-1]!=b[i+t-k-1])
        {
            x=a[i];
            break;
        }
    }
    printf("%d",x);
}