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

float m(float,float,float,float,float);
void main()
{
float a,b,c,d,an,s;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&an);
if(m(a,b,c,d,an)<0)
printf("Invalid input\n");
else 
{s=sqrt(m(a,b,c,d,an));
printf("%.4f\n",s);
}
}


float m(float a,float b,float c,float d,float an)
{float s,e;
e=(a+b+c+d)/2;
s=(e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*pow(cos(an*3.1415926/360),2);
return s;
}
