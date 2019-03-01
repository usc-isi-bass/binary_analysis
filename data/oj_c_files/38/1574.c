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
int n,i,j,k;
double a[1000],sum=0.0,average,b[1000],s=0.0,m,u;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&j);
  for(k=0;k<j;k++)
  scanf("%lf",&a[k]);
   for(k=0;k<j;k++)
   sum+=a[k];
average=(double)sum/j;
for(k=0;k<j;k++)
{b[k]=a[k]-average;
s+=b[k]*b[k];}
m=(double)s/j;
u=sqrt(m);
printf("%.5f\n",u);
sum=0; s=0;
}
return 0;
}
