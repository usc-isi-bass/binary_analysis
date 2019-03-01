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
int k,n,i,j;double a[100]={0},sum,s2;
scanf("%d",&k);
while(k--)
{
scanf("%d",&n);sum=s2=0;
for(i=0;i<n;i++)
{scanf("%lf",&a[i]);sum+=a[i];}
sum/=n;
for(i=0;i<n;i++)
s2+=(a[i]-sum)*(a[i]-sum);
s2/=n;
printf("%.5lf\n",sqrt(s2));
}
return 0;
}
