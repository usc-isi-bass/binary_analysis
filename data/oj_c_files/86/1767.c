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
    int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int j, t = 0, sum = 0, m, a = 0, b, flag = 1;
		scanf("%d", &m);
		for (j = 0; j < m; j++)
		{
			b = a;
			scanf("%d", &a);
			if (flag == 0)
				continue;
			t += a - b;
			if (t <= 60)
				sum += a - b;
			else
			{
				t += b - a;
				sum += 60 - t;
				flag = 0;
			}
			t += 3;
			if (t >= 60 && flag == 1)
				flag = 0;
		}
		if (t < 60 && flag == 1)
			sum += 60 - t;
		printf("%d\n", sum);
	}
	return 0;
}
