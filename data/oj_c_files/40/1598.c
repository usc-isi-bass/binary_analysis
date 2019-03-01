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

void main()
{
	double a,b,c,d,e,S,s,PI=3.1415926,E;
	double A,B,C;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	E=(e/2)*(PI/180);
	A=(s-a)*(s-b)*(s-c)*(s-d);
	B=cos(E)*cos(E)*a*b*c*d;
	C=A-B;
	if(C<0) printf("Invalid input\n");
	if(C>=0) 
	{
		S=sqrt(C);
		printf("%.4lf\n",S);
	}
}


