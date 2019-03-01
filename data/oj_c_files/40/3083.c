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


int main(int argc, char *argv[])
{
  double a,b,c,d,alpha,area,s;
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&alpha);
  s=(a+b+c+d)/2;
  if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(alpha/2)*cos(alpha/2))>0)
  {
      area=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(alpha/360*pi)*cos(alpha/360*pi));
      printf("%.4lf",area);
  }
  else printf("Invalid input");
  return 0;
}
