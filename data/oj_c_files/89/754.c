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
    int i,n,p,count=0,e=0;
    int a[10000],b[10000],c[10000],d[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    c[i]=0;
    }
    for(i=0;i<10000;i++)
    {
                        scanf("%d %d",&a[i],&b[i]);
                        e++;
                        if(a[i]==0&&b[i]==0)
                        break;
    }
    for(i=0;i<e;i++)
    {
                    p=b[i];
                    c[p]++;
                    p=a[i];
                    c[p]=-10000;
    }
    for(i=0;i<n;i++)
    {
                    if(c[i]==n-1)
                    {
                               printf("%d\n",i);
                               count=1;
                    }
    }
    if(count==0)
    {
                printf("NOT FOUND");
    }
    return 0;
}