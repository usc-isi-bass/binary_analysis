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
        double f(double,double,double,double,double);
        double a,b,c,d,x,y,s;
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        scanf("%lf",&d);
        scanf("%lf",&x);
        y=f(a,b,c,d,x);
        if (y>=0)
               { s=sqrt (y);
                 printf("%.4lf",s);
                }
        else
               printf("Invalid input\n");
}
double f(double a,double b,double c,double d,double x)
{
        double s,y,PI=3.1415926;
        s=(a+b+c+d)/2;
        x=(x/360)*PI;
        y=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x));
        return(y);
}
         