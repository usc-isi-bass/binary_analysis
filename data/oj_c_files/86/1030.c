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
	int a[60];
	int n,m, i = 0, j = 0, count = 60;
	scanf("%d", &m);
	for (j = 0; j < m; j++)
	{
		count = 60;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] < count)
		{
			if (a[i] < count - 3)
			{
				count -= 3;
			}
			else
			{
				count = a[i];
				break;
			}
		}
		else
			break;
	}

	printf("%d\n", count);
	}
	return 0;
}