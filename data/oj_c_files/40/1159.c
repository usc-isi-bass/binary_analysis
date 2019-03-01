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

int main(){
	double a,b,c,d,s,S,x,p;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	s=(a+b+c+d)/2;
	scanf("%lf",&x);
	x=x/360*3.1415926;
	p=(s-a)*(s-b)*(s-c)*(s-d);
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x)*cos(x));
	if(p<0)
		printf("Invalid input");
	else
		printf("%.4lf",S);
	return 0;
}