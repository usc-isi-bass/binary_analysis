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
    float a,b,c,d;
	float e;
	double f,s,S;
    
	scanf("%f%f%f%f",&a,&b,&c,&d);
	s=(double)1/2*(a+b+c+d);
	scanf("%f",&e);
	f=(double)e/360*pi;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f)<0)
	{
		printf("Invalid input\n");
	}
	else
	{
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f));
	printf("%.4lf\n",S);
	}
	return 0;
}
