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
int i,n,k,j,m=0;
scanf("%d%d",&n,&k);
int a[1000000],b[1000000];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=k-a[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
m=m+1;
}
if(b[i]!=a[j])
{
m=m;
}
}
}
if(m!=0)
{
printf("yes\n");
}
if(m==0)
{
printf("no\n");
}
}