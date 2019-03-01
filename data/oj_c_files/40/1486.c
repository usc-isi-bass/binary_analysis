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

double mjs(double a,double b,double c,double d,double r)
{
  double s;
	s=(a+b+c+d)/2;
    return (s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(3.1415926*r/360),2);
}
 double mjS(double a,double b,double c,double d,double r)
{
   double s;
   s=(a+b+c+d)/2;
  return sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(3.1415926*r/360),2));	
}
 int main ()
 {
   double a,b,c,d,r;
   scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&r);
   if(mjs(a,b,c,d,r)<0)
	   printf("Invalid input\n");
	  else    printf("%.4lf\n",mjS(a,b,c,d,r));
	  return 0;
 }
	 