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

double pai=3.1415926;
void main()
{
	double a, b, c, d, x, y_hudu;
	double s, S;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &x);
	s = (a+b+c+d)/2;
	y_hudu=(x/360)*pai;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y_hudu)*cos(y_hudu)<0) printf("Invalid input");
	else {S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y_hudu)*cos(y_hudu));printf("%.4f",S);};
}