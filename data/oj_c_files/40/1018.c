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
	float a,b,c,d,e;
	double s,S,Q;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	s = (double)(a+b+c+d)/2;
	Q = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(pow(cos(e*3.1415926/360),2));
	if (Q>=0){
		S = sqrt(Q);
		printf("%.4lf",S);
	}
	else
		printf("Invalid input");
	return 0;
}