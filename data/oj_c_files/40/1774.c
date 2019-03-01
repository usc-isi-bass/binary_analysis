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
	double a,b,c,d,y,x,S,s,m;
	scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
    y=x*PI/180;
	m=cos(y/2);
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m)<0)
		printf ("Invalid input");
	else{
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m); 
	printf ("%.4lf\n",S);
	}
	return 0;
}