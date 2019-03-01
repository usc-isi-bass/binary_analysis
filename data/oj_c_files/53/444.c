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
	int a[10000],d[1000] = {0};
	int i, j, n, b,m,k,sum = 0;
	scanf("%d",&n);
	for (i = 0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	d[0] = a[0];
	for (i = 1; i<n; i++)
	{
		for (j = 0;j<i;j++)
		{
			if (a[i] == d[j])
			{
				break;
			}
		d[i] = a[i];
		if (j == i-1)
        printf(",%d",a[i]);
		}
	}
}
