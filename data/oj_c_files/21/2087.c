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
int a[300];
int n,i,j;long s=0;
float b,t,k[300];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
}
b=(double)s/n;
t=fabs(a[0]-b);
for(i=0;i<n;i++)
{
k[i]=fabs(a[i]-b);
if(k[i]>t)
t=k[i];
}
for(i=0;i<n;i++)

if(k[i]==t)
{printf("%d",a[i]);
j=i+1;
break;
}
for(i=j;i<n;i++)
if(k[i]==t)
printf(",%d",a[i]);
}
