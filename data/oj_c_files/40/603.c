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


int main(int argc, char* argv[])
{
float a,b,c,d;
double e,f,g,h,i,s;
scanf("%f%f%f%f%lf",&a,&b,&c,&d,&e);
s=(a+b+c+d)/2;
h=e/360*pi;
f=cos(h);
i=f*f;
if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*i<0)
printf("Invalid input\n");
else
{
g=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*i); 
printf("%.4f\n",g);
}
return 0;
}

