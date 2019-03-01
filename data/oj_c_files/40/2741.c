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
   double a,b,c,d,s;
   double e;
   scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
   scanf("%lf",&e);
   s=(a+b+c+d)/2;
   double p=3.1415926;
   double q;
   if(s-a>0 && s-b>0 && s-c>0 && s-d>0)
{
   q=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*p/360)*cos(e*p/360));
   printf("%.4lf\n",q);
}
   else  printf("Invalid input\n");
   return 0;
} 
   