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
	int n;
	int i;
	int j[50];
	int b;
	double k[100];
	double sum;
	double a;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d", &j[i]);
		for(b=0; b<j[i]; b++)
		{
			scanf("%lf", &k[b]);
		}

		sum = 0;

		for(b=0; b<j[i]; b++)
		{
			sum += k[b];
		}
	
		a = sum / (j[i]);
		sum = 0;

		for(b=0; b<j[i]; b++)
		{
			sum += (k[b] - a) * (k[b] - a);
		}

		sum = sqrt(sum / j[i]);
		printf("%.5lf\n", sum);
	}
	return 0;
}