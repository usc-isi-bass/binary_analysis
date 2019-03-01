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
	int n, i = 1, j = 1;
	double dis, x[100], y[100], d[100][100];
			scanf("%d\n", &n);
    /*??????*/
	for(i = 1; i <= n; i++)
		scanf("%lf %lf\n", &x[i], &y[i]);

    /*????????*/
	for(i = 1; i <= n; i++)
	{
		for(j = 1;j <= n; j++)
			d[i][j] = sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
	}
    /*???????*/
	dis = d[1][1];
	for(i = 1; i <= n; i++)
	{
		for(j = 1;j <= n; j++)
		{
			if (d[i][j] >= dis)
				dis = d[i][j];
		}
	}
	printf("%.4f\n", dis);	
}