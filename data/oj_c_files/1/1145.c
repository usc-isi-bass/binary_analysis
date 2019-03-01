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

int Factor(int, int);
int main()
{
	int n, a, i;
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",Factor(a, 2));
	}
	return 0;
}
int Factor(int a,int p)
{
	int i, j, z = 1;
	if (a < p)
		z = 0;
	else
	{
		for (i = p;i <= a;i++)
		{
			if (a % i == 0)
			{
				z += Factor(a / i, i);
			}
		}
	}
	return z;
}