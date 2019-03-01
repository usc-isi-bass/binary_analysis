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
	double a, b, c, d, S, s, k, t;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &k);
	s = (a+b+c+d)/2;
	t = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*(PI)/180/2)*cos(k*(PI)/180/2);
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*(PI)/180/2)*cos(k*(PI)/180/2));
    if (t < 0)
		printf("Invalid input");
	else
		printf("%.4lf", S);
}