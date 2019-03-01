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
	int n, k, i, j;
	double a[1000], ave=0, sum=0, s=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &k);
		for(j=0;j<k;j++)
		{
			scanf("%lf", &a[j]);
		}

		for(j=0;j<k;j++)
		{
			ave += a[j];
		}
		ave = ave/k;
		for(j=0;j<k;j++)
		{
			sum += (a[j] - ave) * (a[j] - ave);
		}
		s = sqrt(sum/k);
		printf("%.5lf\n", s);

		ave = 0;
		sum = 0;
		s = 0;
	}
	return 0;
}
