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

void inv(int[],int,int);
void main()
{
    int a[100],n,m,i,*p=a;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",p++);
    p=a;inv(p,n,m);
    for(i=0;i<n-1;i++)
        printf("%d ",*(p+i));
    printf("%d",*(p+n-1));
}
void inv(int p[],int n,int m)
{
    int b[100],i;
    for(i=0;i<n-m;i++)
        b[i]=p[i];
    for(i=n-m;i<n;i++)
        p[i-n+m]=p[i];
    for(i=0;i<n-m;i++)
        p[i+m]=b[i];
}