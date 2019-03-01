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
	double a,b,c,d,x,m,S,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	m=PI/180*x/2;
    s = 1*(a+b+c+d)/2;
	S = (sqrt) ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)); 

	if ( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m) >=0 )
    printf("%.4f\n",S);
	else 
	printf("Invalid input\n",S);
	return 0;
}