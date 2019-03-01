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


double square(double a1,double b1,double c1,double d1,double jiao1)
{
double s=(a1+b1+c1+d1)/2;
double k=cos(jiao1/2)*cos(jiao1/2);
if(((s-a1)*(s-b1)*(s-c1)*(s-d1)-a1*b1*c1*d1*k)<0) return 0;
else 
{
	double S=sqrt((s-a1)*(s-b1)*(s-c1)*(s-d1)-a1*b1*c1*d1*k); 
    return S;
}

}

void main()
{
double S,a,b,c,d,jiao;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jiao);
jiao=jiao/360*2*3.1415926;
S=square(a,b,c,d,jiao);
if(S==0)printf("Invalid input");
else
printf("%.4lf",S);

}