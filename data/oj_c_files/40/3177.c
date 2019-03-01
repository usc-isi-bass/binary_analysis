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

main()
{
       double a,b,c,d;
       double S,s;
       double q,y,w;
       scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&q);
       s=(a+b+c+d)/2;
       w=(double)q*PI/180;
       y=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((double)(w/2))*cos((double)(w/2));
       if(y<0)
       printf("Invalid input\n");
       else
       {S = sqrt(y); 
       printf("%.4f\n",S);}
}
