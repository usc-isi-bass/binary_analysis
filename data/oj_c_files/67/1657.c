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
int n,a[10000],b[10000],i;
double c[10000],m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i],&b[i]);
c[i]=1.0*b[i]/a[i];
}
for(i=1;i<n;i++)
{
m=c[i]-c[0];
if(m>0.05) printf("better\n");
if(m+0.05<0) printf("worse\n");
if(m<=0.05&&m+0.05>=0) printf("same\n");
}
return 0;
}