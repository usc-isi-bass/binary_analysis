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
   double a,b,c,ds,x1,x2;
   int i=1,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	 scanf("%lf %lf %lf",&a,&b,&c);
	 ds=b*b-4*a*c;
     if(ds>0)
	 {
      x1=(-b+sqrt(ds))/(2*a);
      x2=(-b-sqrt(ds))/(2*a);
      printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	 }
     else if (ds==0)
	 {
      x1=(-b)/(2*a);
      printf("x1=x2=%.5lf\n",x1); 
	 } 
     else 
	 {
      x1=(-b)/(2*a);
	  x2=(sqrt(4*a*c-b*b))/(2*a);
      printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);   
	 }
   }
} 