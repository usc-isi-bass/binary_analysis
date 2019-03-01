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

double  area(double  a,double  b,double   c,double  d,double  j)
{      double  s,t,S,pi=3.1415926;
       s=(double)(a+b+c+d)/2;
       t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos((double)(j*pi)/360)*cos((double)(j*pi)/360);
       if(t<0)
       return(-1);
else 
       S = (double)sqrt(t);
       
       return(S);
}
    int  main()
  {
         double   a,b,c,d,j,S;
         
         scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&j);
         S=area(a,b,c,d,j);
         if(S==-1)
         printf("Invalid input");
     else    
         printf("%.4lf",S);
    }               