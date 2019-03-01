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
float a,b,c,d,r,t,s;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&t);
s=(a+b+c+d)/2;
r=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(t/360*3.1415926)*cos(t/360*3.1415926); 
if(r<0)
{
printf("Invalid input");
}
else
{
printf("%.4f",sqrt(r));
}
return 0;
}