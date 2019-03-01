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
	int n, a[5], i = 0, j;
	scanf("%d", &n);
	if (n >= 10)
	{
		while (n >= 10)
		{
			a[i] = n % 10;
			n = (n - a[i]) / 10;
			i++;
		}
		for (j = 0; j <= i - 1; j++)
			printf("%d", a[j]);
	}
	else
		;
	printf("%d", n);
}