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
	double a,b,c,d,e,g;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	g=e/180*PI;
    double f,s,S;
	s=(double)1/2*(a+b+c+d);
	f=(double)(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(g/2)*cos(g/2);
	if(f>=0){S=(double)sqrt(f);
	printf("%.4lf",S);}
	else {printf("Invalid input");}
	return 0;
}