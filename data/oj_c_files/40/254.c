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
	const double PI = 3.1415926;
	double S, a, b, c, d;
	double s, alpha, inTheSqrt;
	scanf( "%lf", &a);
	scanf( "%lf", &b);
	scanf( "%lf", &c);
	scanf( "%lf", &d);
	s = ( a + b + c + d ) / 2;
	scanf( "%lf", &alpha);
	inTheSqrt = (s-a) * (s-b) * (s-c) * (s-d) - a * b * c * d * pow( cos(alpha/360*PI), 2);
	if( inTheSqrt < 0) {
		printf( "Invalid input\n");
		return;
	}
	S = sqrt( inTheSqrt); 
	printf("%.4lf\n", S);
}