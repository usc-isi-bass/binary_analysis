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

int main(int argc, char* argv[])
{
	double a,b,c,d,p,q,s,y;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&p);
	s=0.5*(a+b+c+d);
	q=0.5*p/180*3.1415926;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q))>=0){
		y=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q));
	    printf("%.4lf\n",y);
	}
	else{
		printf("Invalid input\n");
	}
	return 0;
}