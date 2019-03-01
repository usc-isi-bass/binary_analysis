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
	float a,b,c,d,s,S,m,n;
	float A,e;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&A);
	s=(float)(a+b+c+d)/2;
	n=(s-a)*(s-b)*(s-c)*(s-d);
	e=(float)A*3.1415926/360;
	m=a*b*c*d*cos(e)*cos(e);
	if(n<0)
		printf("Invalid input\n");
	else
	{
	S=sqrt(n-m);

	printf("%.4f\n",S);
	}
	return 0;
}