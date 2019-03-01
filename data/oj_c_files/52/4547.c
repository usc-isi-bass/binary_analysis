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
    void f(int *p,int n,int m);
    int a[50],n,m,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    f(a,n,m);    
    for(i=1;i<n;i++)
    printf("%d ",a[i]);
    printf("%d\n",a[n]);
}

void f(int *p,int n,int m)
{
    int i,t,*q;
    for(i=1;i<=m;i++)
    {
       t=*(p+n);
       for(q=p+n;q>p+1;q--)
       *q=*(q-1);     
       *q=t;
    }
}
