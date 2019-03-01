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


const double pi=3.1415926;
double Area(double a,double b,double c,double d,double angle)
{
    double s=(a+b+c+d)/2;
    angle=(angle/2)/360*2*pi;
    double square=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
    if (square<0) return -1;
    return sqrt(square);
}
int main()
{
  double a,b,c,d,angle,ans;
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
  ans=Area(a,b,c,d,angle);
  if (ans>=0) printf("%.4lf",ans);
  else printf("Invalid input");
  return 0;
}