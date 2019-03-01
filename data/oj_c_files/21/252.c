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
    float b[301],sum=0,aver;int a[301],k=0,i,n,c[2]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    aver=sum/n;
    for(i=0;i<n;i++)
    b[i]=fabs(a[i]-aver);
    sum=0;
    for(i=0;i<n;i++)
    {
         if(b[i]>sum)sum=b[i];
    }
    for(i=0;i<n;i++)
    {if(b[i]==sum)c[k]=i,k++;}
    if(c[1]==0)printf("%d",a[c[0]]);
    else printf("%d,%d",a[c[0]],a[c[1]]);scanf("%d",&n);
}
