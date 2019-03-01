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

double area(double a,double b,double c,double d,double p)
{
       double s=(a+b+c+d)/2;
       double PI=3.1415926;
       double S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(p*PI/360)*cos(p*PI/360));
       return S;
}
main()
{
      double a,b,c,d,p,S;
      double PI=3.1415926;
      scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&p);
      double s=(a+b+c+d)/2;
      double m=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(p*PI/360)*cos(p*PI/360);
      if(m<0)
      {
             printf("Invalid input");
      }
      else
      {
          S=area(a,b,c,d,p);
          printf("%.4lf",S);          
      }
}
