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
   double a=0,b=0,c=0,d=0,t=0;
   scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&t);
   double p=0,s=0;
   t=t/360*PAI;
   p=(a+b+c+d)/2;
   s=(p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*cos(t)*cos(t);
   if(s<0)
	   printf("Invalid input");
   else
   {
	   s=sqrt(s);
       printf("%.4lf",s);
   }
}