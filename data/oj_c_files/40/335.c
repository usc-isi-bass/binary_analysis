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
  double cal(double,double,double,double,double,double);
  double S,a,b,c,d,s,x;
  scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&x);
  s=(a+b+c+d)/2;
  S=cal(a,b,c,d,s,x);
  if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos((x/360)*3.1415926)*cos((x/360)*3.1415926)<-0.00001)
	  printf("Invalid input");
  else 
	  printf("%.4lf",S);
}

double cal(double a,double b,double c,double d,double s,double x)
{    
	 double S;
	 s=(a+b+c+d)/2;
	 S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos((x/360)*3.1415926)*cos((x/360)*3.1415926)); 
	 return(S);
}