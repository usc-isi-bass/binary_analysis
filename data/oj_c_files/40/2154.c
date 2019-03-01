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
	double a,b,c,d,S,s,p;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&p);
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(p*3.1415926/180/2)*cos(p*3.1415926/180/2)); 
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(p*3.1415926/180/2)*cos(p*3.1415926/180/2))<0)
		printf("Invalid input");
	else
		printf("%.4lf",S);
	return 0;
}

