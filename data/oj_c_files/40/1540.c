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

double area(double a,double b,double c,double d,double e)
 {
  double s,k;
  s=(a+b+c+d)/2;
  e=cos(e/360*PI);
  e=e*e;
  s=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e);
  if (s>=0)
  k=sqrt(s);
  else k=-1;
  return k;
 }

int main()
{
 double a1,b1,c1,d1,e1,s1;
 scanf("%lf%lf%lf%lf%lf",&a1,&b1,&c1,&d1,&e1);
 s1=area(a1,b1,c1,d1,e1);
 if (s1==-1)
  printf("Invalid input");
 else
  printf("%.4lf",s1);
  return 0;
}