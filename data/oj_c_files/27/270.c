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
	double n, x1, x2, a, b, c, i, delta;
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		cin >> a >> b >> c;
		delta = b * b - 4 * a * c;
		if (delta == 0)
		{
			x1 = x2 = (double)(- b / (2 * a));
			printf("x1=x2=%.5lf\n", x1);
		}
		else if(delta > 0)
		{
			x1 = (double)(-b + sqrt(delta))/(2 * a);
			x2 = (double)(-b - sqrt(delta))/(2 * a);
			printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		else if (delta < 0)
		{
			delta = - delta;
			double i, x;
			i = sqrt(delta) / (2 * a);
			x = -b / (2 * a);
			if (x == - 0)
				x = 0;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x, i, x, i);
		}
	}
	return 0;
}