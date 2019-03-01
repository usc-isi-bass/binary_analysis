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


double mianji(double a,double b,double c,double d,double s,double ww)
{
    double www;
    double PI=3.1415926;
    www= (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ww*PI/360)*cos(ww*PI/360);
    if(www<0)
    {
             
             return(-1);}
    else
    return(sqrt(www));
} 
main()
{
      double a,b,c,d;
      scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
      double s=(a+b+c+d)/2;
      double ww;
      scanf("%lf",&ww);
      ww=ww;
      double ss=-1;
      ss=mianji(a,b,c,d,s,ww);
      if(ss>=0)
      printf("%.4lf",ss);
      else
      printf("Invalid input");
}
