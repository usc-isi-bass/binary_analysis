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

int main ()
{
  double a,b,c,d,s,e,m,n,f;
  double p=3.1415926;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  scanf("%lf",&d);
  scanf("%lf",&e);
  e=e*p/360;
  s=(a+b+c+d)/2;
  m=(s-a)*(s-b)*(s-c)*(s-d);
  f=m-a*b*c*d*cos(e)*cos(e);
 
  if(f<0) 
  {
 printf("Invalid input");
  }
  else
  {  
    n=sqrt(f);
  printf("%.4lf",n);
  }
 return 0;
}