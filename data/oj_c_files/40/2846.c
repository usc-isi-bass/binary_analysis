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

double pi=3.1415926;
int main()
{
    double sq(double a,double b,double c,double d,double o);
    double a,b,c,d,j,o;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&j);
    double q,p,s;
    o=j*pi/180;
    o=o/2;
    s=(a+b+c+d)/2;
    p=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o)*cos(o);
    if(p<0){
            printf("Invalid input");
            }
    else {
          q=sq(a,b,c,d,o);
          printf("%.4f",q);
          }
    return 0;
}
double sq(double a,double b,double c,double d,double o)
{
      double s=0,g=0;
      s=(a+b+c+d)/2;
      g=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o)*cos(o));
      return g;
}
