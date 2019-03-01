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

double f(double a,double b,double c,double d,double w )
{
       double q;
       q=w/2.0* 3.1415926/180.0;
       double s,ss;
       s=(a+b+c+d)/2.0;
       ss=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q));
       return (ss);
}
main()
{
     double a;
     double b;
     double c;
     double d;
     double w;
     double z,s; 
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
     scanf("%lf",&d);
     scanf("%lf",&w);
     s=(a+b+c+d)/2.0; 
      double q,g;
       q=w/2.0*3.1415926/180.0;
     z=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q);
     if(z<0)
     {
            printf("Invalid input");
     }
     else
     {
         g=f(a,b,c,d,w);
     printf("%.4lf",g);
     }
     getchar();
     getchar();
}
