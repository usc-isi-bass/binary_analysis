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
   int n,i;
   double l,a[100],b[100],c[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%lf %lf",&a[i],&b[i]);
   }
   for(i=0;i<n;i++)
   {
	   c[i]=1.0*b[i]/a[i];
   }
   for(i=0;i<n-1;i++)
   {
	   l=c[i+1]-c[0];
	   if(l>0.05)
	   {
		   printf("better\n");
		
	   }
	   else if(l<-0.05)
	   {
		   printf("worse\n");
	   }
	   else
	   {
		   printf("same\n");
	   }
   }
   return 0;
}