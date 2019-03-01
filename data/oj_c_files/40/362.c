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
    double a,b,c,d,w;
	double S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&w);
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(w*PI/360)*cos(w*PI/360));
	if (S>=0)
	printf("%.4lf",S);
	else 
		printf("Invalid input");
	return 0;
}