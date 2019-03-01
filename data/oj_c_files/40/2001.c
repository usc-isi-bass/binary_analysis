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

double a, b, c, d, s;
scanf("%lf%lf%lf%lf",&a, &b, &c, &d);
s = (a+b+c+d)/2;

double w, x, W, X;
scanf("%lf%lf", &w, &x);
W = w / 180 * PI;
X = x / 180 * PI;

double R, M;
M =(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(W/2+X/2)*cos(W/2+X/2);

if(M<0)
	printf("Invalid input");
else
	{
	R = sqrt(M);
	printf("%.4lf", R);
	}

return 0;
}
