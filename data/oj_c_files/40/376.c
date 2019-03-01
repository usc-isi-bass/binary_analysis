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
	double a,b,c,d,e,s,t,g,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	g=e*3.1415926/360;
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) -a*b*c*d*cos(g)*cos(g));
          t=(s-a)*(s-b)*(s-c)*(s-d) -a*b*c*d*cos(g)*cos(g);
	if (t>=0)
	{
		printf("%.4f\n",S);
	}
	else
	{
		printf("Invalid input\n");
	}
	return 0;
}