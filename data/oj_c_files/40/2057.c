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
	double mian(double a,double b,double c,double d,double j);
	double a,b,c,d,j,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&j);
	s=mian(a,b,c,d,j);
	if(s==0)printf("Invalid input");
	else printf("%.4lf",s);
}
double mian(double a,double b,double c,double d,double j)
{
  double q,w,s,e;
  q=j/2/180*3.1415926;
  s=(a+b+c+d)/2;
  w=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d* cos(q)*cos(q);
  if(w<0)return(0);
  else
  {
	  e=sqrt(w);
  return(e);
  }
}