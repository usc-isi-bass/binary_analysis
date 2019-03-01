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
	double a,b,c,d,e,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=1.0/2*(a+b+c+d);
	double f=3.1415926*e/360;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f));
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(3.1415926*e/2/180)*cos(3.1415926*e/2/180))<0)
	printf("Invalid input\n");
	else
	printf("%.4lf",S);
	return 0;
}