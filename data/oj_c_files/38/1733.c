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
int k,n,i,j;
scanf("%d",&k);
for(i=0;i<k;i++)
   {
       scanf("%d",&n);
       double a[n];
       for(j=0;j<n;j++)
           scanf("%lf",&a[j]);
       double x=0,y=0;
       for(j=0;j<n;j++)
         x=x+a[j];
       x=x/n;
       for(j=0;j<n;j++)
         y=y+(a[j]-x)*(a[j]-x);
       y=sqrt(y/n);
       printf("%.5lf\n",y);}
      return 0;
}