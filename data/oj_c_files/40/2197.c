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

int main()
{double a,b,c,d,e,s,l,k;
 scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);

s = (a+b+c+d)/2;
k=e/180*3.1415926;
if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k/2)*cos(k/2)<0)
printf("Invalid input");
if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k/2)*cos(k/2)>0)
{l = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k/2)*cos(k/2)); 
printf("%.4lf",l);}
return 0;
}