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


int main(int argc, char* argv[])
{
	int k, n, i, j;
	double x[5000], sum, aver, a , b;
	
	scanf("%d\n", &k);

	for(i = 0; i < k; i++)
	{
		scanf("%d\n", &n);

		sum = 0;
		for(j = 0; j < n; j++)
		{
			scanf("%lf", &x[j]);
	        sum += x[j];
		}
		aver = sum/n;

		a = 0;
		for(j = 0; j < n; j++)
		{
			a += pow((x[j] - aver), 2); 
		}
		b = sqrt(a/n);

		printf("%.5lf\n", b);

	}

	return 0;
}


