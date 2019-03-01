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
{
double a,b,c,d,s,S,e;
double m,n;
scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&m);
n = 3.1415926*m/360;
s = (a+b+c+d)/2;
e = ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(n)*cos(n)); 
if (e>=0)
{
S = sqrt(e);
printf("%.4lf",S);
}
else{
printf("Invalid input");
}
return 0;
}