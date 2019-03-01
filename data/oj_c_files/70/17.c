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
	int n,i,j;
	float x,y;
	struct point
	{
		float x;
		float y;
	}p[100];
	double s;
	double smax = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf ("%f%f", &x, &y);
		p[i].x = x;
		p[i].y = y;
	}
	for (i = 0; i < n; i++)
	{
		for (j=0; j < n; j++)
		{

		    s= sqrt ( (p[i].x-p[j].x) * (p[i].x-p[j].x) + (p[i].y-p[j].y) * (p[i].y-p[j].y) );
		    if (smax >= s)
			{
				continue;
			}
			else
			{
				smax = s;
			}
		}
	}
	printf("%.4lf\n" , smax);
	return 0;
}