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
   int n,i,j;
   double a[100],b[100],max=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%lf%lf",&a[i],&b[i]);
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
	  {
	     if((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])>max)max=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
	  }
   }
   max=sqrt(max);
   printf("%.4f\n",max);
}