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
int a[100000];
int n,k,i,j,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
m=n;
for(i=0;i<m;i++)
{
if(a[i]==k)
{
for(j=i;j<m;j++)
a[j]=a[j+1];
    i--;
m--;
}
}
for(i=m;i<=n-1;i++)
a[i]='*';
for(i=0;i<m-1;i++)
printf("%d ",a[i]);
printf("%d",a[m-1]);
}