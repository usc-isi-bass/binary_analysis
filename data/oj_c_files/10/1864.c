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
int a[30],b[30],i,j,k,n,m=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
b[i]=1;
}
for(i=n-1;i>=1;i--)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>=a[j]&&b[i]<b[j]+1)
b[i]=b[j]+1;
}
if(b[i]>m)
m=b[i];
}
printf("%d",m);
}

