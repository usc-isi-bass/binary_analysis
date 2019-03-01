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

void main()
{
	double a,b,c,d,e,f,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = (a+b+c+d)/2;

S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(3.1415926*e/360)*cos(3.1415926*e/360)); 
    
S>0?printf("%.4lf",S):printf("Invalid input");

}