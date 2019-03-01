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
	int m, n, i, j, p, q, t;
	float sum;
	scanf("%d", &m);
	for(i=0; i<m; i++)
	{
		scanf("%d", &n);
		sum=0;
		p=2;
		q=1;
		for(j=0; j<n; j++)
		{
			sum+=(float)p/(float)q;
			t=p;
			p=p+q;
			q=t;
		}
		printf("%.3f\n", sum);
	}
}