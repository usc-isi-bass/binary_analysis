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
	scanf("%d",&n);
	int max, lmax;
	int temp;
	int i = 0;
	if (n <= 1 || n >= 100)
	return 0;


	scanf("%d", &temp);
		max = temp;
	scanf("%d", &temp);
	if (temp > max)
	{
		lmax = max;
		max = temp;
	}
	else
		lmax = temp;

	i += 2;

	while (i < n)
	{
		scanf("%d", &temp);
		i++;
		if(temp > max)
		{
			lmax = max;
			max = temp;
		}
		else if (temp > lmax) {
			lmax = temp;
		}
	}
	printf("%d\n", max);
	printf("%d\n", lmax);
	return 0;
}