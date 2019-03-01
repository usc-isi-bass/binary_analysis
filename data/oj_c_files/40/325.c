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

double f(double a,double b,double c,double d,double angle){
 double s,S;
s = 0.5*(a+b+c+d);
S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle/360*P)*cos(angle/360*P));
return S;}
int main()
{ 
 double a,b,c,d,angle,s,m;
scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&angle);
s = 0.5*(a+b+c+d); 
m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle/360*P)*cos(angle/360*P);
if(m<0)
printf("Invalid input");
else
printf("%.4lf",f(a,b,c,d,angle));
return 0;
} 