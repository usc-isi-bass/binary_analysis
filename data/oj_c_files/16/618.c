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
	int n,m,*a,i;
	scanf("%d", &n);
	if (n != 0)
	{
		m = floor(log10(n)) + 1;
		a = (int*)malloc(sizeof(int)*m);
		for (i = 1; i <= m; i++)
		{
			*(a + i - 1) = n % 10;
			n = (n - *(a + i - 1)) / 10;
		}
		for (i = 1; i <= m; i++)
			printf("%d", *(a + i - 1));
	}
	else
		printf("0");
}