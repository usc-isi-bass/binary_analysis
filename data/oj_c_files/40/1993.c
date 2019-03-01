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

int main(void){
double a,b,c,d;
double n;
double S,s;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&n);
s=(a+b+c+d)/2;
if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(1.0000*n*PI/360)*cos(1.0000*n*PI/360)>0) {
S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(1.0000*n*PI/360)*cos(1.0000*n*PI/360)); 
printf("%.4lf",S);}
else 
{printf("Invalid input");}
return 0;
}
                          