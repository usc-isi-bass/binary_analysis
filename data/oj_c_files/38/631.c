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
int n,k,i,j;
double x[100],sum,a,s;
scanf("%d",&k);

for(i=0;i<k;i++)
{

scanf("%d",&n);
sum=0;
for(j=0;j<n;j++)
{
scanf("%lf",&x[j]);
sum=sum+x[j];
}

a=sum/n;
s=0;
for(j=0;j<n;j++)
{
s=s+(x[j]-a)*(x[j]-a);
}
s=sqrt(s/n);
printf("%.5f\n",s);
}
return 0;
}

