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
double a=0,b=0,c=0,d=0,e=0,f=0,s=0;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
f=(a+b+c+d)/2;
s=sqrt((f-a)*(f-b)*(f-c)*(f-d)-a*b*c*d*cos(e/360*pi)*cos(e/360*pi));
if(s>=0)
printf("%.4lf",s);
else
printf("Invalid input\n");

return 0;
}

